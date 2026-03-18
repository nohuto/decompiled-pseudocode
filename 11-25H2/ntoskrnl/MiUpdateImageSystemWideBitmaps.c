/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x140940578
 * Callers:
 *     MiRelocateImageAgain @ 0x14093FE24 (MiRelocateImageAgain.c)
 *     MiRelocateImage @ 0x140941BE8 (MiRelocateImage.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmap @ 0x1409416C0 (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap();
}
