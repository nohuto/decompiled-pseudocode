/*
 * XREFs of VfZwOpenKey_Entry @ 0x140B960B0
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140B96C90 (ViZwCheckObjectAttributes.c)
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwOpenKey_Entry(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = ViZwShouldCheck(a1, a2, a3);
  if ( (_DWORD)result )
  {
    ViZwCheckVirtualAddress(a1[3], *a1);
    return ViZwCheckObjectAttributes(a1[1], *a1);
  }
  return result;
}
