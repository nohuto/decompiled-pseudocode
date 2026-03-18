/*
 * XREFs of ?DmmInitializeAdapter@@YAJQEAX@Z @ 0x140259010
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x140404094 (DpiFdoCreateRelatedObjects.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x140009940 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x14000BDB4 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1400295F4 (-SetHdrEnabled@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14002974C (-SetDisplayModeInfo@ADAPTER_DISPLAY@@QEAAXIQEBU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x140029C50 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x140030E28 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x140031638 (-SetLastCddIntegerVSync@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     ?AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ @ 0x140039A3C (-AcquireCofuncModeSetRef@DMMVIDPNTARGET@@QEBAPEAVDMMVIDPNTARGETMODESET@@XZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x14004575C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z @ 0x14004FC08 (-DxgkLogCodePointPacketForSession@@YAXW4_DXGK_DIAG_CODE_POINT_TYPE@@_KIIIU_LUID@@@Z.c)
 *     ?IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z @ 0x140051AB8 (-IsAdapterSessionized@DXGADAPTER@@QEBA_NPEAU_LUID@@PEAIPEA_K@Z.c)
 *     ?SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z @ 0x14005BC18 (-SetDisplayId@ADAPTER_DISPLAY@@QEAAXII@Z.c)
 *     Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x14006799C (Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline.c)
 *     ?IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@@Z @ 0x14008EE60 (-IsFirmwareRecommendedWireformatAndColorSpaceValid@DMMVIDPNTARGETMODE@@QEBA_NT_D3DKMDT_WIRE_FORM.c)
 *     Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck @ 0x14008F1F4 (Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck.c)
 *     __security_check_cookie @ 0x1400A1BC0 (__security_check_cookie.c)
 *     memset @ 0x1400A2000 (memset.c)
 *     ?GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x14035FDCC (-GetDisplayModeFromVidPnSource@DMMVIDPNTOPOLOGY@@QEBAJ_NIAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 *     ?DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x14037206C (-DetermineScalingCapabilities@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z @ 0x14037BD70 (-CacheLastClientCommittedVidPnRef@VIDPN_MGR@@QEAAJQEAVDMMVIDPN@@@Z.c)
 *     ?RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVDMMVIDPN@@@Z @ 0x1403D3284 (-RecommendFunctionalVidPn@VIDPN_MGR@@QEAAJW4_DXGK_RECOMMENDFUNCTIONALVIDPN_REASON@@QEAXIQEAPEAVD.c)
 *     ?SetFirmwareRecommendedVidPn@VIDPN_MGR@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1403E9408 (-SetFirmwareRecommendedVidPn@VIDPN_MGR@@QEAAXPEAVDMMVIDPN@@@Z.c)
 */

