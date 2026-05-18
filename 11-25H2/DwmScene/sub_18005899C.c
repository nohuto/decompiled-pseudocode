/*
 * XREFs of sub_18005899C @ 0x18005899C
 * Callers:
 *     sub_18005F730 @ 0x18005F730 (sub_18005F730.c)
 *     sub_180064748 @ 0x180064748 (sub_180064748.c)
 *     sub_180083420 @ 0x180083420 (sub_180083420.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18005899C(__int64 a1, int a2, char a3)
{
  unsigned int v3; // eax
  __int64 result; // rax

  v3 = *(_DWORD *)(a1 + 440);
  if ( a3 )
    result = a2 | v3;
  else
    result = ~a2 & v3;
  *(_DWORD *)(a1 + 440) = result;
  return result;
}
