/*
 * XREFs of BmlGetNextBestSourceMode @ 0x1402C6C60
 * Callers:
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGW4DXGK_DIAG_CCD_BML_ORIGIN@@I@Z @ 0x1402C4010 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlFunctionalizePath @ 0x1402C6040 (BmlFunctionalizePath.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z @ 0x14002EE70 (-FindById@-$IndexedSet@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@I@Z.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034934 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ @ 0x14003DFE0 (-GetBitsPerPixel@DMMVIDPNSOURCEMODE@@QEBAIXZ.c)
 *     ?GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ @ 0x1400410D8 (-GetContainingAdapter@VIDPN_MGR@@QEBAPEAVDXGADAPTER@@XZ.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_NW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@@Z @ 0x1402C70B8 (-BmlIsSupportedGraphicsFormat@@YA_NAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@_NW4_DISPLAYCONFIG_HD.c)
 *     BmlCompareSourceModes @ 0x1402C7150 (BmlCompareSourceModes.c)
 *     BmlDoesSourceModeObeyConstraint @ 0x1402C75BC (BmlDoesSourceModeObeyConstraint.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402C80F4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 */

__int64 __fastcall BmlGetNextBestSourceMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v9; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rdi
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned int BitsPerPixel; // eax
  __int64 v25; // rdx
  __int64 v26; // r9
  __int64 v27; // r8
  unsigned __int64 v28; // rcx
  __int64 v29; // rbx
  bool v30; // r13
  unsigned int v31; // eax
  __int64 v32; // rax
  struct DXGADAPTER *ContainingAdapter; // rax
  __int64 result; // rax
  unsigned int v35; // r15d
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  __int64 v37; // rdx
  int v38; // eax
  __int64 v39; // rax
  __int64 v40; // [rsp+70h] [rbp+8h]
  unsigned __int16 v42; // [rsp+80h] [rbp+18h]

  v42 = a3;
  v6 = 0LL;
  v7 = (unsigned __int16)a3;
  v9 = a2;
  if ( !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2040;
  }
  if ( !a6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2041;
  }
  if ( !v9 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2042;
  }
  v11 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v15 = a5;
  v16 = 0LL;
  v17 = 120 * v7;
  *(_QWORD *)(v11 + 24) = a4;
  *(_QWORD *)(v11 + 32) = a5;
  WdLogGlobalForLineNumber = 2044;
  *a6 = -1;
  if ( a5 != -1 )
  {
    v39 = IndexedSet<DMMVIDPNSOURCEMODE>::FindById(a4 + 24, a5);
    v16 = v39;
    if ( !v39 || !(unsigned __int8)BmlDoesSourceModeObeyConstraint(a1, (unsigned __int16)v7, v39) )
    {
      WdLogNewEntry5_WdTrace(v12, v15, v13, v14);
      result = 3223192336LL;
      WdLogGlobalForLineNumber = 2063;
      return result;
    }
  }
  *(_DWORD *)(a1 + v17 + 92) = 0;
  *(_DWORD *)(a1 + v17 + 96) = 0;
  v18 = *(_QWORD *)(a4 + 48);
  v40 = a4 + 48;
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
    v27 = 1LL;
    v20[6] = BitsPerPixel;
    v28 = *(int *)(v19 + 96);
    v20[7] = v28;
    ++*(_DWORD *)(a1 + v17 + 92);
    WdLogGlobalForLineNumber = 2081;
    if ( v16 == v19 )
      goto LABEL_22;
    if ( (*(_DWORD *)(a1 + 4) & 0x20000) == 0 && (*(_DWORD *)(a1 + 8) & 4) == 0 )
    {
      v28 = *(_QWORD *)(120LL * (unsigned __int16)v7 + a1 + 16);
      if ( !_bittest64((const signed __int64 *)v28, 0x37u)
        && (*(_DWORD *)(v19 + 76) > *(_DWORD *)(a1 + v17 + 36) || *(_DWORD *)(v19 + 80) > *(_DWORD *)(a1 + v17 + 40)) )
      {
        goto LABEL_22;
      }
    }
    v29 = *(_QWORD *)(a1 + v17 + 16);
    v25 = *(unsigned int *)(a1 + 4);
    v30 = (v25 & 0x40000) == 0 && (*(_QWORD *)v29 & 0x18000000100LL) == 0;
    if ( (*(_QWORD *)v29 & 0x10000000100LL) != 0 )
    {
      v28 = v29 + 128;
      if ( (*(_BYTE *)(a1 + v17 + 132) & 0x10) != 0 && *(_BYTE *)v28 )
        goto LABEL_21;
      v31 = (*(_BYTE *)v28 != 0) + 1;
    }
    else if ( (v25 & 0x40000) != 0 )
    {
      v31 = (~*(_BYTE *)(a1 + v17 + 132) & 0x10 | 8u) >> 3;
    }
    else
    {
      v31 = 1;
    }
    v35 = *(_DWORD *)(a1 + v17 + 120);
    v28 = *(unsigned int *)(v19 + 72);
    if ( v31 != 2 )
    {
      if ( (_DWORD)v28 == 1 )
        goto LABEL_32;
      if ( v31 == 1 )
        goto LABEL_20;
    }
    if ( (unsigned int)(v28 - 3) > 1 )
      goto LABEL_20;
LABEL_32:
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo((DMMVIDPNSOURCEMODE *)v19);
    LOBYTE(v37) = v30;
    if ( !(unsigned __int8)BmlIsSupportedGraphicsFormat(GraphicsInfo, v37, v35)
      || _bittest64((const signed __int64 *)v29, 0x26u) && (unsigned int)BmlCompareModeExtents(v17 + a1 + 52, v19 + 76)
      || (v28 = *(_QWORD *)(v29 + 8), (v28 & 0x8000000100LL) != 0)
      && (v38 = *(_DWORD *)(v29 + 116)) != 0
      && *(_DWORD *)(v19 + 96) != v38
      || (v28 & 0x100) != 0
      && (*(_DWORD *)(v19 + 76) != *(_DWORD *)(v29 + 96) || *(_DWORD *)(v19 + 80) != *(_DWORD *)(v29 + 100)) )
    {
LABEL_20:
      LOWORD(v7) = v42;
LABEL_21:
      v9 = a2;
LABEL_22:
      WdLogNewEntry5_WdTrace(v28, v25, v27, v26);
      WdLogGlobalForLineNumber = 2094;
      goto LABEL_23;
    }
    LOWORD(v7) = v42;
    v9 = a2;
    ++*(_DWORD *)(a1 + v17 + 96);
    if ( (unsigned int)BmlCompareSourceModes(a1, a2, v42, v19, (__int64)v6) == 1
      && (!v16 || (unsigned int)BmlCompareSourceModes(a1, a2, v42, v19, v16) == -1) )
    {
      WdLogNewEntry5_WdTrace(v12, v15, v13, v14);
      WdLogGlobalForLineNumber = 2121;
      v6 = (_DWORD *)v19;
    }
LABEL_23:
    v32 = *(_QWORD *)(v19 + 8);
    v19 = v32 - 8;
    if ( v32 == v40 )
      v19 = 0LL;
  }
  while ( v19 );
  if ( v6 )
  {
    *a6 = v6[6];
    ContainingAdapter = VIDPN_MGR::GetContainingAdapter(*(VIDPN_MGR **)(v9 + 48));
    DxgkLogCodePointPacket(0x20u, (unsigned __int16)v7, v6[19], v6[20], *(_QWORD *)((char *)ContainingAdapter + 412));
    return 0LL;
  }
  return 3223192326LL;
}
