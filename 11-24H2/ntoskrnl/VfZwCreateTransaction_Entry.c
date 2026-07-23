/*
 * XREFs of VfZwCreateTransaction_Entry @ 0x140B96310
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140B96C90 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckUnicodeString @ 0x140B96CE0 (ViZwCheckUnicodeString.c)
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwCreateTransaction_Entry(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[9], *a1);
    ViZwCheckVirtualAddress(a1[6], *a1);
    ViZwCheckVirtualAddress(a1[2], *a1);
    ViZwCheckObjectAttributes(a1[7], *a1);
    return ViZwCheckUnicodeString(a1[1], *a1);
  }
  return result;
}
