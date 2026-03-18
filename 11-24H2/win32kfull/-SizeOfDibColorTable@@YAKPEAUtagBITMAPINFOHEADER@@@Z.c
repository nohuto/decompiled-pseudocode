/*
 * XREFs of ?SizeOfDibColorTable@@YAKPEAUtagBITMAPINFOHEADER@@@Z @ 0x1402B2288
 * Callers:
 *     ?DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z @ 0x1402B2050 (-DIBtoDIBV5@@YAPEAUBITMAPV5HEADER@@REAUtagBITMAPINFOHEADER@@K@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B2678 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1402B281C (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeOfDibColorTable(struct tagBITMAPINFOHEADER *a1)
{
  DWORD biCompression; // edx
  unsigned int v4; // ecx
  DWORD biClrUsed; // edx
  WORD biBitCount; // dx

  biCompression = a1->biCompression;
  if ( biCompression == 3 )
    return ((a1->biBitCount - 16) & 0xFFEF) == 0 ? 0xC : 0;
  v4 = 0;
  if ( biCompression )
  {
    if ( biCompression == 2 )
      return 64LL;
    if ( biCompression == 1 )
      return 1024;
  }
  else
  {
    biClrUsed = a1->biClrUsed;
    if ( biClrUsed )
      return 4 * biClrUsed;
    biBitCount = a1->biBitCount;
    if ( biBitCount <= 8u )
      return 4 * (unsigned int)(1LL << biBitCount);
  }
  return v4;
}
