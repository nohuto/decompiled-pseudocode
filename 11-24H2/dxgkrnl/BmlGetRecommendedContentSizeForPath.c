/*
 * XREFs of BmlGetRecommendedContentSizeForPath @ 0x1402DC1E4
 * Callers:
 *     ?BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z @ 0x140364BA4 (-BmlFunctionalizeVidPn@@YAJPEBUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14000BE00 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ @ 0x140034864 (-GetGraphicsInfo@DMMVIDPNSOURCEMODE@@QEBAPEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@XZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x14003DE80 (-GetNextMode@DMMVIDPNSOURCEMODESET@@QEBAPEBVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     BmlAreRawModesEnabled @ 0x1402DCD18 (BmlAreRawModesEnabled.c)
 *     BmlCompareRegionsWithPivot @ 0x1402DDCA8 (BmlCompareRegionsWithPivot.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402DE5CC (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     BmlGetModeCategoryForRegion @ 0x1402DE910 (BmlGetModeCategoryForRegion.c)
 */

__int64 __fastcall BmlGetRecommendedContentSizeForPath(
        unsigned __int8 *a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rdi
  struct DMMVIDPNTARGETMODESET *v8; // rax
  struct DMMVIDPNTARGETMODESET *v9; // rbx
  _QWORD *v11; // rax
  _QWORD *v12; // rbp
  UINT v13; // r14d
  UINT v14; // eax
  UINT v15; // r15d
  __int64 v16; // rax
  const struct DMMVIDPNSOURCEMODE *v17; // rdi
  const struct DMMVIDPNSOURCEMODE *NextMode; // rbp
  unsigned int v19; // r13d
  const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *GraphicsInfo; // rax
  int v21; // eax
  struct _D3DKMDT_2DREGION v22; // [rsp+30h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-50h]
  bool v24; // [rsp+90h] [rbp+8h]

  v4 = a2;
  if ( !a1 || a2 >= *a1 || !a3 || !a4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3806;
  }
  if ( (*(_QWORD *)a4 & 0x20000000020000LL) != 0x20000000020000LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3810;
  }
  v8 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*(DMMVIDPNTARGET **)(a3 + 88));
  v9 = v8;
  if ( !v8 )
    return 3223192328LL;
  v11 = (_QWORD *)((char *)v8 + 48);
  v12 = (_QWORD *)*v11;
  if ( (_QWORD *)*v11 == v11 )
    goto LABEL_37;
  v13 = *(_DWORD *)(a4 + 152);
  v14 = *(_DWORD *)(a4 + 156);
  v24 = ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) == 0;
  if ( ((*(_DWORD *)(a4 + 132) - 2) & 0xFFFFFFFD) != 0 )
  {
    v15 = *(_DWORD *)(a4 + 152);
    v22.cx = v15;
    v13 = v14;
    v22.cy = v14;
  }
  else
  {
    v15 = *(_DWORD *)(a4 + 156);
    v22.cx = v15;
    v22.cy = v13;
  }
  v16 = 120 * v4;
  v17 = 0LL;
  v23 = v16;
  NextMode = (const struct DMMVIDPNSOURCEMODE *)(v12 - 1);
  if ( !NextMode )
  {
LABEL_36:
    WdLogSingleEntry4(2LL, v15, v13, a3, -1071774970LL);
    WdLogGlobalForLineNumber = 3897;
LABEL_37:
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
    return 3223192326LL;
  }
  do
  {
    v19 = *(_DWORD *)&a1[v16 + 120];
    if ( *((_DWORD *)NextMode + 18) != 1 )
      goto LABEL_30;
    GraphicsInfo = DMMVIDPNSOURCEMODE::GetGraphicsInfo(NextMode);
    if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A8R8G8B8 && GraphicsInfo->PixelFormat != D3DDDIFMT_X8R8G8B8 )
    {
      if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A2B10G10R10 )
      {
        if ( GraphicsInfo->PixelFormat == D3DDDIFMT_A8B8G8R8 )
          goto LABEL_22;
        if ( GraphicsInfo->PixelFormat != D3DDDIFMT_A16B16G16R16F )
          goto LABEL_30;
      }
      if ( !(unsigned __int8)BmlPixelFormatMatchHdrPixelFormat((unsigned int)GraphicsInfo->PixelFormat, v19, 0LL) )
        goto LABEL_30;
    }
LABEL_22:
    if ( (unsigned __int8)BmlAreRawModesEnabled(a1, a2)
      || (unsigned int)BmlGetModeCategoryForRegion((char *)NextMode + 76, &a1[v23 + 36], 0LL) != 1 )
    {
      if ( v17 )
      {
        if ( (unsigned int)BmlCompareRegionsWithPivot(
                             (struct _D3DKMDT_2DREGION *)((char *)NextMode + 76),
                             (struct _D3DKMDT_2DREGION *)((char *)v17 + 76),
                             &v22) != 1 )
          goto LABEL_30;
        if ( *((_DWORD *)v17 + 19) == v15 && *((_DWORD *)v17 + 20) == v13 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 3885;
        }
      }
      v17 = NextMode;
    }
LABEL_30:
    NextMode = DMMVIDPNSOURCEMODESET::GetNextMode(v9, NextMode);
    v16 = v23;
  }
  while ( NextMode );
  if ( !v17 )
    goto LABEL_36;
  if ( v24 )
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v17 + 20);
    v21 = *((_DWORD *)v17 + 19);
  }
  else
  {
    *(_DWORD *)(a4 + 160) = *((_DWORD *)v17 + 19);
    v21 = *((_DWORD *)v17 + 20);
  }
  *(_DWORD *)(a4 + 164) = v21;
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v9 + 88));
  return 0LL;
}
