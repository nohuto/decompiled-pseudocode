/*
 * XREFs of LdrFindResource_U @ 0x14077E690
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     FindBitmapResource @ 0x140C1A4CC (FindBitmapResource.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x140A0253C (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrFindResource_U(int a1, int a2, int a3, __int64 a4)
{
  return LdrpSearchResourceSection_U(a1, a2, a3, 0, a4);
}
