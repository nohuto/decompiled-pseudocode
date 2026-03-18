/*
 * XREFs of KeSetPriorityBoost @ 0x140326970
 * Callers:
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     FsRtlpWaitForIoAtEof @ 0x140376284 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpDoBoost @ 0x14047F3B8 (FsRtlpDoBoost.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x140285CEC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402877C0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x140288530 (KiFlushSoftwareInterruptBatch.c)
 *     KiSetPriorityBoost @ 0x140326B50 (KiSetPriorityBoost.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall KeSetPriorityBoost(__int64 a1, int a2)
{
  void *v2; // rax
  char v5; // di
  char v6; // r15
  unsigned __int8 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v9; // ebp
  __int64 v10; // r12
  struct _SINGLE_LIST_ENTRY *Next; // rbx
  struct _SINGLE_LIST_ENTRY v13; // [rsp+60h] [rbp+8h] BYREF

  v2 = &KiInitialProcess;
  if ( *(_UNKNOWN **)(a1 + 544) != &KiInitialProcess )
  {
    v5 = 0;
    v6 = 0;
    v13.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags != LOBYTE(v13.Next) )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= a2 )
      goto LABEL_28;
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 72);
    while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(a1) )
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
    if ( *(char *)(a1 + 195) > 0 && *(char *)(a1 + 195) < a2 )
    {
      v6 = 1;
      KiSetPriorityBoost((unsigned int)&v13, a1, (char)a2, v10, KiLockQuantumTarget);
    }
    *(_QWORD *)(a1 + 64) = 0LL;
    if ( v6 )
    {
      Next = v13.Next;
      if ( v13.Next )
      {
        v13.Next = v13.Next->Next;
        do
        {
          KiDeferredReadySingleThread(CurrentPrcb, (ULONG_PTR)&Next[-27], &v13, 0LL);
          Next = v13.Next;
          ++v5;
          if ( v13.Next )
            v13.Next = v13.Next->Next;
          if ( (v5 & 0xF) == 0 )
            KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
        }
        while ( Next );
      }
      KiFlushSoftwareInterruptBatch((char *)&CurrentPrcb->DeferredDispatchInterrupts);
      LOBYTE(v2) = KiCheckForThreadDispatch(CurrentPrcb, CurrentIrql);
    }
    else
    {
LABEL_28:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return (char)v2;
}
