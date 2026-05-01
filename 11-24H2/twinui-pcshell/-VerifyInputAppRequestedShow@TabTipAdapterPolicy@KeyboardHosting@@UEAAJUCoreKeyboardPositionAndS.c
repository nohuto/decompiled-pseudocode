/*
 * XREFs of ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18007FA70 (-CheckRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@.c)
 *     ??$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU123@AEBW44@_KAEBU123@AEBW44@AEA_NAEA_N@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEA_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@012012AEA_N3@Z @ 0x18007FE9C (--$MonitorInfoUsedForShowRequest@_KAEBURect@Foundation@Windows@@AEBW4DEVICE_SCALE_FACTOR@@_KAEBU.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x18013CDFC (-IgnoreRelativeToCaretShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NIAEBUCoreKeyboardPo.c)
 *     ?LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z @ 0x18014002C (-LoadFloatingBottomPositionFromRegistryIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAXI@Z.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18014046C (--$_Try_emplace@AEBI$$V@-$map@IURelativePositionOnScreen@KeyboardHosting@@U-$less@I@std@@V-$allo.c)
 *     ??$_Try_emplace@AEBI$$V@?$_Hash@V?$_Umap_traits@IUViewState@KeyboardHosting@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBIUViewState@KeyboardHosting@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x1801A9CD0 (--$_Try_emplace@AEBI$$V@-$_Hash@V-$_Umap_traits@IUViewState@KeyboardHosting@@V-$_Uhash_compare@I.c)
 *     ShouldLoadLastFloatingPosition @ 0x1801EE1E8 (ShouldLoadLastFloatingPosition.c)
 *     ShouldSaveLastFloatingPosition @ 0x1801F52C0 (ShouldSaveLastFloatingPosition.c)
 *     ?IsRequestBottomEdgeAligned@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180200D34 (-IsRequestBottomEdgeAligned@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionA.c)
 *     ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x1802142D0 (-IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKe.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x1802192AC (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@PEAX@std@@_N@1@AEBI@Z @ 0x18021F47C (--$_Try_emplace@AEBI$$V@-$map@IUSize@Foundation@Windows@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ?GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Windows@@I@Z @ 0x1802553FC (-GetFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXPEAUPoint@Foundation@Window.c)
 *     ?UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180255B78 (-UpdateCurrentMonitorIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUCoreKeyboardPosit.c)
 *     ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970 (-GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundatio.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _o_ceilf_0 @ 0x1802D2524 (_o_ceilf_0.c)
 *     floorf @ 0x1802D2530 (floorf.c)
 *     ??0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z @ 0x180479DCC (--0MonitorInformation@KeyboardHosting@@QEAA@AEBU01@@Z.c)
 *     ?GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA?AUMonitorInformationSnapshot@2@XZ @ 0x18047A2B4 (-GetSnapshot@MonitorInformation@KeyboardHosting@@QEBA-AUMonitorInformationSnapshot@2@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ??$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0AEAI1@Z @ 0x180484E84 (--$InputAppRequestedShowBadRequest@IIAEAIAEAI@TouchKeyboardExperienceTelemetryLogger@@SAX$$QEAI0.c)
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windows@@I@Z @ 0x1804872D4 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAJAEBUPoint@Foundation@Windo.c)
 *     ?UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z @ 0x180488FB8 (-UnsafeUpdateMonitorInfo@ViewRectProvider@KeyboardHosting@@QEAAXAEBUMonitorInformation@2@00@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KeyboardHosting::TabTipAdapterPolicy::VerifyInputAppRequestedShow(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        _BYTE *a7)
{
  int updated; // esi
  __int64 v10; // rdx
  _BYTE *v12; // r14
  _BYTE *v13; // rsi
  unsigned __int64 *v14; // r12
  unsigned __int64 *v15; // rsi
  __int64 v16; // rax
  char IsRequestBottomEdgeAligned; // al
  int v18; // r10d
  int ViewRectFromPositionAndSizeRequest; // eax
  unsigned int v20; // r14d
  char v21; // r14
  float v22; // xmm1_4
  float v23; // xmm10_4
  float v24; // xmm11_4
  float v25; // xmm12_4
  float v26; // xmm6_4
  float v27; // xmm7_4
  float v28; // xmm8_4
  float v29; // xmm9_4
  __int64 v30; // rcx
  unsigned int v31; // r9d
  __int64 v32; // rcx
  __int64 v33; // r8
  int v34; // r9d
  unsigned int v35; // eax
  bool v36; // zf
  unsigned int v37; // r9d
  __int64 v38; // rcx
  char v39; // al
  int v40; // r10d
  char v41; // si
  const struct KeyboardHosting::MonitorInformation *v42; // rdx
  float v43; // xmm1_4
  float v44; // xmm10_4
  float v45; // xmm11_4
  float v46; // xmm12_4
  float v47; // xmm8_4
  float v48; // xmm9_4
  __int64 v49; // rcx
  unsigned int v50; // r9d
  __int64 v51; // rcx
  __int64 v52; // r8
  int v53; // r9d
  unsigned int v54; // r9d
  __int64 v55; // rcx
  __int128 v56; // xmm0
  int v57; // [rsp+38h] [rbp-D0h]
  int v58; // [rsp+38h] [rbp-D0h]
  int v59; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v60; // [rsp+70h] [rbp-98h] BYREF
  char v61; // [rsp+78h] [rbp-90h] BYREF
  __int128 v62; // [rsp+80h] [rbp-88h] BYREF
  unsigned __int64 v63[2]; // [rsp+90h] [rbp-78h] BYREF
  __int128 v64; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v65[76]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v66[24]; // [rsp+108h] [rbp+0h] BYREF
  int v67[4]; // [rsp+120h] [rbp+18h] BYREF
  int v68; // [rsp+130h] [rbp+28h]
  __int128 v69; // [rsp+1B8h] [rbp+B0h] BYREF
  _OWORD v70[4]; // [rsp+1C8h] [rbp+C0h] BYREF
  __int64 v71; // [rsp+208h] [rbp+100h] BYREF
  unsigned int v72[5]; // [rsp+210h] [rbp+108h] BYREF
  _BYTE v73[52]; // [rsp+224h] [rbp+11Ch] BYREF
  unsigned __int64 v74; // [rsp+258h] [rbp+150h] BYREF
  unsigned int v75[5]; // [rsp+260h] [rbp+158h] BYREF
  _BYTE v76[52]; // [rsp+274h] [rbp+16Ch] BYREF
  __int128 v77; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v78[176]; // [rsp+2B8h] [rbp+1B0h] BYREF
  _BYTE v79[176]; // [rsp+368h] [rbp+260h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4D0h] [rbp+3C8h]

  v60 = a3;
  if ( KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToCaretShowRequest(
         (RTL_SRWLOCK *)a1,
         a3,
         (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2)
    || KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToFocusedElementShowRequest(
         (KeyboardHosting::TabTipAdapterPolicy *)a1,
         (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    *a7 = 0;
    return 0LL;
  }
  if ( !KeyboardHosting::TabTipAdapterPolicy::CheckRequest(
          (KeyboardHosting::TabTipAdapterPolicy *)a1,
          (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2) )
  {
    *a7 = 0;
    LODWORD(v62) = *(_DWORD *)(a2 + 24);
    LODWORD(v63[0]) = *(_DWORD *)a2;
    TouchKeyboardExperienceTelemetryLogger::InputAppRequestedShowBadRequest<unsigned int,unsigned int,unsigned int &,unsigned int &>(
      v63,
      &v62,
      a2 + 8,
      a2 + 4);
    return 0LL;
  }
  updated = KeyboardHosting::TabTipAdapterPolicy::UpdateCurrentMonitorIfNecessary(
              (RTL_SRWLOCK *)a1,
              (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
  if ( updated < 0 )
  {
    v10 = 747LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
      (const char *)(unsigned int)updated);
    return (unsigned int)updated;
  }
  v12 = (_BYTE *)(a1 + 808);
  v13 = (_BYTE *)(a1 + 860);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
  {
    KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 232, &v71);
    KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 568, &v69);
    KeyboardHosting::MonitorInformation::GetSnapshot(a1 + 400, &v74);
    v63[0] = v74;
    *(_QWORD *)&v62 = v69;
    *(_QWORD *)&v64 = v71;
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
      (unsigned __int64 *)&v64,
      (const struct Windows::Foundation::Rect *)v73,
      v72,
      (unsigned __int64 *)&v62,
      (struct Windows::Foundation::Rect *)((char *)v70 + 12),
      (unsigned int *)&v69 + 2,
      v63,
      (struct Windows::Foundation::Rect *)v76,
      v75,
      (bool *)(a1 + 860),
      (bool *)(a1 + 808));
    v14 = (unsigned __int64 *)&v71;
    if ( *v13 )
      v14 = &v74;
    v15 = (unsigned __int64 *)&v69;
    if ( *v12 )
      v15 = (unsigned __int64 *)&v71;
    v16 = *(_QWORD *)(a1 + 224);
    *(_OWORD *)(v16 + 520) = *(_OWORD *)v14;
    *(_OWORD *)(v16 + 536) = *((_OWORD *)v14 + 1);
    *(_OWORD *)(v16 + 552) = *((_OWORD *)v14 + 2);
    *(_OWORD *)(v16 + 568) = *((_OWORD *)v14 + 3);
    *(_OWORD *)(v16 + 584) = *((_OWORD *)v14 + 4);
    *(_OWORD *)(v16 + 600) = *(_OWORD *)v15;
    *(_OWORD *)(v16 + 616) = *((_OWORD *)v15 + 1);
    *(_OWORD *)(v16 + 632) = *((_OWORD *)v15 + 2);
    *(_OWORD *)(v16 + 648) = *((_OWORD *)v15 + 3);
    *(_OWORD *)(v16 + 664) = *((_OWORD *)v15 + 4);
    *(_OWORD *)(v16 + 680) = v69;
    *(_OWORD *)(v16 + 696) = v70[0];
    *(_OWORD *)(v16 + 712) = v70[1];
    *(_OWORD *)(v16 + 728) = v70[2];
    *(_OWORD *)(v16 + 744) = v70[3];
    LOBYTE(v59) = 0;
    v61 = 0;
    v77 = 0LL;
    IsRequestBottomEdgeAligned = KeyboardHosting::TabTipAdapterPolicy::IsRequestBottomEdgeAligned(
                                   (KeyboardHosting::TabTipAdapterPolicy *)a1,
                                   (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
    v18 = *(_DWORD *)(a1 + 208);
    *(_OWORD *)v65 = *(_OWORD *)a2;
    *(_OWORD *)&v65[16] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v65[32] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v65[48] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v65[64] = *(_QWORD *)(a2 + 64);
    LOBYTE(v57) = IsRequestBottomEdgeAligned;
    ViewRectFromPositionAndSizeRequest = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                                           *(_QWORD *)(a1 + 224),
                                           a1 + 144,
                                           a1 + 176,
                                           a1 + 192,
                                           v65,
                                           v18,
                                           v57,
                                           &v77,
                                           &v59,
                                           &v61);
    v20 = ViewRectFromPositionAndSizeRequest;
    if ( ViewRectFromPositionAndSizeRequest < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x311,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        (const char *)(unsigned int)ViewRectFromPositionAndSizeRequest);
      return v20;
    }
    v21 = *(_BYTE *)(a2 + 44);
    if ( v21 || *(_BYTE *)(a2 + 45) )
    {
      if ( *(_DWORD *)a2 == 1 )
        v15 = v14;
    }
    else
    {
      v15 = (unsigned __int64 *)&v69;
    }
    v22 = (float)*((int *)v15 + 2);
    v23 = (float)(*((float *)&v77 + 1) * v22) / 100.0;
    v24 = (float)(*((float *)&v77 + 2) * v22) / 100.0;
    v25 = (float)(*((float *)&v77 + 3) * v22) / 100.0;
    v26 = (float)(*(float *)&v77 * v22) / 100.0;
    *(float *)&v62 = v26;
    v27 = v23;
    *((float *)&v62 + 1) = v23;
    v28 = v24;
    *((float *)&v62 + 2) = v24;
    v29 = v25;
    *((float *)&v62 + 3) = v25;
    if ( *(_DWORD *)a2 == 1 )
    {
      *(float *)&v62 = (float)(*(float *)&v77 * v22) / 100.0;
      *((float *)&v62 + 1) = (float)(*((float *)&v77 + 1) * v22) / 100.0;
      *((float *)&v62 + 2) = (float)(*((float *)&v77 + 2) * v22) / 100.0;
      *((float *)&v62 + 3) = (float)(*((float *)&v77 + 3) * v22) / 100.0;
      if ( !v21 )
      {
        *(float *)&v62 = (float)(*(float *)&v77 * v22) / 100.0;
        *((float *)&v62 + 1) = (float)(*((float *)&v77 + 1) * v22) / 100.0;
        *((float *)&v62 + 2) = (float)(*((float *)&v77 + 2) * v22) / 100.0;
        *((float *)&v62 + 3) = (float)(*((float *)&v77 + 3) * v22) / 100.0;
        if ( !*(_BYTE *)(a2 + 45) )
        {
          *(float *)&v62 = (float)(*(float *)&v77 * v22) / 100.0;
          *((float *)&v62 + 1) = (float)(*((float *)&v77 + 1) * v22) / 100.0;
          *((float *)&v62 + 2) = (float)(*((float *)&v77 + 2) * v22) / 100.0;
          *((float *)&v62 + 3) = (float)(*((float *)&v77 + 3) * v22) / 100.0;
          if ( (*(_BYTE *)(a2 + 24) & 2) != 0 )
          {
            v26 = floorf((float)(*(float *)&v77 * v22) / 100.0);
            *(float *)&v62 = v26;
            v27 = o_ceilf_0(v23);
            *((float *)&v62 + 1) = v27;
            v28 = o_ceilf_0(v24);
            *((float *)&v62 + 2) = v28;
            v29 = o_ceilf_0(v25);
            *((float *)&v62 + 3) = v29;
          }
        }
      }
    }
    *a7 = 1;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v64, (RTL_SRWLOCK *)(a1 + 800));
    v65[0] = 1;
    *(_WORD *)&v65[1] = 0;
    v65[3] = 0;
    *(_OWORD *)&v65[4] = *(_OWORD *)a2;
    *(_OWORD *)&v65[20] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v65[36] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v65[52] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v65[68] = *(_QWORD *)(a2 + 64);
    v30 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                       (float *)(a1 + 736),
                       (__int64)v63,
                       &v60);
    *(_OWORD *)(v30 + 20) = *(_OWORD *)v65;
    *(_OWORD *)(v30 + 36) = *(_OWORD *)&v65[16];
    *(_OWORD *)(v30 + 52) = *(_OWORD *)&v65[32];
    *(_OWORD *)(v30 + 68) = *(_OWORD *)&v65[48];
    *(_QWORD *)(v30 + 84) = *(_QWORD *)&v65[64];
    *(_DWORD *)(v30 + 92) = *(_DWORD *)&v65[72];
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v64);
    if ( ShouldLoadLastFloatingPosition(a2)
      && (v32 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                             (__int64 **)(a1 + 840),
                             (__int64)&v64,
                             &v60,
                             v31),
          *(float *)(v32 + 32) = v28,
          *(float *)(v32 + 36) = v29,
          KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            v60,
            v33,
            v34),
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (_QWORD *)(a1 + 824),
                                  (__int64)&v64,
                                  &v60)
                   + 40LL)) )
    {
      v63[0] = 0LL;
      KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (struct Windows::Foundation::Point *)v63,
        v60);
      *(_QWORD *)&v77 = v63[0];
      *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v29), LODWORD(v28));
      v64 = 0LL;
      KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v77, (int *)v15 + 3, &v64);
      if ( v21 )
      {
        LODWORD(v26) = v64;
        LODWORD(v62) = v64;
      }
      if ( *(_BYTE *)(a2 + 45) )
      {
        v27 = *((float *)&v64 + 1);
        DWORD1(v62) = DWORD1(v64);
      }
    }
    else if ( ShouldSaveLastFloatingPosition(a2) )
    {
      v38 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                         (__int64 **)(a1 + 840),
                         (__int64)&v64,
                         &v60,
                         v37);
      *(float *)(v38 + 32) = v28;
      *(float *)(v38 + 36) = v29;
      v63[0] = __PAIR64__(LODWORD(v27), LODWORD(v26));
      updated = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                  (KeyboardHosting::TabTipAdapterPolicy *)a1,
                  (const struct Windows::Foundation::Point *)v63,
                  v60);
      if ( updated < 0 )
      {
        v10 = 877LL;
        goto LABEL_6;
      }
    }
    if ( *(_DWORD *)a2 != 2 )
      goto LABEL_69;
    v35 = v60;
    if ( v60 != *(_DWORD *)(a1 + 856) || !*(_BYTE *)(a1 + 820) || !v21 && !*(_BYTE *)(a2 + 45) )
    {
      v36 = (_BYTE)v59 == 0;
      goto LABEL_67;
    }
  }
  else
  {
    *(_QWORD *)&v64 = *(_QWORD *)(a1 + 400);
    v63[0] = *(_QWORD *)(a1 + 568);
    *(_QWORD *)&v62 = *(_QWORD *)(a1 + 232);
    TouchKeyboardExperienceTelemetryLogger::MonitorInfoUsedForShowRequest<unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,unsigned __int64,Windows::Foundation::Rect const &,enum DEVICE_SCALE_FACTOR const &,bool &,bool &>(
      (unsigned __int64 *)&v62,
      (const struct Windows::Foundation::Rect *)(a1 + 240),
      (unsigned int *)(a1 + 272),
      v63,
      (struct Windows::Foundation::Rect *)(a1 + 576),
      (unsigned int *)(a1 + 608),
      (unsigned __int64 *)&v64,
      (struct Windows::Foundation::Rect *)(a1 + 408),
      (unsigned int *)(a1 + 440),
      (bool *)(a1 + 860),
      (bool *)(a1 + 808));
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v79,
      (const struct KeyboardHosting::MonitorInformation *)(a1 + (*v13 != 0 ? 400LL : 232LL)));
    KeyboardHosting::MonitorInformation::MonitorInformation(
      (KeyboardHosting::MonitorInformation *)v78,
      (const struct KeyboardHosting::MonitorInformation *)(a1 + (-(__int64)(*v12 != 0) & 0xFFFFFFFFFFFFFEB0uLL) + 568));
    KeyboardHosting::ViewRectProvider::UnsafeUpdateMonitorInfo(
      *(KeyboardHosting::ViewRectProvider **)(a1 + 224),
      (const struct KeyboardHosting::MonitorInformation *)v79,
      (const struct KeyboardHosting::MonitorInformation *)v78,
      (const struct KeyboardHosting::MonitorInformation *)(a1 + 568));
    LOBYTE(v59) = 0;
    v61 = 0;
    v77 = 0LL;
    v39 = KeyboardHosting::TabTipAdapterPolicy::IsRequestBottomEdgeAligned(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            (const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *)a2);
    v40 = *(_DWORD *)(a1 + 208);
    *(_OWORD *)v65 = *(_OWORD *)a2;
    *(_OWORD *)&v65[16] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v65[32] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v65[48] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v65[64] = *(_QWORD *)(a2 + 64);
    LOBYTE(v58) = v39;
    updated = KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
                *(_QWORD *)(a1 + 224),
                a1 + 144,
                a1 + 176,
                a1 + 192,
                v65,
                v40,
                v58,
                &v77,
                &v59,
                &v61);
    if ( updated < 0 )
    {
      v10 = 938LL;
      goto LABEL_6;
    }
    v41 = *(_BYTE *)(a2 + 44);
    if ( v41 || *(_BYTE *)(a2 + 45) )
    {
      v42 = (const struct KeyboardHosting::MonitorInformation *)v78;
      if ( *(_DWORD *)a2 == 1 )
        v42 = (const struct KeyboardHosting::MonitorInformation *)v79;
    }
    else
    {
      v42 = (const struct KeyboardHosting::MonitorInformation *)(a1 + 568);
    }
    KeyboardHosting::MonitorInformation::MonitorInformation((KeyboardHosting::MonitorInformation *)v66, v42);
    v43 = (float)v68;
    v44 = (float)(*((float *)&v77 + 1) * (float)v68) / 100.0;
    v45 = (float)(*((float *)&v77 + 2) * (float)v68) / 100.0;
    v46 = (float)(*((float *)&v77 + 3) * (float)v68) / 100.0;
    v26 = (float)(*(float *)&v77 * (float)v68) / 100.0;
    *(float *)&v62 = v26;
    v27 = v44;
    *((float *)&v62 + 1) = v44;
    v47 = v45;
    *((float *)&v62 + 2) = v45;
    v48 = v46;
    *((float *)&v62 + 3) = v46;
    if ( *(_DWORD *)a2 == 1 )
    {
      *(float *)&v62 = (float)(*(float *)&v77 * v43) / 100.0;
      *((float *)&v62 + 1) = (float)(*((float *)&v77 + 1) * (float)v68) / 100.0;
      *((float *)&v62 + 2) = (float)(*((float *)&v77 + 2) * v43) / 100.0;
      *((float *)&v62 + 3) = (float)(*((float *)&v77 + 3) * v43) / 100.0;
      if ( !v41 )
      {
        *(float *)&v62 = (float)(*(float *)&v77 * v43) / 100.0;
        *((float *)&v62 + 1) = (float)(*((float *)&v77 + 1) * (float)v68) / 100.0;
        *((float *)&v62 + 2) = (float)(*((float *)&v77 + 2) * v43) / 100.0;
        *((float *)&v62 + 3) = (float)(*((float *)&v77 + 3) * v43) / 100.0;
        if ( !*(_BYTE *)(a2 + 45) )
        {
          *(float *)&v62 = (float)(*(float *)&v77 * v43) / 100.0;
          *((float *)&v62 + 1) = (float)(*((float *)&v77 + 1) * (float)v68) / 100.0;
          *((float *)&v62 + 2) = (float)(*((float *)&v77 + 2) * v43) / 100.0;
          *((float *)&v62 + 3) = (float)(*((float *)&v77 + 3) * v43) / 100.0;
          if ( (*(_BYTE *)(a2 + 24) & 2) != 0 )
          {
            v26 = floorf((float)(*(float *)&v77 * (float)v68) / 100.0);
            *(float *)&v62 = v26;
            v27 = o_ceilf_0(v44);
            *((float *)&v62 + 1) = v27;
            v47 = o_ceilf_0(v45);
            *((float *)&v62 + 2) = v47;
            v48 = o_ceilf_0(v46);
            *((float *)&v62 + 3) = v48;
          }
        }
      }
    }
    *a7 = 1;
    wil::AcquireSRWLockExclusive((RTL_SRWLOCK **)&v64, (RTL_SRWLOCK *)(a1 + 800));
    v65[0] = 1;
    *(_WORD *)&v65[1] = 0;
    v65[3] = 0;
    *(_OWORD *)&v65[4] = *(_OWORD *)a2;
    *(_OWORD *)&v65[20] = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&v65[36] = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&v65[52] = *(_OWORD *)(a2 + 48);
    *(_QWORD *)&v65[68] = *(_QWORD *)(a2 + 64);
    v49 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned int,KeyboardHosting::ViewState,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,KeyboardHosting::ViewState>>,0>>::_Try_emplace<unsigned int const &,>(
                       (float *)(a1 + 736),
                       (__int64)v63,
                       &v60);
    *(_OWORD *)(v49 + 20) = *(_OWORD *)v65;
    *(_OWORD *)(v49 + 36) = *(_OWORD *)&v65[16];
    *(_OWORD *)(v49 + 52) = *(_OWORD *)&v65[32];
    *(_OWORD *)(v49 + 68) = *(_OWORD *)&v65[48];
    *(_QWORD *)(v49 + 84) = *(_QWORD *)&v65[64];
    *(_DWORD *)(v49 + 92) = *(_DWORD *)&v65[72];
    CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v64);
    if ( ShouldLoadLastFloatingPosition(a2)
      && (v51 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                             (__int64 **)(a1 + 840),
                             (__int64)&v64,
                             &v60,
                             v50),
          *(float *)(v51 + 32) = v47,
          *(float *)(v51 + 36) = v48,
          KeyboardHosting::TabTipAdapterPolicy::LoadFloatingBottomPositionFromRegistryIfNecessary(
            (KeyboardHosting::TabTipAdapterPolicy *)a1,
            v60,
            v52,
            v53),
          *(_BYTE *)(*(_QWORD *)std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::_Try_emplace<unsigned int const &,>(
                                  (_QWORD *)(a1 + 824),
                                  (__int64)&v64,
                                  &v60)
                   + 40LL)) )
    {
      v63[0] = 0LL;
      KeyboardHosting::TabTipAdapterPolicy::GetFloatingBottomPosition(
        (KeyboardHosting::TabTipAdapterPolicy *)a1,
        (struct Windows::Foundation::Point *)v63,
        v60);
      *(_QWORD *)&v77 = v63[0];
      *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v48), LODWORD(v47));
      v64 = 0LL;
      KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v77, v67, &v64);
      if ( v41 )
      {
        LODWORD(v26) = v64;
        LODWORD(v62) = v64;
      }
      if ( *(_BYTE *)(a2 + 45) )
      {
        v27 = *((float *)&v64 + 1);
        DWORD1(v62) = DWORD1(v64);
      }
    }
    else if ( ShouldSaveLastFloatingPosition(a2) )
    {
      v55 = *(_QWORD *)std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
                         (__int64 **)(a1 + 840),
                         (__int64)&v64,
                         &v60,
                         v54);
      *(float *)(v55 + 32) = v47;
      *(float *)(v55 + 36) = v48;
      v63[0] = __PAIR64__(LODWORD(v27), LODWORD(v26));
      updated = KeyboardHosting::TabTipAdapterPolicy::SaveFloatingBottomPosition(
                  (KeyboardHosting::TabTipAdapterPolicy *)a1,
                  (const struct Windows::Foundation::Point *)v63,
                  v60);
      if ( updated < 0 )
      {
        v10 = 1030LL;
        goto LABEL_6;
      }
    }
    if ( *(_DWORD *)a2 != 2 )
      goto LABEL_69;
    v35 = v60;
    if ( v60 != *(_DWORD *)(a1 + 856) || !*(_BYTE *)(a1 + 820) || !*(_BYTE *)(a2 + 44) && !*(_BYTE *)(a2 + 45) )
    {
      v36 = (_BYTE)v59 == 0;
LABEL_67:
      if ( v36 )
      {
        *(float *)(a1 + 812) = v26;
        *(float *)(a1 + 816) = v27;
        *(_BYTE *)(a1 + 820) = 1;
        *(_DWORD *)(a1 + 856) = v35;
      }
      goto LABEL_69;
    }
  }
  *(_QWORD *)&v62 = *(_QWORD *)(a1 + 812);
LABEL_69:
  v56 = v62;
  *a6 = v62;
  *(_OWORD *)(a1 + 904) = v56;
  return 0LL;
}
