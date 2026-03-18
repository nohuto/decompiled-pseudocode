/*
 * XREFs of ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1402BFFB0
 * Callers:
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x1402BFF00 (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_PATH_INFO@@PEAIPEAUD3DKMT_VIDPN_SOURCE_MASKS@@AEAK3PEAU_DXGK_SET_TIMING_RESULTS@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1403A8604 (-CommitVidPnOnAdapter@VIDPN_MGR@@AEAAJKW4_DMM_CLIENT_TYPE@@QEBVDMMVIDPN@@KPEAU_DXGK_SET_TIMING_P.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x14001B358 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14001B394 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14001B3E0 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x14003B47C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x14003B5DC (-IsFunctionalContentRotationType@DMMVIDPNPRESENTPATH@@SAEW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@.c)
 *     ?D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA?AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z @ 0x14003B614 (-D3DKMDT_VPPR_GET_CONTENT_ROTATION@@YA-AW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@W41@@Z.c)
 *     ?IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14003B6FC (-IsFunctionalContentScalingType@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x14003B78C (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x1402BFCD4 (-DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@.c)
 *     ConvertDMMScalingToGdiScaling @ 0x1402C1574 (ConvertDMMScalingToGdiScaling.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::GetDisplayModeFromPath(
        DMMVIDPNPRESENTPATH *this,
        char a2,
        struct _D3DDDI_RATIONAL *a3)
{
  __int64 v3; // rbx
  __int64 v6; // rbx
  DMMVIDPNTARGET *v7; // rcx
  struct DMMVIDPNTARGETMODESET *v8; // rbx
  _DWORD *v9; // rsi
  int v10; // r12d
  struct DMMVIDPNTARGETMODESET *v11; // rdi
  __int64 v12; // r13
  int v13; // ecx
  UINT Numerator; // edx
  int v15; // eax
  unsigned int v16; // edx
  __int64 v18; // r8
  struct DMMVIDPNTARGETMODESET *v19; // [rsp+20h] [rbp-58h] BYREF
  struct DMMVIDPNTARGETMODESET *v20; // [rsp+28h] [rbp-50h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION v22; // [rsp+80h] [rbp+8h]
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v24; // [rsp+98h] [rbp+20h]

  v3 = *((_QWORD *)this + 11);
  if ( !*(_QWORD *)(v3 + 40) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v6 = *(_QWORD *)(ContainedBy<DMMVIDPN>::GetContainer(*(_QWORD *)(v3 + 40) + 64LL) + 48);
  if ( !*(_QWORD *)(v6 + 8) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 68;
  }
  v7 = (DMMVIDPNTARGET *)*((_QWORD *)this + 11);
  v21 = *(_QWORD *)(v6 + 8);
  v8 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(v7);
  v20 = v8;
  v9 = (_DWORD *)*((_QWORD *)v8 + 18);
  if ( !v9 )
  {
    WdLogSingleEntry2(2LL, this, 1075708679LL);
    WdLogGlobalForLineNumber = 854;
LABEL_20:
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v8 + 88));
    return 1075708679LL;
  }
  v10 = v9[18];
  if ( v10 == 2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 859;
  }
  v11 = DMMVIDPNTARGET::AcquireCofuncModeSetRef(*((DMMVIDPNTARGET **)this + 12));
  v19 = v11;
  v12 = *((_QWORD *)v11 + 18);
  if ( !v12 )
  {
    WdLogSingleEntry2(2LL, this, 1075708679LL);
    WdLogGlobalForLineNumber = 871;
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
    goto LABEL_20;
  }
  v22 = (unsigned int)D3DKMDT_VPPR_GET_CONTENT_ROTATION((enum _D3DKMDT_VIDPN_PRESENT_PATH_ROTATION)*((_DWORD *)this + 29));
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentRotationType(v22) )
  {
    WdLogSingleEntry2(2LL, this, 1075708679LL);
    WdLogGlobalForLineNumber = 883;
LABEL_25:
    auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v19, 0LL);
    auto_rc<DMMVIDPNSOURCEMODESET>::reset((__int64 *)&v20, 0LL);
    return 1075708679LL;
  }
  v24 = *((_DWORD *)this + 28);
  if ( !DMMVIDPNPRESENTPATH::IsFunctionalContentScalingType(this, v24) )
  {
    WdLogSingleEntry2(2LL, this, 1075708679LL);
    WdLogGlobalForLineNumber = 895;
    goto LABEL_25;
  }
  v13 = 16;
  Numerator = a3[5].Numerator;
  a3->Numerator = v9[19];
  a3->Denominator = v9[20];
  a3[1].Numerator = v9[24];
  v15 = 0;
  if ( (unsigned int)(v10 - 3) > 1 )
    v13 = 0;
  v16 = v13 & 0xFFFFFFDF | Numerator & 0xFFFFFFCF;
  if ( v10 == 4 )
    v15 = 32;
  a3[5].Numerator = v15 | v16;
  a3[2] = *(struct _D3DDDI_RATIONAL *)(v12 + 152);
  a3[3].Numerator = (int)(*(_DWORD *)(v12 + 120) << 29) >> 29;
  a3[3].Denominator = v22;
  ConvertDMMScalingToGdiScaling((unsigned int)v24, &a3[4]);
  a3[7] = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v12 + 72));
  a3[8] = *(struct _D3DDDI_RATIONAL *)(v12 + 144);
  a3[9].Numerator = *(_DWORD *)(v12 + 160);
  a3[1].Denominator = DmmMapVSyncFromRationalToInteger(
                        a3 + 2,
                        (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)(v12 + 120) << 29) >> 29),
                        0LL);
  if ( a2 )
  {
    v18 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 96LL) + 112LL);
    if ( v18 )
      a3[9].Denominator = ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(v21, *(_DWORD *)(v12 + 136), v18);
    else
      a3[9].Denominator = 0;
  }
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v11 + 88));
  ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)v8 + 88));
  return 0LL;
}
