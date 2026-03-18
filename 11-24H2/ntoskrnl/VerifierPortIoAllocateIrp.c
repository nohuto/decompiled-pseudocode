/*
 * XREFs of VerifierPortIoAllocateIrp @ 0x140B8B0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierPortIoAllocateIrp(char a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  char v4; // di

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a2 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL, 3, a3);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL, 3, v3);
  }
  LOBYTE(a3) = v4;
  LOBYTE(a2) = a1;
  return guard_dispatch_icall_no_overrides(0LL, a2, a3, v3);
}
