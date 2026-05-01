/*
 * XREFs of ?GetViewRectFromPositionAndSizeRequest@ViewRectProvider@KeyboardHosting@@UEAAJAEAURect@Foundation@Windows@@00UCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@5@W4CoreKeyboardEditControlLineType@789UI@5@_NPEAU345@PEA_N5@Z @ 0x180256970
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180255CA0 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E17F4 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRefl.c)
 *     ?PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA?AURect@Foundation@Windows@@AEBU345@W4DEVICE_SCALE_FACTOR@@@Z @ 0x18013C248 (-PhysicalRectToRelative@ScalingHelper@KeyboardHosting@@SA-AURect@Foundation@Windows@@AEBU345@W4D.c)
 *     ?GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@11_NPEAU9Foundation@8@PEA_N4@Z @ 0x18013D27C (-GetViewRectNearCaret@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Cor.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x18013D890 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z @ 0x1801D9404 (-IsRectNull@KeyboardHosting@@YA_NAEBUtagRECT@@@Z.c)
 *     ?GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA?AURect@Foundation@Windows@@XZ @ 0x180254D18 (-GetScaledCeiledMonitorRect@MonitorInformation@KeyboardHosting@@QEBA-AURect@Foundation@Windows@@.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details@wil@@QEAA_NXZ @ 0x18047A5A8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RacyAccessInMonitorInfo@@@details.c)
 *     ?GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@1PEAU9Foundation@8@PEA_N3@Z @ 0x180483F5C (-GetViewRectNearFocusedElement@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRe.c)
 *     ?GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@URect@Foundation@8@PEAU9Foundation@8@@Z @ 0x18048417C (-GetViewRectRelativeToInside@ViewRectHelper@KeyboardHosting@@SAJUCoreKeyboardPositionAndSizeRequ.c)
 *     ??$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@SAXAEAPEBGAEAM111AEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1804884F4 (--$TextSelectionBoundingFetched@AEAPEBGAEAMAEAMAEAMAEAMAEAW4DEVICE_SCALE_FACTOR@@@FocusedElement.c)
 *     std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___ @ 0x1804885FC (std--call_once__lambda_51403b28e8b81be276cead8d023ce32d___.c)
 *     ??1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x18048869C (--1FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     GetWorkAreaRect @ 0x1804886C8 (GetWorkAreaRect.c)
 *     GetWorkAreaRect_0 @ 0x1804887D8 (GetWorkAreaRect_0.c)
 *     ?IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z @ 0x1804888C0 (-IsViewOccludingCaret@ViewRectProvider@KeyboardHosting@@AEAA_NAEAURect@Foundation@Windows@@0@Z.c)
 *     ?StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1804889BC (-StartActivity@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Foundation@Windows@@_N1@Z @ 0x180488A60 (-Stop@FocusedElementViewRectCalculation@TouchKeyboardExperienceTelemetryLogger@@QEAAXAEBURect@Fo.c)
 *     ?GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18048BD18 (-GetBoundRectForCursorPos@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z @ 0x18048BD84 (-GetBoundingRectForSelectedText@UIAutomationHelpers@KeyboardHosting@@QEAAJPEAUtagRECT@@@Z.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18048CB74 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1 #try_helpers=1
__int64 __fastcall KeyboardHosting::ViewRectProvider::GetViewRectFromPositionAndSizeRequest(
        __int64 a1,
        const struct Windows::Foundation::Rect *a2,
        KeyboardHosting *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        float *a8,
        bool *a9,
        char *a10)
{
  float v13; // xmm8_4
  float v14; // xmm7_4
  char v15; // si
  float v16; // xmm9_4
  float v17; // xmm10_4
  __m128i *v18; // r8
  __m128i *v19; // r9
  __m128 v20; // xmm0
  const __m128i *v21; // rbx
  float *v22; // rax
  const struct Windows::Foundation::Rect *v23; // rdx
  char v24; // dl
  const __m128i *v25; // rbx
  __m128i v26; // xmm2
  int ViewRectNearCaret; // eax
  unsigned int v28; // ebx
  const struct tagRECT *v30; // rdx
  KeyboardHosting::UIAutomationHelpers *v31; // rcx
  int BoundRectForCursorPos; // eax
  const wchar_t *v33; // rcx
  __m128i v34; // xmm6
  char IsEnabled; // al
  int v36; // r8d
  bool v37; // zf
  __int64 v38; // rax
  const struct Windows::Foundation::Rect *v39; // rdx
  char v40; // al
  int ViewRectNearFocusedElement; // eax
  unsigned int v42; // ebx
  int v43; // eax
  unsigned int v44; // ebx
  KeyboardHosting::ViewRectProvider *v45; // rcx
  int v46; // r14d
  __int64 v47; // rdx
  const __m128i *v48; // rbx
  __m128i v49; // xmm2
  int ViewRectRelativeToInside; // ebx
  __int64 v51; // rdx
  KeyboardHosting::ViewRectProvider *v52; // rcx
  const __m128i *v53; // rbx
  struct tagRECT v54; // xmm2
  const __m128i *v55; // rbx
  struct tagRECT v56; // xmm2
  char v57; // r14
  __int64 v58; // rdx
  __m128i *v59; // rbx
  __int64 v60; // rdx
  __m128i *ScaledCeiledMonitorRect; // rax
  bool IsRectNull; // [rsp+40h] [rbp-2A8h]
  __m128i v63; // [rsp+50h] [rbp-298h] BYREF
  __int128 v64; // [rsp+60h] [rbp-288h] BYREF
  __int128 v65; // [rsp+70h] [rbp-278h]
  __int128 v66; // [rsp+80h] [rbp-268h]
  __int128 v67; // [rsp+90h] [rbp-258h]
  __int64 v68; // [rsp+A0h] [rbp-248h]
  float *v69; // [rsp+B0h] [rbp-238h]
  __m128i v70; // [rsp+C0h] [rbp-228h] BYREF
  __int128 v71; // [rsp+D0h] [rbp-218h] BYREF
  struct tagRECT v72; // [rsp+E0h] [rbp-208h] BYREF
  __m128i v73; // [rsp+F0h] [rbp-1F8h] BYREF
  _QWORD v74[42]; // [rsp+100h] [rbp-1E8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2E8h] [rbp+0h]

  v69 = a8;
  v63.m128i_i64[0] = (__int64)a10;
  v13 = (float)*(int *)(a5 + 8);
  v14 = (float)*(int *)(a5 + 4);
  *(_QWORD *)a8 = 0LL;
  a8[2] = v13;
  a8[3] = v14;
  *a9 = 0;
  *a10 = 0;
  if ( *(_BYTE *)(a5 + 44) || (v15 = 0, *(_BYTE *)(a5 + 45)) )
    v15 = 1;
  *(_QWORD *)&v71 = 0LL;
  v16 = *(float *)(a5 + 64);
  *((float *)&v71 + 2) = v16;
  v17 = *(float *)(a5 + 68);
  *((float *)&v71 + 3) = v17;
  IsRectNull = KeyboardHosting::IsRectNull((KeyboardHosting *)(a5 + 56), a2);
  if ( IsRectNull )
    *((_QWORD *)&v71 + 1) = __PAIR64__(LODWORD(v14), LODWORD(v13));
  if ( *(_DWORD *)a5 == 1 )
  {
    v57 = *(_BYTE *)(a5 + 47);
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    {
      if ( v57 )
      {
        v58 = a1 + 520;
        if ( !v15 )
          v58 = a1 + 680;
        v73 = *(__m128i *)GetWorkAreaRect_0(&v73, v58);
        v64 = *(_OWORD *)a5;
        v65 = *(_OWORD *)(a5 + 16);
        v66 = *(_OWORD *)(a5 + 32);
        v67 = *(_OWORD *)(a5 + 48);
        v68 = *(_QWORD *)(a5 + 64);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v64, &v73, &v71);
        if ( ViewRectRelativeToInside < 0 )
        {
          v51 = 85LL;
          goto LABEL_90;
        }
      }
      else
      {
        if ( v15 )
          v59 = (__m128i *)(a1 + 548);
        else
          v59 = (__m128i *)(a1 + 740);
        v73 = *v59;
        v64 = *(_OWORD *)a5;
        v65 = *(_OWORD *)(a5 + 16);
        v66 = *(_OWORD *)(a5 + 32);
        v67 = *(_OWORD *)(a5 + 48);
        v68 = *(_QWORD *)(a5 + 64);
        ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v64, &v73, &v71);
        if ( ViewRectRelativeToInside < 0 )
        {
          v51 = 90LL;
          goto LABEL_90;
        }
      }
    }
    else if ( v57 )
    {
      v60 = a1 + 16;
      if ( !v15 )
        v60 = a1 + 352;
      v73 = *(__m128i *)GetWorkAreaRect(&v73, v60);
      v64 = *(_OWORD *)a5;
      v65 = *(_OWORD *)(a5 + 16);
      v66 = *(_OWORD *)(a5 + 32);
      v67 = *(_OWORD *)(a5 + 48);
      v68 = *(_QWORD *)(a5 + 64);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v64, &v73, &v71);
      if ( ViewRectRelativeToInside < 0 )
      {
        v51 = 98LL;
        goto LABEL_90;
      }
    }
    else
    {
      if ( v15 )
      {
        v73 = *(__m128i *)(a1 + 24);
        ScaledCeiledMonitorRect = &v73;
      }
      else
      {
        ScaledCeiledMonitorRect = (__m128i *)KeyboardHosting::MonitorInformation::GetScaledCeiledMonitorRect(
                                               a1 + 352,
                                               &v73);
      }
      v73 = *ScaledCeiledMonitorRect;
      v64 = *(_OWORD *)a5;
      v65 = *(_OWORD *)(a5 + 16);
      v66 = *(_OWORD *)(a5 + 32);
      v67 = *(_OWORD *)(a5 + 48);
      v68 = *(_QWORD *)(a5 + 64);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v64, &v73, &v71);
      if ( ViewRectRelativeToInside < 0 )
      {
        v51 = 103LL;
        goto LABEL_90;
      }
    }
  }
  else if ( *(_DWORD *)a5 == 2 )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
    {
      if ( v15 )
        v55 = (const __m128i *)(a1 + 548);
      else
        v55 = (const __m128i *)(a1 + 708);
    }
    else if ( v15 )
    {
      v55 = (const __m128i *)(a1 + 24);
    }
    else
    {
      v55 = (const __m128i *)(a1 + 360);
    }
    v56 = (struct tagRECT)_mm_loadu_si128(v55);
    v73 = *(__m128i *)a3;
    v70 = *(__m128i *)a2;
    v72 = v56;
    v64 = *(_OWORD *)a5;
    v65 = *(_OWORD *)(a5 + 16);
    v66 = *(_OWORD *)(a5 + 32);
    v67 = *(_OWORD *)(a5 + 48);
    v68 = *(_QWORD *)(a5 + 64);
    ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                 &v64,
                                 (const struct Windows::Foundation::Rect *)&v72,
                                 (float *)v70.m128i_i32,
                                 (float *)v73.m128i_i32,
                                 a7,
                                 (__int64)&v71,
                                 a9,
                                 a10);
    if ( ViewRectRelativeToInside < 0 )
    {
      v51 = 119LL;
      goto LABEL_90;
    }
  }
  else if ( *(_DWORD *)a5 == 3 )
  {
    v73 = *v18;
    v64 = *(_OWORD *)a5;
    v65 = *(_OWORD *)(a5 + 16);
    v66 = *(_OWORD *)(a5 + 32);
    v67 = *(_OWORD *)(a5 + 48);
    v68 = *(_QWORD *)(a5 + 64);
    v46 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v64, &v73, &v71);
    if ( v46 < 0 )
    {
      v47 = 134LL;
      goto LABEL_64;
    }
    if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v52, (struct Windows::Foundation::Rect *)&v71, a2) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
        v53 = (const __m128i *)(v15 ? a1 + 628 : a1 + 708);
      else
        v53 = (const __m128i *)(v15 ? a1 + 192 : a1 + 360);
      v54 = (struct tagRECT)_mm_loadu_si128(v53);
      v73 = *(__m128i *)a3;
      v70 = *(__m128i *)a2;
      v72 = v54;
      v64 = *(_OWORD *)a5;
      v65 = *(_OWORD *)(a5 + 16);
      v66 = *(_OWORD *)(a5 + 32);
      v67 = *(_OWORD *)(a5 + 48);
      v68 = *(_QWORD *)(a5 + 64);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                   &v64,
                                   (const struct Windows::Foundation::Rect *)&v72,
                                   (float *)v70.m128i_i32,
                                   (float *)v73.m128i_i32,
                                   a7,
                                   (__int64)&v71,
                                   a9,
                                   (char *)v63.m128i_i64[0]);
      if ( ViewRectRelativeToInside < 0 )
      {
        v51 = 148LL;
        goto LABEL_90;
      }
    }
  }
  else
  {
    if ( *(_DWORD *)a5 != 5 )
    {
      if ( *(_DWORD *)a5 == 6 )
      {
        v63.m128i_i64[0] = a1;
        std::call_once__lambda_51403b28e8b81be276cead8d023ce32d___(a1 + 776, &v63);
        LOBYTE(v23) = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*(KeyboardHosting::UIAutomationHelpers **)(a1 + 760));
        if ( KeyboardHosting::IsRectNull(a3, v23) || v24 )
        {
          wil::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,1,70368744177664,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
            (__int64)v74,
            (__int64)"FocusedElementViewRectCalculation");
          v74[0] = &TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::`vftable';
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::StartActivity((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v74);
          v72 = 0LL;
          if ( KeyboardHosting::UIAutomationHelpers::GetBoundingRectForSelectedText(
                 *(KeyboardHosting::UIAutomationHelpers **)(a1 + 760),
                 &v72) < 0 )
          {
            BoundRectForCursorPos = KeyboardHosting::UIAutomationHelpers::GetBoundRectForCursorPos(v31, &v72);
            v33 = L"CurrentMousePosition";
            if ( BoundRectForCursorPos < 0 )
              v33 = L"InputAppDefault";
            v63.m128i_i64[0] = (__int64)v33;
          }
          else
          {
            v63.m128i_i64[0] = (__int64)L"UIA";
          }
          v34 = 0LL;
          v70 = 0LL;
          if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v72, v30) )
          {
            IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
            *(float *)v70.m128i_i32 = (float)v72.left;
            *(float *)&v70.m128i_i32[1] = (float)v72.top;
            if ( IsEnabled )
              v36 = *(_DWORD *)(a1 + 688);
            else
              v36 = *(_DWORD *)(a1 + 392);
            *(float *)&v70.m128i_i32[2] = (float)(v72.right - v72.left);
            *(float *)&v70.m128i_i32[3] = (float)(v72.bottom - v72.top);
            v34 = _mm_loadu_si128((const __m128i *)KeyboardHosting::ScalingHelper::PhysicalRectToRelative(
                                                     (float *)v73.m128i_i32,
                                                     (float *)v70.m128i_i32,
                                                     v36));
            v70 = v34;
          }
          v37 = (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) == 0;
          v38 = a1 + 688;
          if ( v37 )
            v38 = a1 + 392;
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::TextSelectionBoundingFetched<unsigned short const * &,float &,float &,float &,float &,enum DEVICE_SCALE_FACTOR &>(
            (unsigned int)&v63,
            (unsigned int)&v70,
            (unsigned int)&v70.m128i_u32[1],
            (unsigned int)&v70.m128i_u32[2],
            (__int64)&v70.m128i_i64[1] + 4,
            v38);
          if ( !KeyboardHosting::IsRectNull((KeyboardHosting *)&v70, v39) )
          {
            v40 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl);
            v70 = v34;
            v64 = *(_OWORD *)a5;
            v66 = *(_OWORD *)(a5 + 32);
            v68 = *(_QWORD *)(a5 + 64);
            if ( v40 )
            {
              v63 = *(__m128i *)(a1 + 708);
              v65 = *(_OWORD *)(a5 + 16);
              v67 = *(_OWORD *)(a5 + 48);
              ViewRectNearFocusedElement = KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(
                                             &v64,
                                             &v63,
                                             &v70,
                                             &v71,
                                             a9,
                                             a10);
              v42 = ViewRectNearFocusedElement;
              if ( ViewRectNearFocusedElement < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x106,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                  (const char *)(unsigned int)ViewRectNearFocusedElement);
                TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v74);
                return v42;
              }
            }
            else
            {
              v63 = *(__m128i *)(a1 + 360);
              v65 = *(_OWORD *)(a5 + 16);
              v67 = *(_OWORD *)(a5 + 48);
              v43 = KeyboardHosting::ViewRectHelper::GetViewRectNearFocusedElement(&v64, &v63, &v70, &v71, a9, a10);
              v44 = v43;
              if ( v43 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x10B,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
                  (const char *)(unsigned int)v43);
                TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v74);
                return v44;
              }
            }
          }
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::Stop(
            (TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v74,
            (const struct Windows::Foundation::Rect *)&v71,
            *a9,
            *a10);
          TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation::~FocusedElementViewRectCalculation((TouchKeyboardExperienceTelemetryLogger::FocusedElementViewRectCalculation *)v74);
        }
        else
        {
          if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
          {
            if ( v15 )
              v25 = (const __m128i *)(a1 + 548);
            else
              v25 = (const __m128i *)(a1 + 708);
          }
          else if ( v15 )
          {
            v25 = (const __m128i *)(a1 + 24);
          }
          else
          {
            v25 = (const __m128i *)(a1 + 360);
          }
          v26 = _mm_loadu_si128(v25);
          v70 = *(__m128i *)a3;
          v72 = *(struct tagRECT *)a2;
          v63 = v26;
          v64 = *(_OWORD *)a5;
          v65 = *(_OWORD *)(a5 + 16);
          v66 = *(_OWORD *)(a5 + 32);
          v67 = *(_OWORD *)(a5 + 48);
          v68 = *(_QWORD *)(a5 + 64);
          ViewRectNearCaret = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                &v64,
                                (const struct Windows::Foundation::Rect *)&v63,
                                (float *)&v72.left,
                                (float *)v70.m128i_i32,
                                a7,
                                (__int64)&v71,
                                a9,
                                a10);
          v28 = ViewRectNearCaret;
          if ( ViewRectNearCaret < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xC6,
              (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
              (const char *)(unsigned int)ViewRectNearCaret);
            return v28;
          }
        }
      }
      else
      {
        if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
        {
          v20 = (__m128)_mm_loadu_si128((const __m128i *)((-(__int64)(v15 != 0) & 0xFFFFFFFFFFFFFF60uLL) + a1 + 708));
        }
        else
        {
          if ( v15 )
            v21 = (const __m128i *)(a1 + 24);
          else
            v21 = (const __m128i *)(a1 + 360);
          v20 = (__m128)_mm_loadu_si128(v21);
        }
        LODWORD(v71) = v20.m128_i32[0];
        *((float *)&v71 + 1) = (float)((float)(_mm_shuffle_ps(v20, v20, 255).m128_f32[0]
                                             + _mm_shuffle_ps(v20, v20, 85).m128_f32[0])
                                     - v14)
                             - (float)*(int *)(a5 + 16);
      }
      goto LABEL_18;
    }
    v70 = *v19;
    v64 = *(_OWORD *)a5;
    v65 = *(_OWORD *)(a5 + 16);
    v66 = *(_OWORD *)(a5 + 32);
    v67 = *(_OWORD *)(a5 + 48);
    v68 = *(_QWORD *)(a5 + 64);
    v46 = KeyboardHosting::ViewRectHelper::GetViewRectRelativeToInside(&v64, &v70, &v71);
    if ( v46 < 0 )
    {
      v47 = 154LL;
LABEL_64:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v47,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
        (const char *)(unsigned int)v46);
      return (unsigned int)v46;
    }
    if ( KeyboardHosting::ViewRectProvider::IsViewOccludingCaret(v45, (struct Windows::Foundation::Rect *)&v71, a2) )
    {
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RacyAccessInMonitorInfo>::GetImpl'::`2'::impl) )
        v48 = (const __m128i *)(v15 ? a1 + 548 : a1 + 708);
      else
        v48 = (const __m128i *)(v15 ? a1 + 24 : a1 + 360);
      v49 = _mm_loadu_si128(v48);
      v70 = *(__m128i *)a3;
      v72 = *(struct tagRECT *)a2;
      v73 = v49;
      v64 = *(_OWORD *)a5;
      v65 = *(_OWORD *)(a5 + 16);
      v66 = *(_OWORD *)(a5 + 32);
      v67 = *(_OWORD *)(a5 + 48);
      v68 = *(_QWORD *)(a5 + 64);
      ViewRectRelativeToInside = KeyboardHosting::ViewRectHelper::GetViewRectNearCaret(
                                   &v64,
                                   (const struct Windows::Foundation::Rect *)&v73,
                                   (float *)&v72.left,
                                   (float *)v70.m128i_i32,
                                   a7,
                                   (__int64)&v71,
                                   a9,
                                   (char *)v63.m128i_i64[0]);
      if ( ViewRectRelativeToInside < 0 )
      {
        v51 = 167LL;
LABEL_90:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v51,
          (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\viewrectprovider.cpp",
          (const char *)(unsigned int)ViewRectRelativeToInside);
        return (unsigned int)ViewRectRelativeToInside;
      }
    }
  }
LABEL_18:
  v22 = v69;
  if ( IsRectNull )
  {
    *(_OWORD *)v69 = v71;
  }
  else
  {
    *v69 = *(float *)&v71 - *(float *)(a5 + 56);
    v22[1] = *((float *)&v71 + 1) - *(float *)(a5 + 60);
    v22[2] = (float)(v13 - v16) + *((float *)&v71 + 2);
    v22[3] = (float)(v14 - v17) + *((float *)&v71 + 3);
  }
  return 0LL;
}
