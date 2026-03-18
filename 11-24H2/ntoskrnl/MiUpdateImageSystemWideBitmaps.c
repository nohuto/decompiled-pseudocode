/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x1408F6B88
 * Callers:
 *     MiRelocateImage @ 0x1408F5784 (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x1408F642C (MiRelocateImageAgain.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmap @ 0x1408F6E3C (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap();
}
