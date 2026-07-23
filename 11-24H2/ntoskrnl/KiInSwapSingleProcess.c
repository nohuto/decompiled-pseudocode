/*
 * XREFs of KiInSwapSingleProcess @ 0x1402D5EF4
 * Callers:
 *     KiStackAttachProcess @ 0x1402C9570 (KiStackAttachProcess.c)
 *     KiAttachProcess @ 0x1402CAFF0 (KiAttachProcess.c)
 *     KeReadyThread @ 0x1402DDFE8 (KeReadyThread.c)
 * Callees:
 *     KeSetEvent @ 0x140227B30 (KeSetEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiSwapThread @ 0x1402D60C0 (KiSwapThread.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402D6BB8 (MmNotifyProcessInSwapTrigger.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KiInSwapSingleProcess(ULONG_PTR a1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // r14
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rdx
  char v8; // r15
  unsigned int v9; // ebp
  _QWORD *v10; // rdx
  _QWORD *v11; // rax
  signed __int64 *v13; // rbx
  signed __int64 v14; // rax
  signed __int64 v15; // rcx

  v4 = a3;
  v6 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  if ( (*(_DWORD *)(a2 + 264) & 7) != 0 )
  {
    v8 = 0;
    v9 = 0;
    *(_DWORD *)(a1 + 436) = MEMORY[0xFFFFF78000000320];
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(a1 + 64) );
    }
    *(_BYTE *)(a1 + 388) = 9;
    if ( (*(_DWORD *)(a1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 0xCu);
    *(_QWORD *)(a1 + 64) = 0LL;
    v10 = *(_QWORD **)(a2 + 112);
    v11 = (_QWORD *)(a1 + 216);
    if ( *v10 != a2 + 104 )
      __fastfail(3u);
    *v11 = a2 + 104;
    *(_QWORD *)(a1 + 224) = v10;
    *v10 = v11;
    *(_QWORD *)(a2 + 112) = v11;
    if ( (*(_DWORD *)(a2 + 264) & 7) == 1 )
    {
      _InterlockedXor((volatile signed __int32 *)(a2 + 264), 3u);
      v8 = 1;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    if ( v8 )
    {
      MmNotifyProcessInSwapTrigger(a2);
      v13 = (signed __int64 *)(a2 + 120);
      _m_prefetchw(&KiProcessInSwapListHead);
      v14 = KiProcessInSwapListHead;
      do
      {
        *v13 = v14;
        v15 = v14;
        v14 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v13, v14);
      }
      while ( v14 != v15 );
      if ( !v14 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_KTHREAD *)a1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(a1 + 643) = 23;
      *(_BYTE *)(a1 + 390) = v4;
      KiSwapThread(a1);
      return v6;
    }
  }
  else
  {
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    v6 = 0;
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(CurrentPrcb) = v4;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentPrcb);
  }
  __writecr8(v4);
  return v6;
}
