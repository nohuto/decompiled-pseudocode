/*
 * XREFs of KiWakePriQueueWaiter @ 0x1402E6BE0
 * Callers:
 *     ExpTryQueueWorkItem @ 0x14028214C (ExpTryQueueWorkItem.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x14029FAB0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402A1650 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiActivateWaiterPriQueue @ 0x1402A1A38 (KiActivateWaiterPriQueue.c)
 *     ExQueueWorkItemFromIo @ 0x1402E59A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402E6800 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 * Callees:
 *     KiQueryQuantumReset @ 0x1402E5930 (KiQueryQuantumReset.c)
 *     KiAbQueueAutoBoostDpc @ 0x1402E5E60 (KiAbQueueAutoBoostDpc.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402E673C (KiAdjustRealtimePriorityFloor.c)
 *     KiSignalThread @ 0x1402E6E10 (KiSignalThread.c)
 *     KiComputeThreadPriority @ 0x1402E7250 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402E7840 (KiSetPriorityThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

__int64 __fastcall KiWakePriQueueWaiter(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // r15
  _QWORD *v8; // rax
  _QWORD *v9; // rsi
  _QWORD *v10; // rcx
  unsigned __int8 v11; // bp
  unsigned int v12; // edi
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  struct _KDPC *CurrentPrcb; // r8
  PVOID *v16; // rcx
  PVOID *p_SystemArgument2; // rdx
  int QuantumReset; // eax
  unsigned int v19; // r11d
  __int64 v20; // r8
  __int64 v21; // rcx
  int v23; // edx
  __int64 v24; // rcx

  v4 = *(_QWORD **)(a2 + 8);
  v5 = (_QWORD *)(a2 + 8);
  v6 = a4;
  do
  {
    v8 = (_QWORD *)*v4;
    v9 = v4;
    v4 = v8;
    v10 = (_QWORD *)v9[1];
    if ( (_QWORD *)v8[1] != v9 || (_QWORD *)*v10 != v9 )
      __fastfail(3u);
    *v10 = v8;
    v11 = 0;
    v8[1] = v10;
    v12 = 0;
    v13 = v9[3];
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(v13 + 64) );
    }
    if ( *(_BYTE *)(v13 + 388) == 5 )
    {
      v14 = (unsigned __int8)*(_DWORD *)(v13 + 540);
      if ( (_DWORD)v14 != (_DWORD)v6 )
      {
        v23 = *(_DWORD *)(v13 + 540) & 0x100;
        if ( !v23 )
        {
          v24 = *(_QWORD *)(v13 + 232);
          _InterlockedDecrement((volatile signed __int32 *)(v24 + 4 * v14 + 536));
          _InterlockedIncrement((volatile signed __int32 *)(v24 + 4 * v6 + 536));
        }
        *(_DWORD *)(v13 + 540) = (unsigned __int8)v6 | v23;
      }
      v11 = KiSignalThread(a1, v13, a3, v9);
      if ( v11 )
      {
        *(_BYTE *)(v13 + 645) = 0;
        CurrentPrcb = (struct _KDPC *)KeGetCurrentPrcb();
        if ( (char)v6 < *(char *)(v13 + 563) )
        {
          if ( *(_BYTE *)(v13 + 793) )
          {
            v16 = (PVOID *)(v13 + 816);
            if ( *(_QWORD *)(v13 + 816) == 1LL )
            {
              p_SystemArgument2 = &CurrentPrcb[581].SystemArgument2;
              if ( CurrentPrcb != (struct _KDPC *)-37232LL )
              {
                *v16 = *p_SystemArgument2;
                *p_SystemArgument2 = v16;
                _InterlockedIncrement16((volatile signed __int16 *)(v13 + 868));
                KiAbQueueAutoBoostDpc(CurrentPrcb);
              }
            }
          }
        }
        *(_BYTE *)(v13 + 563) = v6;
        *(_WORD *)(v13 + 518) &= 0xF00Fu;
        *(_BYTE *)(v13 + 870) = 0;
        KiAdjustRealtimePriorityFloor(v13, v6);
        if ( (unsigned int)KiComputeThreadPriority(v13, 0LL) != *(char *)(v13 + 195) )
        {
          QuantumReset = KiQueryQuantumReset(v13);
          v21 = v20 + (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
          if ( (*(_DWORD *)(v13 + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 5u);
          *(_QWORD *)(v13 + 32) = v21;
          KiSetPriorityThread(v13, 0LL, v19);
        }
      }
    }
    *(_QWORD *)(v13 + 64) = 0LL;
    ++*((_BYTE *)v9 + 17);
  }
  while ( !v11 && v4 != v5 );
  return v11;
}
