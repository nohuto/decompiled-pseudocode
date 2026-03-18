/*
 * XREFs of LdrFindResourceEx_U @ 0x14077E650
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceEx_U(int a1, int a2, int a3, int a4, __int64 a5)
{
  return LdrpSearchResourceSection_U(a2, a3, a4, a1, a5);
}
