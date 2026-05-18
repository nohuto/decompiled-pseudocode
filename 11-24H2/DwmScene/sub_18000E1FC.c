/*
 * XREFs of sub_18000E1FC @ 0x18000E1FC
 * Callers:
 *     sub_18000CF18 @ 0x18000CF18 (sub_18000CF18.c)
 *     sub_18000CF8C @ 0x18000CF8C (sub_18000CF8C.c)
 *     sub_18000E268 @ 0x18000E268 (sub_18000E268.c)
 * Callees:
 *     sub_18000D074 @ 0x18000D074 (sub_18000D074.c)
 */

DWORD __fastcall sub_18000E1FC(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  DWORD result; // eax

  result = GetLastError();
  if ( !result )
  {
    sub_18000D074(a1, a2, a3, 0LL, 0LL, a6, 0x8007029C);
    return 668;
  }
  return result;
}
