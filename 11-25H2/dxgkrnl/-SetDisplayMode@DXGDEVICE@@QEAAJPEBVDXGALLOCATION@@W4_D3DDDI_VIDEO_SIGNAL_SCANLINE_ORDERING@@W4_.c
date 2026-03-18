/*
 * XREFs of ?SetDisplayMode@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@W4_D3DDDI_ROTATION@@U_D3DKMT_SETDISPLAYMODE_FLAGS@@PEAIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140311874
 * Callers:
 *     DxgkSetDisplayMode @ 0x14030F550 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140018F10 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400294B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1400319F4 (-NeedCommitVidPnOnModeChange@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x140037374 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x14003953C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z @ 0x14004ABD8 (-DxgkLogCodePointPacket@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@IIIU_LUID@@@Z.c)
 *     ?Own@?$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPEAU2@@DXGDMM@@QEAAXPEBU_D3DKMDT_VIDPN_PRESENT_PATH@@Q6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@0@Z1@Z @ 0x14004DBCC (-Own@-$AutoRelease@PEBU_D3DKMDT_VIDPN_PRESENT_PATH@@P6AJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@PEBU1@@ZPE.c)
 *     ?NotifyStatusChange@?$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x14004F61C (-NotifyStatusChange@-$DXGK_AUTO_STATUS_CHANGE_NOTIFY@$05$07@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TY.c)
 *     ?IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z @ 0x1400553A4 (-IsDisplayModeEqual@@YA_NAEBU_D3DKMT_DISPLAYMODE@@0E@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005C1B8 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     __security_check_cookie @ 0x14009F860 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14009F940 (_guard_dispatch_icall.c)
 *     memset @ 0x14009FCC0 (memset.c)
 *     DxgkNotifyDisplayChange @ 0x1401F6724 (DxgkNotifyDisplayChange.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x140296C50 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1402A2AD0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EPEAU_DXGK_DISPLAYMODE_INFO@@PEAPEAUD3DKMDT_HVIDPN__@@PEAPEBU_DXGDMM_VIDPN_INTERFACE@@PEAY0BA@I@Z @ 0x1402C0DC0 (-CreateFunctionalVidPnWithEnabledVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIW4_D3DKMDT_VIDPN_PR.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1402C1F3C (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 *     ?BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z @ 0x1402C778C (-BmlPixelFormatMatchHdrPixelFormat@@YA_NW4_D3DDDIFORMAT@@W4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@_N@Z.c)
 *     DxgkQueryDmmInterface @ 0x1402DD374 (DxgkQueryDmmInterface.c)
 *     ?DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z @ 0x14030C458 (-DmmPowerOnOffTargetsFromSourceIfNecessary@@YAJQEAXEPEAU_DMM_SET_TIMING_RESULT@@@Z.c)
 *     ?DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@PEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x14030CD44 (-DmmSetTimingsOnAdapter@@YAJPEAXPEAUD3DKMDT_HVIDPN__@@KW4_DMM_CLIENT_TYPE@@PEAUD3DKMT_VIDPN_SOUR.c)
 *     ?DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030E9EC (-DmmHandleSetTimingsResult@@YAXPEAXPEAU_DMM_SET_TIMING_RESULT@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     DxgkStatusChangeNotify @ 0x14030F070 (DxgkStatusChangeNotify.c)
 *     ?UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z @ 0x140329108 (-UpdateModeWithPrimary@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ @ 0x14035601C (-UsingSetTimingsFromVidPn@DXGADAPTER@@QEBAEXZ.c)
 *     ?DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z @ 0x1403A9E94 (-DmmNeedTargetModeWireformatOrColorspaceChange@@YA_NPEAXIW4_D3DDDIFORMAT@@@Z.c)
 *     ?DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_DISPMODECHANGE_TYPE@@QEBE@Z @ 0x1403D7744 (-DmmCacheDisplayModeChangeRequest@@YAJQEAXIQEBU_D3DKMT_DISPLAYMODE@@W4_DMM_CLIENT_TYPE@@JW4_DMM_.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403DC0C8 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

__int64 __fastcall DXGDEVICE::SetDisplayMode(
        DXGDEVICE *this,
        const struct DXGALLOCATION *a2,
        enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING a3,
        enum _D3DDDI_ROTATION a4,
        struct _D3DKMT_SETDISPLAYMODE_FLAGS a5,
        unsigned int *a6,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a7)
{
  __int64 v9; // r14
  __int64 v10; // r15
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  void *v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  int v17; // eax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rcx
  _QWORD *v24; // rax
  D3DDDIFORMAT Format; // eax
  __int64 v26; // rcx
  int v27; // r8d
  struct DXGPROCESS *Current; // rdi
  int PreferredHdrPixelFormat; // eax
  __int64 v30; // rax
  const struct _DXGK_DISPLAYMODE_INFO *v31; // rsi
  __int64 v32; // rdx
  int v33; // eax
  __int64 v34; // rbx
  unsigned int updated; // eax
  unsigned int v36; // r8d
  int v37; // eax
  enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING v38; // r9d
  struct _DXGDMM_INTERFACE *v39; // rbx
  int v40; // eax
  struct DXGGLOBAL *Global; // rax
  int v42; // r8d
  __int64 v43; // rax
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v44; // ebx
  __int64 v45; // rax
  int v46; // eax
  __int64 v47; // rbx
  unsigned __int8 v49; // [rsp+20h] [rbp-E0h]
  __int64 v50; // [rsp+20h] [rbp-E0h]
  struct _DXGK_DISPLAYMODE_INFO *v51; // [rsp+28h] [rbp-D8h]
  __int64 v52; // [rsp+30h] [rbp-D0h]
  __int64 v53; // [rsp+30h] [rbp-D0h]
  _BYTE v54[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v55[8]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v56; // [rsp+60h] [rbp-A0h]
  void (__fastcall *v57)(__int64, __int64); // [rsp+68h] [rbp-98h]
  __int64 v58; // [rsp+70h] [rbp-90h]
  int v59; // [rsp+78h] [rbp-88h]
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v60; // [rsp+80h] [rbp-80h]
  __int64 v61; // [rsp+88h] [rbp-78h]
  struct _DXGKARG_DESCRIBEALLOCATION v62; // [rsp+90h] [rbp-70h] BYREF
  enum _D3DDDI_ROTATION v63; // [rsp+C0h] [rbp-40h]
  struct _DXGDMM_INTERFACE *v64; // [rsp+C8h] [rbp-38h] BYREF
  struct D3DKMDT_HVIDPN__ *v65; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-28h] BYREF
  struct _DXGDMM_VIDPN_INTERFACE *v67; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v68; // [rsp+E8h] [rbp-18h]
  _QWORD v69[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v70; // [rsp+100h] [rbp+0h]
  __int128 v71; // [rsp+110h] [rbp+10h] BYREF
  __int128 v72; // [rsp+120h] [rbp+20h] BYREF
  __m256i v73; // [rsp+130h] [rbp+30h] BYREF
  __int128 v74; // [rsp+150h] [rbp+50h]
  _DWORD v75[68]; // [rsp+160h] [rbp+60h] BYREF
  __int64 retaddr; // [rsp+2C8h] [rbp+1C8h]

  v68 = a7;
  v66 = retaddr;
  v63 = a4;
  v60 = a3;
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v66, 6);
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6944;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"GetRenderAdapter()->IsCoreResourceExclusiveOwner()",
      6944LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v9 = *((_QWORD *)this + 235);
  v10 = (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF;
  if ( !v9 || !*(_QWORD *)(v9 + 3120) || !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 235)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 6952;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"(pDisplayAdapter != NULL) && pDisplayAdapter->IsDisplayAdapter() && pDisplayAdapter->IsCoreResourceExclusiveOwner()",
      6952LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v9 + 3120), v10);
  v71 = *(_OWORD *)DisplayModeInfo;
  v72 = *((_OWORD *)DisplayModeInfo + 1);
  v73 = *(__m256i *)((_BYTE *)DisplayModeInfo + 1);
  v12 = *((_OWORD *)DisplayModeInfo + 4);
  v62.Rotation = -1;
  v13 = *((_QWORD *)a2 + 6);
  v74 = v12;
  v62.Flags.Value = 1;
  memset(&v62.Width, 0, 32);
  v14 = *(void **)(v13 + 16);
  v15 = *((_QWORD *)this + 2);
  v62.hAllocation = v14;
  v17 = ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v15 + 16) + 3128LL), &v62, v16);
  v20 = v17;
  if ( v17 < 0 )
  {
    WdLogSingleEntry5(2LL, v17, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v10);
    v52 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 6967;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: DdiDescribeAllocation failed 0x%I64x 0x%I64x 0x%I64x",
      v20,
      (__int64)this,
      v52,
      (__int64)a2,
      (unsigned int)v10);
    goto LABEL_82;
  }
  if ( *(_QWORD *)&v62.Width != (_QWORD)v71 )
  {
    WdLogSingleEntry5(3LL, a2, v62.Width, v62.Height, (unsigned int)v71, DWORD1(v71));
    WdLogGlobalForLineNumber = 6984;
    LODWORD(v20) = -1071775739;
LABEL_82:
    if ( (int)v20 >= 0 )
    {
      v69[0] = 1LL;
      v69[1] = 0LL;
      v70 = 0LL;
      DxgkStatusChangeNotify((int *)v69, v21, v22);
    }
    goto LABEL_84;
  }
  if ( v62.Rotation != -1 && v62.Rotation != HIDWORD(v72) )
  {
    WdLogSingleEntry3(3LL, a2, v62.Rotation, SHIDWORD(v72));
    WdLogGlobalForLineNumber = 6994;
LABEL_13:
    LODWORD(v20) = -1071775739;
    goto LABEL_84;
  }
  v23 = *(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 12;
  LOBYTE(v23) = ((unsigned __int32)v73.m256i_i32[2] >> 4) ^ v23;
  if ( (v23 & 1) == 0 && v62.PrivateDriverFormatAttribute != v73.m256i_i32[5] )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v62.Height, v18, v19);
    LODWORD(v20) = -1071774891;
    v24[3] = a2;
    v24[4] = v62.PrivateDriverFormatAttribute;
    v24[5] = v73.m256i_u32[5];
    *a6 = v62.PrivateDriverFormatAttribute;
    WdLogGlobalForLineNumber = 7006;
    goto LABEL_84;
  }
  *(__int64 *)((char *)&v73.m256i_i64[1] + 4) = (__int64)v62.MultisampleMethod;
  Format = v62.Format;
  DWORD2(v71) = v62.Format;
  if ( !*(_QWORD *)(v9 + 3128) )
  {
    if ( v62.Format == D3DDDIFMT_X8R8G8B8 )
      Format = D3DDDIFMT_A8R8G8B8;
    DWORD2(v71) = Format;
  }
  if ( !v62.RefreshRate.Denominator )
  {
    WdLogSingleEntry1(2LL, v62.RefreshRate.Numerator);
    WdLogGlobalForLineNumber = 7027;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"The miniport driver returned invalid refresh rate with denominator being 0; numerator is 0x%I64x",
      v62.RefreshRate.Numerator,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v20) = -1073741811;
    goto LABEL_84;
  }
  if ( v62.RefreshRate.Numerator == 64 && v62.RefreshRate.Denominator == 1 && (_QWORD)v72 == 0xFFFFFFFEFFFFFFFEuLL )
  {
    v62.RefreshRate.Numerator = -2;
    v62.RefreshRate.Denominator = -2;
  }
  v26 = *(_DWORD *)(*((_QWORD *)this + 5) + 408LL) >> 2;
  if ( (*(_DWORD *)(*((_QWORD *)this + 5) + 408LL) & 4) != 0 || (*(_BYTE *)&a5 & 1) != 0 )
  {
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange((const struct _D3DDDI_RATIONAL *)&v72, &v62.RefreshRate, 0)
      && !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(
            (const struct _D3DDDI_RATIONAL *)&v73.m256i_u64[3],
            &v62.RefreshRate,
            v27) )
    {
      WdLogSingleEntry5(3LL, a2, v62.RefreshRate.Numerator, v62.RefreshRate.Denominator, (unsigned int)v72, DWORD1(v72));
      WdLogGlobalForLineNumber = 7058;
      goto LABEL_13;
    }
    v62.RefreshRate = (D3DDDI_RATIONAL)v72;
  }
  Current = DXGPROCESS::GetCurrent(v26);
  if ( !*((_BYTE *)DXGGLOBAL::GetGlobal() + 304857) && (*(_BYTE *)&a5 & 1) != 0 )
  {
    if ( Current )
    {
      if ( (*((_DWORD *)Current + 102) & 4) != 0 )
      {
        PreferredHdrPixelFormat = ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(*(_QWORD *)(v9 + 3120));
        if ( !BmlPixelFormatMatchHdrPixelFormat(v62.Format, SHIDWORD(v74), PreferredHdrPixelFormat != 1) )
        {
          WdLogSingleEntry3(3LL, a2, v62.Format, SHIDWORD(v74));
          WdLogGlobalForLineNumber = 7100;
          LODWORD(v20) = -1071775739;
          goto LABEL_84;
        }
      }
    }
  }
  *(D3DDDI_RATIONAL *)&v72 = v62.RefreshRate;
  HIDWORD(v71) = DmmMapVSyncFromRationalToInteger(&v62.RefreshRate, v60, 0LL);
  v30 = *((_QWORD *)a2 + 6);
  DWORD2(v72) = v60;
  v73.m256i_i32[2] = v73.m256i_i32[2] & 0xFFFFFFEF | (*(_DWORD *)(v30 + 4) >> 8) & 0x10;
  v31 = ADAPTER_DISPLAY::GetDisplayModeInfo(*(ADAPTER_DISPLAY **)(v9 + 3120), v10);
  if ( !ADAPTER_DISPLAY::NeedCommitVidPnOnModeChange(
          *(ADAPTER_DISPLAY **)(v9 + 3120),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF)
    && IsDisplayModeEqual(
         (const struct _D3DKMT_DISPLAYMODE *)v31,
         (const struct _D3DKMT_DISPLAYMODE *)&v71,
         *(_BYTE *)&a5 & 1)
    && !DmmNeedTargetModeWireformatOrColorspaceChange((void *)v9, v10, SDWORD2(v71))
    && ((*(_BYTE *)&a5 & 1) != 0 || *(_QWORD *)((char *)v31 + 44) == *(__int64 *)((char *)&v73.m256i_i64[1] + 4)) )
  {
    if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9) )
      DXGDEVICE::SetDisplayedPrimary(this, v10, a2, 0, 1u);
    v33 = DmmPowerOnOffTargetsFromSourceIfNecessary((PERESOURCE *)v9, 0, 0LL);
    if ( v33 < 0 )
    {
      v34 = v33;
      WdLogSingleEntry2(2LL, *(_QWORD *)(v9 + 3120), v33);
      v50 = *(_QWORD *)(v9 + 3120);
      WdLogGlobalForLineNumber = 7166;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"DmmPowerOnOffTargetsFromSourceIfNecessary failed on hAdapter 0x%I64x (Status = 0x%I64x).",
        v50,
        v34,
        0LL,
        0LL,
        0LL);
    }
    updated = ADAPTER_DISPLAY::UpdateModeWithPrimary(
                *(ADAPTER_DISPLAY **)(v9 + 3120),
                this,
                v10,
                *((struct DXGADAPTERALLOCATION **)a2 + 6));
    v36 = *(_DWORD *)(v9 + 412);
    LODWORD(v20) = updated;
    v61 = 0LL;
    DxgkLogCodePointPacket(0x3Cu, updated, v36, v10, 0LL);
LABEL_79:
    if ( (int)v20 < 0 )
      goto LABEL_84;
    *((_DWORD *)this + v10 + 310) |= 0x200u;
    goto LABEL_82;
  }
  v64 = 0LL;
  v37 = DxgkQueryDmmInterface((DXGADAPTER *)v9, v32, &v64);
  v20 = v37;
  if ( v37 < 0 )
  {
    WdLogSingleEntry5(2LL, v37, this, *((unsigned int *)a2 + 4), a2, (unsigned int)v10);
    v53 = *((unsigned int *)a2 + 4);
    WdLogGlobalForLineNumber = 7189;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"ret = 0x%I64x Device 0x%I64x: DxgkQueryDmmInterface failed 0x%I64x 0x%I64x 0x%I64x",
      v20,
      (__int64)this,
      v53,
      (__int64)a2,
      (unsigned int)v10);
    goto LABEL_82;
  }
  v67 = 0LL;
  v65 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = 0;
  v55[0] = 0;
  v39 = v64;
  v20 = (int)CreateFunctionalVidPnWithEnabledVidPnSource(
               v64,
               (void *const)v9,
               v10,
               v38,
               v49,
               (struct _D3DDDI_RATIONAL *)&v71,
               &v65,
               &v67);
  DXGDMM::AutoRelease<_D3DKMDT_VIDPN_PRESENT_PATH const *,long (*)(D3DKMDT_HVIDPNTOPOLOGY__ *,_D3DKMDT_VIDPN_PRESENT_PATH const *),D3DKMDT_HVIDPNTOPOLOGY__ *>::Own(
    (__int64)v55,
    (__int64)v65,
    *((_QWORD *)v39 + 8),
    v9);
  if ( (_DWORD)v20 != -1071774925 )
  {
    if ( (_DWORD)v20 == -1071774886 )
    {
      WdLogSingleEntry5(7LL, (unsigned int)v10, *(_QWORD *)(v9 + 3120), (unsigned int)v71, DWORD1(v71), SDWORD2(v71));
      WdLogGlobalForLineNumber = 7236;
      goto LABEL_53;
    }
    if ( (_DWORD)v20 == -1071774970 )
    {
      WdLogSingleEntry5(
        7LL,
        (unsigned int)v71,
        DWORD1(v71),
        SDWORD2(v71),
        (unsigned int)v72 / DWORD1(v72),
        (unsigned int)v10);
      WdLogGlobalForLineNumber = 7247;
      goto LABEL_53;
    }
    if ( (int)v20 < 0 )
    {
      WdLogSingleEntry5(2LL, v20, (unsigned int)v10, (unsigned int)v71, DWORD1(v71), SDWORD2(v71));
      WdLogGlobalForLineNumber = 7255;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"0x%I64x failed to create functional VidPN based on the active VidPN with source 0x%I64x enabled with %I64d x %I64d x %I64d.",
        v20,
        (unsigned int)v10,
        (unsigned int)v71,
        DWORD1(v71),
        SDWORD2(v71));
      if ( v55[0] )
        v57(v58, v56);
      v55[0] = 0;
      v56 = 0LL;
      v57 = 0LL;
      v58 = 0LL;
      v59 = -1073741212;
      goto LABEL_82;
    }
    if ( !DXGADAPTER::UsingSetTimingsFromVidPn((DXGADAPTER *)v9) )
      DXGDEVICE::SetDisplayedPrimary(this, v10, a2, 0, 1u);
    memset(v75, 0, 0x104uLL);
    v75[8] = 1 << v10;
    v54[0] = 0;
    v61 = v56;
    v40 = DmmSetTimingsOnAdapter(v9, v56, 0, 2u, v75, (__int64)v54, 0LL, 0LL);
    v20 = v40;
    if ( v40 < 0 )
    {
      WdLogSingleEntry5(2LL, v40, *(_QWORD *)(v9 + 3120), (unsigned int)v10, a2, this);
      v51 = *(struct _DXGK_DISPLAYMODE_INFO **)(v9 + 3120);
      WdLogGlobalForLineNumber = 7313;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"NTSTATUS=0x%I64x DXGADAPTER 0x%I64x DXGADAPTER::CommitVidPn failed VidPnSourceId 0x%I64x DXGALLOCATION 0x%I64x 0x%I64x 0x%I64x",
        v20,
        (__int64)v51,
        (unsigned int)v10,
        (__int64)a2,
        (__int64)this);
    }
    else
    {
      DmmHandleSetTimingsResult((DXGADAPTER ***)v9, (struct _DMM_SET_TIMING_RESULT *)v54, (GUID *)v68);
      if ( ((1 << v10) & v75[21]) != 0 )
        LODWORD(v20) = v75[v10 + 22];
      if ( !Current || (*((_DWORD *)Current + 102) & 4) == 0 )
      {
        Global = DXGGLOBAL::GetGlobal();
        do
          v42 = _InterlockedIncrement((volatile signed __int32 *)Global + 336);
        while ( !v42 );
        ADAPTER_DISPLAY::SetDisplayId(
          *(ADAPTER_DISPLAY **)(v9 + 3120),
          (*(_DWORD *)(*((_QWORD *)a2 + 6) + 4LL) >> 6) & 0xF,
          v42);
        DxgkNotifyDisplayChange(1);
        v43 = v56;
        goto LABEL_76;
      }
    }
    v43 = v61;
LABEL_76:
    if ( v55[0] )
      v57(v58, v43);
    v55[0] = 0;
    v56 = 0LL;
    v57 = 0LL;
    v58 = 0LL;
    v59 = -1073741212;
    goto LABEL_79;
  }
  WdLogSingleEntry5(7LL, -1071774925LL, (unsigned int)v10, (unsigned int)v71, DWORD1(v71), SDWORD2(v71));
  WdLogGlobalForLineNumber = 7227;
LABEL_53:
  if ( v55[0] )
    v57(v58, v56);
  v55[0] = 0;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0LL;
  v59 = -1073741212;
LABEL_84:
  v44 = v60;
  *(_QWORD *)&v71 = *(_QWORD *)&v62.Width;
  DWORD2(v71) = v62.Format;
  if ( v62.RefreshRate.Denominator )
    HIDWORD(v71) = DmmMapVSyncFromRationalToInteger(&v62.RefreshRate, v60, 0LL);
  else
    HIDWORD(v71) = 0;
  *(D3DDDI_RATIONAL *)&v72 = v62.RefreshRate;
  v45 = *((_QWORD *)a2 + 6);
  *((_QWORD *)&v72 + 1) = __PAIR64__(v63, v44);
  v46 = DmmCacheDisplayModeChangeRequest(v9, (*(_DWORD *)(v45 + 4) >> 6) & 0xF, &v71);
  if ( v46 < 0 )
  {
    v47 = v46;
    WdLogSingleEntry1(2LL, v46);
    WdLogGlobalForLineNumber = 7358;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Failed call to DmmCacheDisplayModeChangeRequest (status = 0x%I64x)",
      v47,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGK_AUTO_STATUS_CHANGE_NOTIFY<6,8>::NotifyStatusChange(&v66, 8);
  return (unsigned int)v20;
}
