/*
 * XREFs of VfZwQueryLicenseValue_Entry @ 0x140B969C0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckUnicodeString @ 0x140B96CE0 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwQueryLicenseValue_Entry(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 32), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 24), *(_QWORD *)a1);
    ViZwCheckVirtualAddress(*(_QWORD *)(a1 + 8), *(_QWORD *)a1);
    return ViZwCheckUnicodeString(*(_QWORD *)(a1 + 40), *(_QWORD *)a1);
  }
  return result;
}
