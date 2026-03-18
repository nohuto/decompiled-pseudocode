/*
 * XREFs of VerifierIoVolumeDeviceToDosName @ 0x140B92190
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall VerifierIoVolumeDeviceToDosName(__int64 a1, __int64 a2, __int64 CurrentIrql, __int64 a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( (MmVerifierData & 0x10) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (_BYTE)CurrentIrql )
      CarReportRuleViolationFromNt(196, 229LL, (unsigned __int8)CurrentIrql, 0LL, 0LL, 4u, retaddr);
  }
  return guard_dispatch_icall_no_overrides(a1, a2, CurrentIrql, a4);
}
