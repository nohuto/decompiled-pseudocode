/*
 * XREFs of Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry @ 0x140B9E1A0
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 */

__int64 __fastcall Below4gb_MmAllocateContiguousMemorySpecifyCache_Entry(__int64 a1)
{
  ULONG_PTR v1; // r8
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 24);
  result = 0x100000000LL;
  if ( v1 < 0x100000000LL )
    return CarReportRuleViolationFromNt(196, 321LL, v1, *(_QWORD *)(a1 + 40), 0LL, 0x1Au, retaddr);
  return result;
}
