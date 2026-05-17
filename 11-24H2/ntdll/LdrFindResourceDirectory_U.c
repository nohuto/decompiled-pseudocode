/*
 * XREFs of LdrFindResourceDirectory_U @ 0x180113F30
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180061FF0 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResourceDirectory_U(__int64 a1, __int64 a2, unsigned int a3, unsigned __int64 *a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 2u, a4);
}
