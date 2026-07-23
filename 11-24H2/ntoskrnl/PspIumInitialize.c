/*
 * XREFs of PspIumInitialize @ 0x140C37F94
 * Callers:
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402313D4 (VslGetNestedPageProtectionFlags.c)
 *     KeRegisterBugCheckReasonCallback @ 0x1404606D0 (KeRegisterBugCheckReasonCallback.c)
 *     PsIumResumeAfterHibernate @ 0x1404F4A8C (PsIumResumeAfterHibernate.c)
 *     MmAllocateMappingAddress @ 0x140A531D0 (MmAllocateMappingAddress.c)
 *     MmAllocateIndependentPagesEx @ 0x140A8536C (MmAllocateIndependentPagesEx.c)
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
