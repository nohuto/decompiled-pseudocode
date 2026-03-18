/*
 * XREFs of PspIumInitialize @ 0x140C24B88
 * Callers:
 *     PspInitPhase0 @ 0x140C563A8 (PspInitPhase0.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x14025D590 (VslGetNestedPageProtectionFlags.c)
 *     KeRegisterBugCheckReasonCallback @ 0x140469560 (KeRegisterBugCheckReasonCallback.c)
 *     PsIumResumeAfterHibernate @ 0x1404F463C (PsIumResumeAfterHibernate.c)
 *     MmAllocateMappingAddress @ 0x140A58930 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8508C (MmAllocateIndependentPagesEx.c)
 */

char PspIumInitialize()
{
  PVOID MappingAddress; // rax

  if ( !VslVsmEnabled )
  {
LABEL_7:
    LOBYTE(MappingAddress) = 1;
    return (char)MappingAddress;
  }
  PspIumWorkItem.Parameter = 0LL;
  PspIumWorkItem.List.Flink = 0LL;
  PspIumWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspIumWorker;
  MappingAddress = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
  PspIumFreeMapping = MappingAddress;
  if ( MappingAddress )
  {
    PspIumLogBuffer = MmAllocateIndependentPagesEx(0x2000uLL, -1, -1LL, 1u);
    PsIumResumeAfterHibernate();
    if ( (VslGetNestedPageProtectionFlags(0LL) & 0x40) != 0 )
      *(_QWORD *)&PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL;
    if ( PspIumLogBuffer )
    {
      PspVsmLogCallbackRecord.State = 0;
      KeRegisterBugCheckReasonCallback(
        &PspVsmLogCallbackRecord,
        (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspVsmLogBugCheckCallback,
        KbCallbackSecondaryDumpData,
        (PUCHAR)"SecureKernelFailureLog");
    }
    goto LABEL_7;
  }
  return (char)MappingAddress;
}
