/*
 * XREFs of sub_180058AFC @ 0x180058AFC
 * Callers:
 *     sub_18005F890 @ 0x18005F890 (sub_18005F890.c)
 *     sub_1800648A8 @ 0x1800648A8 (sub_1800648A8.c)
 *     sub_180083580 @ 0x180083580 (sub_180083580.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180058AFC(__int64 a1, int a2, char a3)
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
