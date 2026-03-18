/*
 * XREFs of KiInSwapSingleProcess @ 0x1402F28E4
 * Callers:
 *     KiAttachProcess @ 0x1402891A0 (KiAttachProcess.c)
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     KeReadyThread @ 0x1402F1904 (KeReadyThread.c)
 * Callees:
 *     KeSetEvent @ 0x140250100 (KeSetEvent.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     MmNotifyProcessInSwapTrigger @ 0x1402F2AAC (MmNotifyProcessInSwapTrigger.c)
 *     KiSwapThread @ 0x14031CEE0 (KiSwapThread.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KiInSwapSingleProcess(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 v4; // r14
  char v6; // si
  struct _KPRCB *CurrentPrcb; // rdx
  __int64 v8; // rcx
  char v9; // r15
  unsigned int v10; // ebp
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  signed __int64 *v14; // rbx
  signed __int64 v15; // rax
  signed __int64 v16; // rcx

  v4 = a3;
  v6 = 1;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a2);
  if ( (*(_DWORD *)(a2 + 264) & 7) != 0 )
  {
    v9 = 0;
    v10 = 0;
    *(_DWORD *)(BugCheckParameter1 + 436) = MEMORY[0xFFFFF78000000320];
    while ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter1 + 64), 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)(BugCheckParameter1 + 64) );
    }
    *(_BYTE *)(BugCheckParameter1 + 388) = 9;
    if ( (*(_DWORD *)(BugCheckParameter1 + 120) & 0x1000) != 0 )
      _interlockedbittestandreset((volatile signed __int32 *)(BugCheckParameter1 + 120), 0xCu);
    *(_QWORD *)(BugCheckParameter1 + 64) = 0LL;
    v11 = *(_QWORD **)(a2 + 112);
    v12 = (_QWORD *)(BugCheckParameter1 + 216);
    if ( *v11 != a2 + 104 )
      __fastfail(3u);
    *v12 = a2 + 104;
    *(_QWORD *)(BugCheckParameter1 + 224) = v11;
    *v11 = v12;
    *(_QWORD *)(a2 + 112) = v12;
    if ( (*(_DWORD *)(a2 + 264) & 7) == 1 )
    {
      _InterlockedXor((volatile signed __int32 *)(a2 + 264), 3u);
      v9 = 1;
    }
    _InterlockedAnd((volatile signed __int32 *)a2, 0xFFFFFF7F);
    if ( v9 )
    {
      MmNotifyProcessInSwapTrigger(a2);
      v14 = (signed __int64 *)(a2 + 120);
      _m_prefetchw(&KiProcessInSwapListHead);
      v15 = KiProcessInSwapListHead;
      do
      {
        *v14 = v15;
        v16 = v15;
        v15 = _InterlockedCompareExchange64(&KiProcessInSwapListHead, (signed __int64)v14, v15);
      }
      while ( v15 != v16 );
      if ( !v15 )
        KeSetEvent(&KiSwapEvent, 10, 0);
    }
    CurrentPrcb = KeGetCurrentPrcb();
    if ( (_KTHREAD *)BugCheckParameter1 == CurrentPrcb->CurrentThread )
    {
      *(_BYTE *)(BugCheckParameter1 + 643) = 23;
      *(_BYTE *)(BugCheckParameter1 + 390) = v4;
      KiSwapThread(BugCheckParameter1, CurrentPrcb);
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
