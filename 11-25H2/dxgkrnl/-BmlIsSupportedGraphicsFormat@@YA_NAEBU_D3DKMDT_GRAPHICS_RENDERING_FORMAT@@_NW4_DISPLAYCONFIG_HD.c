/*
 * XREFs of ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_NW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@@Z @ 0x1402C70B8
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1402C6C60 (BmlGetNextBestSourceMode.c)
 *     BmlGetRecommendedContentSizeForPath @ 0x14039BF58 (BmlGetRecommendedContentSizeForPath.c)
 * Callees:
 *     <none>
 */

bool __fastcall BmlIsSupportedGraphicsFormat(__int64 a1, char a2, int a3)
{
  char v3; // bl
  int v4; // edx

  v3 = 0;
  if ( !a2 )
    return 1;
  v4 = *(_DWORD *)(a1 + 20);
  switch ( v4 )
  {
    case 21:
    case 22:
      return 1;
    case 31:
      goto LABEL_6;
    case 32:
      return 1;
    case 113:
LABEL_6:
      if ( !a3 )
      {
        if ( (unsigned int)(v4 - 21) <= 1 )
          return 1;
        return v3;
      }
      if ( a3 == 1 )
        return v4 == 31;
      if ( (unsigned int)(a3 - 2) > 1 )
      {
        WdLogSingleEntry1(1LL, a3);
        WdLogGlobalForLineNumber = 1461;
        return v3;
      }
      return v4 == 113;
  }
  return 0;
}
