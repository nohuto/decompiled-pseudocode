/*
 * XREFs of KiCompleteBootProcessorContextInitialization @ 0x1405B3888
 * Callers:
 *     KeStartAllProcessors @ 0x140C28DA8 (KeStartAllProcessors.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiAllocateDpcDelegateThread @ 0x1405B2BD0 (KiAllocateDpcDelegateThread.c)
 *     KiAllocateIdleSearchStructures @ 0x1405B2C58 (KiAllocateIdleSearchStructures.c)
 *     KiStartPrcbThread @ 0x1405B55AC (KiStartPrcbThread.c)
 *     KiAllocateSmtIsolationThread @ 0x1405C00B4 (KiAllocateSmtIsolationThread.c)
 *     KiAllocateForceParkingData @ 0x1405C5948 (KiAllocateForceParkingData.c)
 *     KiResetBootProcessorApicMask @ 0x1407392E4 (KiResetBootProcessorApicMask.c)
 *     MmAllocateIsrStack @ 0x1407F72DC (MmAllocateIsrStack.c)
 *     KiInitializePrcbContext @ 0x140B58980 (KiInitializePrcbContext.c)
 */

__int64 KiCompleteBootProcessorContextInitialization()
{
  KPCR *Pcr; // rsi
  struct _KPRCB *CurrentPrcb; // rdi
  __int64 result; // rax
  int v3; // r8d
  int v4; // r9d
  unsigned int i; // ebx
  char *v6; // rax
  unsigned int v7; // ebx
  unsigned __int8 CurrentIrql; // si
  _KTHREAD *v9; // rbx
  _KTHREAD *v10; // rbx
  char *v11; // [rsp+40h] [rbp+8h] BYREF
  _KTHREAD *v12; // [rsp+48h] [rbp+10h] BYREF
  _KTHREAD *v13; // [rsp+50h] [rbp+18h] BYREF

  Pcr = KeGetPcr();
  v12 = 0LL;
  v13 = 0LL;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( !HalpInterruptHyperThreading )
    KiResetBootProcessorApicMask();
  result = KiInitializePrcbContext(CurrentPrcb, 0LL);
  if ( (int)result >= 0 )
  {
    if ( (unsigned __int8)MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0LL)
      && (v11 = (char *)KeGetPcr()->Prcb.ExceptionStack + 80, (unsigned __int8)MmAllocateIsrStack(&v11, 0LL)) )
    {
      for ( i = 1; i <= 4; ++i )
      {
        v6 = *(char **)((char *)Pcr->NtTib.StackBase + 8 * i + 28);
        v11 = v6;
        if ( KiKvaShadow )
          v11 = (char *)(*((_QWORD *)v6 + 1) + 32LL);
        if ( !(unsigned __int8)MmAllocateIsrStack(&v11, 0LL) )
          return 3221225495LL;
      }
      v7 = CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0];
      result = KiAllocateDpcDelegateThread(&v12, v7, v3, v4);
      if ( (int)result >= 0 )
      {
        result = KiAllocateSmtIsolationThread(&v13, v7);
        if ( (int)result >= 0 )
        {
          result = KiAllocateIdleSearchStructures((__int64)CurrentPrcb);
          if ( (int)result >= 0 )
          {
            result = KiAllocateForceParkingData(CurrentPrcb);
            if ( (int)result >= 0 )
            {
              CurrentIrql = KeGetCurrentIrql();
              __writecr8(2uLL);
              if ( KiIrqlFlags )
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
              v9 = v12;
              KiStartPrcbThread(v12, CurrentPrcb);
              CurrentPrcb->DpcDelegateThread = v9;
              v10 = v13;
              if ( v13 )
              {
                KiStartPrcbThread(v13, CurrentPrcb);
                CurrentPrcb->SmtIsolationThread = v10;
              }
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              return 0LL;
            }
          }
        }
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
