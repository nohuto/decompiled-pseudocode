/*
 * XREFs of VerifierPortExAllocatePoolWithQuotaTag @ 0x140B9DE90
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1404877E0 (ExAllocatePoolWithQuotaTag.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

PVOID __fastcall VerifierPortExAllocatePoolWithQuotaTag(
        unsigned int PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        __int64 a4)
{
  __int64 v8; // rcx

  if ( (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(196, 266LL, 0LL, 0LL, 0LL, 3u, a4);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(196, 267LL, 0LL, 0LL, 0LL, 3u, a4);
  }
  v8 = PoolType & 0xFFFFFFF7;
  if ( (PoolType & 8) == 0 )
    v8 = PoolType;
  if ( (VfRuleClasses & 0x400000) != 0 && (MmVerifierData & 1) == 0 )
    return ExAllocatePoolWithQuotaTag((POOL_TYPE)v8, NumberOfBytes, Tag);
  LODWORD(v8) = v8 | 0x80;
  return (PVOID)guard_dispatch_icall_no_overrides(v8, 0LL);
}
