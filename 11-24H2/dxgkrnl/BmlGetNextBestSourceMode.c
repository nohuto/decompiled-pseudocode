/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1402DDD64
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1403639F0 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x140365024 (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x14002F4B0 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x14003D9A0 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x140040B88 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004A724 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     BmlCompareSourceModes @ 0x1402DDA38 (BmlCompareSourceModes.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402DE3FC (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DE5CC (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlGetPixelFormatPreference @ 0x1402DE648 (BmlGetPixelFormatPreference.c)
 *     BmlCompareSourceModesWithMonitors @ 0x1402DE6EC (BmlCompareSourceModesWithMonitors.c)
 *     BmlCompareModeRegions @ 0x1402DE8CC (BmlCompareModeRegions.c)
 *     BmlCompareSourceModesWithContentRes @ 0x1402DE9C4 (BmlCompareSourceModesWithContentRes.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402DEAC4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 v9; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rsi
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int BitsPerPixel; // eax
  unsigned __int64 PixelFormat; // rcx
  __int64 v26; // rbx
  bool v27; // r12
  unsigned int v28; // eax
  __int64 v29; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  unsigned int v32; // r14d
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  int v34; // eax
  int v35; // ebx
  __int64 v36; // r14
  unsigned int v37; // ebx
  int PixelFormatPreference; // r14d
  int v39; // eax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // [rsp+70h] [rbp+8h]
  __int64 v44; // [rsp+88h] [rbp+20h]

  v6 = 0LL;
  v7 = (unsigned __int16)a3;
  v9 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2062;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2063;
  }
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2064;
  }
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v15 = a5;
  v16 = 0LL;
  v17 = 120 * v7;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a5;
  WdLogGlobalForLineNumber = 2066;
  v42 = 0LL;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v40 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v42 = v40;
    v16 = v40;
    if ( !v40 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v7, v40) )
    {
      WdLogNewEntry5_WdTrace(v12, v15, v13, v14);
      result = 3223192336LL;
      WdLogGlobalForLineNumber = 2085;
      return result;
    }
  }
  *(_DWORD *)(v17 + a1 + 92) = 0;
  *(_DWORD *)(v17 + a1 + 96) = 0;
  v18 = *(_QWORD *)(a4 + 48);
  v44 = a4 + 48;
  if ( v18 == a4 + 48 )
    return 3223192326LL;
  v19 = v18 - 8;
  if ( !v19 )
    return 3223192326LL;
  do
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v15, v13, v14);
    v20[3] = *(unsigned int *)(v19 + 24);
    v20[4] = *(unsigned int *)(v19 + 76);
    v20[5] = *(unsigned int *)(v19 + 80);
    BitsPerPixel = DMMVIDPNSOURCEMODE::GetBitsPerPixel((DMMVIDPNSOURCEMODE *)v19, v21, v22, v23);
    v13 = 1LL;
    v20[6] = BitsPerPixel;
    PixelFormat = *(int *)(v19 + 96);
    v20[7] = PixelFormat;
    ++*(_DWORD *)(v17 + a1 + 92);
    WdLogGlobalForLineNumber = 2103;
    if ( v16 == v19 )
      goto LABEL_22;
    if ( (*(_DWORD *)(a1 + 4) & 0x20000) == 0 && (*(_DWORD *)(a1 + 8) & 4) == 0 )
    {
      PixelFormat = *(_QWORD *)(120 * v7 + a1 + 16);
      if ( !_bittest64((const signed __int64 *)PixelFormat, 0x37u)
        && (*(_DWORD *)(v19 + 76) > *(_DWORD *)(v17 + a1 + 36) || *(_DWORD *)(v19 + 80) > *(_DWORD *)(v17 + a1 + 40)) )
      {
        goto LABEL_22;
      }
    }
    v26 = *(_QWORD *)(v17 + a1 + 16);
    v15 = *(unsigned int *)(a1 + 4);
    v27 = (v15 & 0x40000) == 0 && (*(_QWORD *)v26 & 0x18000000100LL) == 0;
    if ( (*(_QWORD *)v26 & 0x10000000100LL) != 0 )
    {
      PixelFormat = v26 + 128;
      if ( (*(_BYTE *)(v17 + a1 + 132) & 0x10) != 0 && *(_BYTE *)PixelFormat )
        goto LABEL_21;
      v28 = (*(_BYTE *)PixelFormat != 0) + 1;
    }
    else if ( (v15 & 0x40000) != 0 )
    {
      v28 = (~*(_BYTE *)(v17 + a1 + 132) & 0x10 | 8u) >> 3;
    }
    else
    {
      v28 = 1;
    }
    v32 = *(_DWORD *)(v17 + a1 + 120);
    PixelFormat = *(unsigned int *)(v19 + 72);
    if ( v28 == 2 )
      goto LABEL_88;
    if ( (_DWORD)PixelFormat != 1 )
    {
      if ( v28 == 1 )
        goto LABEL_20;
LABEL_88:
      if ( (unsigned int)(PixelFormat - 3) > 1 )
        goto LABEL_20;
    }
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v19);
    if ( v27 )
    {
      PixelFormat = (unsigned int)GraphicsInfo->PixelFormat;
      v13 = (unsigned int)(GraphicsInfo->PixelFormat - 21);
      if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A8R8G8B8 )
      {
        v13 = (unsigned int)(GraphicsInfo->PixelFormat - 22);
        if ( GraphicsInfo->PixelFormat != D3DDDIFMT_X8R8G8B8 )
        {
          if ( GraphicsInfo->PixelFormat == D3DDDIFMT_A2B10G10R10 )
            goto LABEL_36;
          v13 = (unsigned int)(GraphicsInfo->PixelFormat - 32);
          if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A8B8G8R8 )
          {
            if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A16B16G16R16F )
              goto LABEL_20;
LABEL_36:
            if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat(PixelFormat, v32, 0LL) )
              goto LABEL_20;
          }
        }
      }
    }
    if ( _bittest64((const signed __int64 *)v26, 0x26u) && (unsigned int)BmlCompareModeExtents(v17 + a1 + 52, v19 + 76)
      || (PixelFormat = *(_QWORD *)(v26 + 8), (PixelFormat & 0x8000000100LL) != 0)
      && (v34 = *(_DWORD *)(v26 + 116)) != 0
      && *(_DWORD *)(v19 + 96) != v34
      || (PixelFormat & 0x100) != 0
      && (*(_DWORD *)(v19 + 76) != *(_DWORD *)(v26 + 96) || *(_DWORD *)(v19 + 80) != *(_DWORD *)(v26 + 100)) )
    {
LABEL_20:
      v16 = v42;
LABEL_21:
      v9 = a2;
LABEL_22:
      WdLogNewEntry5_WdTrace(PixelFormat, v15, v13, v14);
      WdLogGlobalForLineNumber = 2116;
      goto LABEL_23;
    }
    v9 = a2;
    v12 = 1LL;
    ++*(_DWORD *)(v17 + a1 + 96);
    v35 = 0;
    if ( !a2 )
    {
      WdLogSingleEntry0(1LL);
      v12 = 1LL;
      WdLogGlobalForLineNumber = 1910;
    }
    if ( v19 == v6 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1912;
    }
    if ( !v6 )
      goto LABEL_72;
    v36 = *(_QWORD *)(v17 + a1 + 16);
    if ( *(_BYTE *)(v36 + 129) && (*(_DWORD *)(a1 + 8) & 1) != 0 )
      goto LABEL_100;
    if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v7, v19) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1773;
    }
    if ( !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v7, v6) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1774;
    }
    v15 = *(unsigned int *)(v36 + 116);
    if ( (_DWORD)v15 )
    {
      v12 = 0x8000000100LL;
      if ( (*(_QWORD *)v36 & 0x8000000100LL) != 0 )
      {
        v13 = *(unsigned int *)(v19 + 96);
        LOBYTE(v12) = *(_DWORD *)(v6 + 96) == (_DWORD)v15;
        if ( ((_DWORD)v13 == (_DWORD)v15) != (_BYTE)v12 )
        {
          v35 = -1;
          if ( (_DWORD)v13 == (_DWORD)v15 )
            v35 = 1;
          goto LABEL_57;
        }
      }
    }
    if ( (*(_DWORD *)v36 & 0x100LL) != 0 )
      v35 = BmlCompareRegionsWithPivot(
              (struct _D3DKMDT_2DREGION *)(v19 + 76),
              (struct _D3DKMDT_2DREGION *)(v6 + 76),
              (struct _D3DKMDT_2DREGION *)(v36 + 96));
    if ( !v35 )
    {
LABEL_100:
      if ( !*(_BYTE *)(*(_QWORD *)(v17 + a1 + 16) + 129LL)
        || (*(_BYTE *)(v17 + a1 + 124) & 1) == 0
        || (v35 = BmlCompareSourceModesWithContentRes(a1, (unsigned __int16)v7, v19, v6)) == 0 )
      {
        v37 = *(_DWORD *)(v17 + a1 + 120);
        PixelFormatPreference = BmlGetPixelFormatPreference(*(unsigned int *)(v6 + 96), v37);
        v39 = BmlGetPixelFormatPreference(*(unsigned int *)(v19 + 96), v37);
        if ( v39 > PixelFormatPreference )
        {
          v35 = 1;
        }
        else if ( v39 >= PixelFormatPreference )
        {
          v35 = BmlCompareModeRegions(v19 + 76, v6 + 76);
          if ( v35 )
          {
            v41 = BmlCompareSourceModesWithMonitors(a1, (unsigned __int16)v7, v13, v19, v6);
            if ( v41 )
              v35 = v41;
          }
        }
        else
        {
          v35 = -1;
        }
      }
    }
LABEL_57:
    if ( v35 != 1 )
    {
      v16 = v42;
      goto LABEL_23;
    }
LABEL_72:
    v16 = v42;
    if ( !v42 || (unsigned int)BmlCompareSourceModes(a1, a2, v7, v19, v42) == -1 )
    {
      WdLogNewEntry5_WdTrace(v12, v15, v13, v14);
      WdLogGlobalForLineNumber = 2143;
      v6 = v19;
    }
LABEL_23:
    v29 = *(_QWORD *)(v19 + 8);
    v19 = v29 - 8;
    if ( v29 == v44 )
      v19 = 0LL;
  }
  while ( v19 );
  if ( v6 )
  {
    *a6 = *(_DWORD *)(v6 + 24);
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v9 + 48));
    DxgkLogCodePointPacket(
      0x20u,
      v7,
      *(_DWORD *)(v6 + 76),
      *(_DWORD *)(v6 + 80),
      *(_QWORD *)((char *)ContainingAdapter + 412));
    return 0LL;
  }
  return 3223192326LL;
}
