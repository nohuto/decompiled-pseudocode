/*
 * XREFs of BmlDoesSourceModeObeyConstraint @ 0x1402C75BC
 * Callers:
 *     BmlGetNextBestSourceMode @ 0x1402C6C60 (BmlGetNextBestSourceMode.c)
 *     BmlCompareSourceModes @ 0x1402C7150 (BmlCompareSourceModes.c)
 *     _BmlGetPathModeListForPath @ 0x14039C1C8 (_BmlGetPathModeListForPath.c)
 * Callees:
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034934 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402C778C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402C80F4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

bool __fastcall BmlDoesSourceModeObeyConstraint(__int64 a1, unsigned __int16 a2, DMMVIDPNSOURCEMODE *a3)
{
  __int64 v4; // rbp
  __int64 v6; // rbx
  bool v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // r15d
  int v10; // ecx
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v12; // rcx
  int v13; // eax

  v4 = 120LL * a2;
  v6 = *(_QWORD *)(a1 + v4 + 16);
  v7 = (*(_QWORD *)v6 & 0x18000000100LL) == 0 && !_bittest((const signed __int32 *)(a1 + 4), 0x12u);
  if ( (*(_QWORD *)v6 & 0x10000000100LL) != 0 )
  {
    if ( (*(_BYTE *)(a1 + v4 + 132) & 0x10) != 0 )
    {
      if ( *(_BYTE *)(v6 + 128) )
        return 0;
      goto LABEL_6;
    }
    v8 = 2;
    if ( !*(_BYTE *)(v6 + 128) )
LABEL_6:
      v8 = 1;
  }
  else
  {
    if ( (*(_DWORD *)(a1 + 4) & 0x40000) == 0 )
      goto LABEL_6;
    v8 = (~*(_BYTE *)(a1 + v4 + 132) & 0x10 | 8u) >> 3;
  }
  v9 = *(_DWORD *)(a1 + v4 + 120);
  if ( !a3 )
    return 0;
  v10 = *((_DWORD *)a3 + 18);
  if ( v8 != 2 )
  {
    if ( v10 == 1 )
      goto LABEL_10;
    if ( v8 == 1 )
      return 0;
  }
  if ( (unsigned int)(v10 - 3) > 1 )
    return 0;
LABEL_10:
  GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(a3);
  if ( v7 && GraphicsInfo->PixelFormat != D3DDDIFMT_A8R8G8B8 && GraphicsInfo->PixelFormat != D3DDDIFMT_X8R8G8B8 )
  {
    if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A2B10G10R10 )
    {
      if ( GraphicsInfo->PixelFormat == D3DDDIFMT_A8B8G8R8 )
        goto LABEL_15;
      if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A16B16G16R16F )
        return 0;
    }
    if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat((unsigned int)GraphicsInfo->PixelFormat, v9, 0LL) )
      return 0;
  }
LABEL_15:
  if ( _bittest64((const signed __int64 *)v6, 0x26u)
    && (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, (char *)a3 + 76) )
  {
    return 0;
  }
  v12 = *(_QWORD *)(v6 + 8);
  if ( (v12 & 0x8000000100LL) != 0 )
  {
    v13 = *(_DWORD *)(v6 + 116);
    if ( v13 )
    {
      if ( *((_DWORD *)a3 + 24) != v13 )
        return 0;
    }
  }
  if ( (v12 & 0x100) == 0 )
    return 1;
  if ( *((_DWORD *)a3 + 19) != *(_DWORD *)(v6 + 96) )
    return 0;
  return *((_DWORD *)a3 + 20) == *(_DWORD *)(v6 + 100);
}