__int64 __fastcall DmmInitializeAdapter(DXGADAPTER *this)
{
  __int64 v2; // rax
  VIDPN_MGR *v3; // rsi
  __int64 result; // rax
  struct DMMVIDPN *v5; // rbx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // rdx
  struct DMMVIDPN *v9; // rcx
  char *v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *v13; // r14
  __int64 i; // rcx
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v15; // eax
  unsigned int v16; // r14d
  struct _LUID *v17; // rdx
  DXGADAPTER **v18; // rcx
  char v19; // r8
  struct DXGGLOBAL *Global; // rax
  int v21; // r8d
  unsigned int v22; // ebx
  __int64 v23; // r11
  struct DMMVIDPN *v24; // [rsp+38h] [rbp-69h] BYREF
  struct DMMVIDPN *v25; // [rsp+40h] [rbp-61h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-59h] BYREF
  struct DMMVIDPNTARGETMODESET *v27; // [rsp+50h] [rbp-51h] BYREF
  __int64 v28; // [rsp+58h] [rbp-49h] BYREF
  unsigned int v29[20]; // [rsp+68h] [rbp-39h] BYREF
  union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v30[2]; // [rsp+B8h] [rbp+17h] BYREF
  unsigned int v31; // [rsp+C0h] [rbp+1Fh]

  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10210;
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 10215;
  }
  v2 = *((_QWORD *)this + 390);
  if ( !v2 )
    return 0LL;
  v3 = *(VIDPN_MGR **)(v2 + 104);
  if ( !v3 )
  {
    WdLogSingleEntry1(2LL, this);
    result = 3223192373LL;
    WdLogGlobalForLineNumber = 10231;
    return result;
  }
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v28, *(_QWORD *)(v2 + 104));
  v5 = 0LL;
  v6 = (*((_DWORD *)this + 111) & 0x8000) == 0;
  v24 = 0LL;
  *(_QWORD *)&v30[0].0 = 0LL;
  v31 = 0;
  if ( !v6 )
  {
    v25 = 0LL;
    v7 = VIDPN_MGR::RecommendFunctionalVidPn(v3, DXGK_RFVR_FIRMWARE, v30, 0xCu, &v25);
    if ( v7 < 0 )
    {
      WdLogSingleEntry2(2LL, this, v7);
      WdLogGlobalForLineNumber = 10262;
    }
    else
    {
      auto_rc<DMMVIDPN>::reset((__int64 *)&v24, (__int64)v25);
      v5 = v24;
    }
    if ( v5 )
    {
      if ( v5 == (struct DMMVIDPN *)-96LL )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10271;
      }
      v8 = *((_QWORD *)v5 + 17);
      if ( v8 != 1 )
      {
        WdLogSingleEntry2(1LL, v8, this);
        WdLogGlobalForLineNumber = 10279;
        goto LABEL_42;
      }
      v9 = (struct DMMVIDPN *)*((_QWORD *)v5 + 15);
      if ( v9 == (struct DMMVIDPN *)((char *)v5 + 120) )
        v10 = 0LL;
      else
        v10 = (char *)v9 - 8;
      v11 = *((_QWORD *)v10 + 11);
      v12 = *((_QWORD *)v10 + 12);
      if ( !v11 || !v12 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10286;
      }
      v27 = DMMVIDPNTARGET::AcquireCofuncModeSetRef((DMMVIDPNTARGET *)v12);
      v13 = (union _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE *)*((_QWORD *)v27 + 18);
      if ( !v13 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 10294;
      }
      if ( !DMMVIDPNTARGETMODE::IsFirmwareRecommendedWireformatAndColorSpaceValid(
              (DMMVIDPNTARGETMODE *)v13,
              v30[1],
              (enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE)v30[0].Value) )
      {
        WdLogSingleEntry3(1LL, v30[1].Value, (int)v30[0].Value, this);
        WdLogGlobalForLineNumber = 10303;
LABEL_41:
        auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)&v27, 0LL);
        goto LABEL_42;
      }
      for ( i = 0LL; i < 2; ++i )
        *(_BYTE *)(*(_QWORD *)(v12 + 96) + i + 416) = 1;
      v15.0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v30[1];
      v13[34].0 = (struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD)v30[0];
      v13[33].0 = v15.0;
      VIDPN_MGR::SetFirmwareRecommendedVidPn(v3, v5);
      Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck();
      if ( (unsigned int)Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline() )
      {
        v16 = *(_DWORD *)(v11 + 24);
        memset(v29, 0, sizeof(v29));
        if ( DMMVIDPNTOPOLOGY::GetDisplayModeFromVidPnSource(
               (struct DMMVIDPN *)((char *)v5 + 96),
               1,
               v16,
               (struct _DXGK_DISPLAYMODE_INFO *)v29) < 0 )
        {
          WdLogSingleEntry2(2LL, v16, this);
          WdLogGlobalForLineNumber = 10345;
LABEL_40:
          v22 = *(_DWORD *)(v12 + 24);
          v26 = 0LL;
          DXGADAPTER::IsAdapterSessionized(this, v17, 0LL, &v26);
          DxgkLogCodePointPacketForSession(89, v26, v22, v31, 1, v23);
          goto LABEL_41;
        }
        v18 = (DXGADAPTER **)*((_QWORD *)this + 390);
        v29[13] = 0;
        v29[11] = 1;
        v29[12] = 1;
        ADAPTER_DISPLAY::SetDisplayModeInfo(v18, v16, (const struct _DXGK_DISPLAYMODE_INFO *const)v29);
        ADAPTER_DISPLAY::SetLastCddIntegerVSync(*((ADAPTER_DISPLAY **)this + 390), v16, v29[3]);
        ADAPTER_DISPLAY::DetermineScalingCapabilities(*((ADAPTER_DISPLAY **)this + 390), v16);
        v19 = v30[0].Value == 12 || v30[0].Value == 32;
        ADAPTER_DISPLAY::SetHdrEnabled(*((DXGADAPTER ***)this + 390), v16, v19);
        *(_BYTE *)(*(_QWORD *)(v12 + 96) + 414LL) = 1;
      }
      VIDPN_MGR::CacheLastClientCommittedVidPnRef(v3, v5);
      Global = DXGGLOBAL::GetGlobal();
      do
        v21 = _InterlockedIncrement((volatile signed __int32 *)Global + 344);
      while ( !v21 );
      ADAPTER_DISPLAY::SetDisplayId(*((ADAPTER_DISPLAY **)this + 390), *(_DWORD *)(v11 + 24), v21);
      goto LABEL_40;
    }
  }
LABEL_42:
  auto_rc<DMMVIDPN>::reset((__int64 *)&v24, 0LL);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v28 + 40));
  return 0LL;
}
