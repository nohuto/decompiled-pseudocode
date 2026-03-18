/*
 * XREFs of LdrFindResource_U @ 0x14076F440
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C0942C (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x1409AE35C (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(int a1, int a2, int a3, __int64 a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
