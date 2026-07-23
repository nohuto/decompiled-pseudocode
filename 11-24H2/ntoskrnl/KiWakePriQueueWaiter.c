/*
 * XREFs of KiWakePriQueueWaiter @ 0x1402CD480
 * Callers:
 *     ExQueueWorkItemFromIo @ 0x1402CC8A0 (ExQueueWorkItemFromIo.c)
 *     ExpQueueWorkItem @ 0x1402CD0A0 (ExpQueueWorkItem.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402D4F94 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiActivateWaiterQueueWithThreadLock @ 0x1402D5900 (KiActivateWaiterQueueWithThreadLock.c)
 *     KiActivateWaiterPriQueue @ 0x1402D6C08 (KiActivateWaiterPriQueue.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x140280090 (KiComputeThreadPriority.c)
 *     KiSetPriorityThread @ 0x1402801CC (KiSetPriorityThread.c)
 *     KiAbQueueAutoBoostDpc @ 0x140284100 (KiAbQueueAutoBoostDpc.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiQueryQuantumReset @ 0x1402CCD5C (KiQueryQuantumReset.c)
 *     KiSignalThread @ 0x1402CCDD0 (KiSignalThread.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1402CCFD8 (KiAdjustRealtimePriorityFloor.c)
 */

__int64 __fastcall KiWakePriQueueWaiter(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // r12
  _QWORD *v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rcx
  unsigned __int8 v11; // bp
  unsigned int v12; // edi
  ULONG_PTR v13; // rbx
  __int64 v14; // rax
  struct _KDPC *CurrentPrcb; // r8
  PVOID *v16; // rcx
  PVOID *p_SystemArgument2; // rdx
  int QuantumReset; // eax
  __int64 v19; // r9
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
    v9 = (__int64)v4;
    v4 = v8;
    v10 = *(_QWORD **)(v9 + 8);
    if ( v8[1] != v9 || *v10 != v9 )
      __fastfail(3u);
    *v10 = v8;
    v11 = 0;
    v8[1] = v10;
    v12 = 0;
    v13 = *(_QWORD *)(v9 + 24);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 64), 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
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
        if ( (unsigned int)KiComputeThreadPriority(v13, 0, 0) != *(char *)(v13 + 195) )
        {
          QuantumReset = KiQueryQuantumReset(v13);
          v21 = v20 + (unsigned int)(KiCyclesPerClockQuantum * QuantumReset);
          if ( (*(_DWORD *)(v13 + 120) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)(v13 + 120), 5u);
          *(_QWORD *)(v13 + 32) = v21;
          KiSetPriorityThread((_KTHREAD *)v13, 0LL, (unsigned int)v19, v19);
        }
      }
    }
    *(_QWORD *)(v13 + 64) = 0LL;
    ++*(_BYTE *)(v9 + 17);
  }
  while ( !v11 && v4 != v5 );
  return v11;
}
