/*
 * XREFs of VerifierIoAllocateIrp @ 0x140B8AC80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VerifierIoAllocateIrp(char a1, __int64 a2, struct _KTHREAD *CurrentThread, __int64 a4)
{
  char v4; // di
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v4 = a2;
  if ( (_BYTE)a2 && (MmVerifierData & 8) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcState.Process == PsIdleProcess )
      CarReportRuleViolationFromNt(0xC4u, 0x10AuLL, 0LL, 0LL, 0LL, 3, retaddr);
    if ( (KeGetPcr()->Prcb.DpcRequestSummary & 1) != 0 )
      CarReportRuleViolationFromNt(0xC4u, 0x10BuLL, 0LL, 0LL, 0LL, 3, retaddr);
  }
  if ( (VfRuleClasses & 4) != 0 && (unsigned int)VfFaultsInjectResourceFailure(0LL)
    || (VfRuleClasses & 0x40000) != 0
    && ViFnAutoFailInject
    && (unsigned __int8)guard_dispatch_icall_no_overrides("IoAllocateIrp", a2, CurrentThread, a4) )
  {
    return 0LL;
  }
  LOBYTE(CurrentThread) = v4;
  LOBYTE(a2) = a1;
  return guard_dispatch_icall_no_overrides(0LL, a2, CurrentThread, retaddr);
}
