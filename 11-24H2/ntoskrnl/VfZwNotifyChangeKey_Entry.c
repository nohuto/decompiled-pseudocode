/*
 * XREFs of VfZwNotifyChangeKey_Entry @ 0x140B96600
 * Callers:
 *     <none>
 * Callees:
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwNotifyChangeKey_Entry(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  ULONG_PTR v5; // rcx
  unsigned int v6; // eax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    v5 = a1[6];
    if ( v5 )
    {
      ViZwCheckVirtualAddress(v5, *a1);
      v6 = *((_DWORD *)a1 + 10);
      if ( v6 > 6 && v6 - 32 > 0x1F )
        CarReportRuleViolationFromNt(196, 252LL, *a1, a1[5], 0LL, 8u, *a1);
    }
    ViZwCheckVirtualAddress(a1[4], *a1);
    return ViZwCheckVirtualAddress(a1[2], *a1);
  }
  return result;
}
