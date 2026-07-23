/*
 * XREFs of VfZwDeleteBootEntry_Entry @ 0x140B96370
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckVirtualAddress @ 0x140B96D78 (ViZwCheckVirtualAddress.c)
 *     ViZwShouldCheck @ 0x140B96DC4 (ViZwShouldCheck.c)
 */

__int64 __fastcall VfZwDeleteBootEntry_Entry(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 *v3; // r8

  result = ViZwShouldCheck(a1, a2, a1);
  if ( (_DWORD)result )
    return ViZwCheckVirtualAddress(0LL, *v3);
  return result;
}
