/*
 * XREFs of KeSetPriorityBoost @ 0x1402DFC90
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     FsRtlpDoBoost @ 0x14047A9E8 (FsRtlpDoBoost.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiCheckForThreadDispatch @ 0x1402C5DAC (KiCheckForThreadDispatch.c)
 *     KiDeferredReadySingleThread @ 0x1402C78D0 (KiDeferredReadySingleThread.c)
 *     KiFlushSoftwareInterruptBatch @ 0x1402C8860 (KiFlushSoftwareInterruptBatch.c)
 *     KiSetPriorityBoost @ 0x1402DFE70 (KiSetPriorityBoost.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentPrcb = KeGetCurrentPrcb();
    if ( *(char *)(a1 + 195) <= 0 || *(char *)(a1 + 195) >= a2 )
      goto LABEL_25;
    v9 = 0;
    v10 = *(_QWORD *)(a1 + 72);
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
          KiDeferredReadySingleThread(CurrentPrcb, (unsigned __int64)&Next[-27], &v13, 0LL);
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
LABEL_25:
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      LOBYTE(v2) = CurrentIrql;
      __writecr8(CurrentIrql);
    }
  }
  return (char)v2;
}
