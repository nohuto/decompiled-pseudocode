/*
 * XREFs of VerifierIoAllocateIrpEx @ 0x140B8ADA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierIoAllocateIrpEx(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  char v4; // si
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = a3;
  v4 = a2;
  if ( (_BYTE)a3 && (MmVerifierData & 8) != 0 )
  {
    if ( KeGetCurrentThread()->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL, 3, retaddr);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL, 3, retaddr);
  }
  LOBYTE(a3) = v3;
  LOBYTE(a2) = v4;
  return guard_dispatch_icall_no_overrides(a1, a2, a3, retaddr);
}
