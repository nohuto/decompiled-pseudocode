/*
 * XREFs of LdrFindResourceDirectory_U @ 0x14077E630
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceDirectory_U(int a1, int a2, int a3, __int64 a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 2, a4);
}
