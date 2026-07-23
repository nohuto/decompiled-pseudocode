/*
 * XREFs of VfMiscObReferenceObjectByPointer_Entry @ 0x140BA0590
 * Callers:
 *     <none>
 * Callees:
 *     VfMiscCheckKernelAddress @ 0x1404AC9C4 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

unsigned __int64 __fastcall VfMiscObReferenceObjectByPointer_Entry(__int64 a1)
{
  unsigned __int64 result; // rax
  ULONG_PTR v3; // r8

  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 32), 8uLL, *(_QWORD *)a1);
  v3 = *(_QWORD *)(a1 + 32);
  if ( !*(_QWORD *)(v3 - 48) )
    return CarReportRuleViolationFromNt(196, 63LL, v3, 1uLL, 0LL, 0xBu, *(_QWORD *)a1);
  return result;
}
