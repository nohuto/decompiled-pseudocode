/*
 * XREFs of VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140B9DFD0
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140257E20 (KeAreInterruptsEnabled.c)
 *     VfMiscCheckKernelAddress @ 0x1404B2134 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 */

char __fastcall VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry(__int64 a1)
{
  char result; // al
  unsigned __int8 CurrentIrql; // di

  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL, *(_QWORD *)a1);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    result = KeAreInterruptsEnabled();
    if ( result )
      return CarReportRuleViolationFromNt(196, 64LL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL, 0xBu, *(_QWORD *)a1);
  }
  return result;
}
