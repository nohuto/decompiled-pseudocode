/*
 * XREFs of VerifierIoAllocateIrpEx @ 0x140B8CDA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierIoAllocateIrpEx(__int64 a1, __int64 a2, char a3)
{
  char v3; // si
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a2;
  if ( a3 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL, 3, retaddr);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL, 3, retaddr);
  }
  LOBYTE(a2) = v3;
  return guard_dispatch_icall_no_overrides(a1, a2);
}
