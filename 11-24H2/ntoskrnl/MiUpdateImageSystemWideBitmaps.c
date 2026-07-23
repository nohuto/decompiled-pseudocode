/*
 * XREFs of MiUpdateImageSystemWideBitmaps @ 0x140974650
 * Callers:
 *     MiRelocateImage @ 0x140AEA57C (MiRelocateImage.c)
 *     MiRelocateImageAgain @ 0x140AEAE48 (MiRelocateImageAgain.c)
 * Callees:
 *     MiUpdateCfgSystemWideBitmap @ 0x140974678 (MiUpdateCfgSystemWideBitmap.c)
 */

__int64 __fastcall MiUpdateImageSystemWideBitmaps(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 88) == -1 || (*(_DWORD *)(a1 + 56) & 0x20000000) != 0 )
    return 0LL;
  else
    return MiUpdateCfgSystemWideBitmap();
}
