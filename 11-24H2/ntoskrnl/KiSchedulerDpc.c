/*
 * XREFs of KiSchedulerDpc @ 0x1406966D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlWriteTryAcquireTickLock @ 0x1402ABFF8 (RtlWriteTryAcquireTickLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiMcaDeferredRecoveryService @ 0x1406B6A50 (KiMcaDeferredRecoveryService.c)
 */

void __fastcall __noreturn KiSchedulerDpc(
        struct _KDPC *Dpc,
        _QWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  struct _KTHREAD *v5; // rax
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int8 CurrentIrql; // cl

  switch ( DeferredContext[13] % 0xAuLL )
  {
    case 5uLL:
      RtlWriteTryAcquireTickLock((signed __int64 *)(MmWriteableSharedUserData + 832));
      break;
    case 6uLL:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
      break;
    case 7uLL:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      break;
    case 8uLL:
      v5 = KeGetCurrentThread();
      --v5->SpecialApcDisable;
      break;
    case 9uLL:
      _disable();
      break;
  }
  KiMcaDeferredRecoveryService(
    (unsigned int)__ROR4__(67840, 104),
    DeferredContext[9],
    DeferredContext[10],
    DeferredContext[11],
    DeferredContext[12]);
}
