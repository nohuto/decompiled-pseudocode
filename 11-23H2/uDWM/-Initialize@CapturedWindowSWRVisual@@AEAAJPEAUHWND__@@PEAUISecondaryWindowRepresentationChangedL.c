/*
 * XREFs of ?Initialize@CapturedWindowSWRVisual@@AEAAJPEAUHWND__@@PEAUISecondaryWindowRepresentationChangedListener@@@Z @ 0x1800D0440
 * Callers:
 *     ?Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z @ 0x1800CFDCC (-Create@CapturedWindowSWRVisual@@SAJPEAUHWND__@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180033B10 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z @ 0x18004CE14 (-GetSyncedWindowDataByHwnd@CWindowList@@QEAAJPEAUHWND__@@PEAPEAVCWindowData@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@QEAA_NXZ @ 0x180065734 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViol.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CapturedWindowSWRVisual::Initialize(
        CapturedWindowSWRVisual *this,
        HWND a2,
        struct ISecondaryWindowRepresentationChangedListener *a3)
{
  int SyncedWindowDataByHwnd; // ebx
  __int64 v6; // rdx
  char IsEnabled; // al
  struct CWindowData *v9; // rbx
  CBaseObject **v10; // rdi
  void *v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CWindowData *v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = 0LL;
  SyncedWindowDataByHwnd = CWindowList::GetSyncedWindowDataByHwnd(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                             a2,
                             &v13);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1760LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"clientcore\\windows\\dwm\\udwm\\projectionbordermanager.cpp",
      (const char *)(unsigned int)SyncedWindowDataByHwnd);
    return (unsigned int)SyncedWindowDataByHwnd;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::GetImpl'::`2'::impl);
  v9 = v13;
  if ( IsEnabled && !v13 )
    return 2147942487LL;
  v10 = (CBaseObject **)((char *)this + 24);
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(v10);
  LODWORD(v11) = 100;
  SyncedWindowDataByHwnd = CSecondaryWindowRepresentation::Create(160LL, (__int64)a3, (__int64)v9, 0, v11, v10);
  if ( SyncedWindowDataByHwnd < 0 )
  {
    v6 = 1776LL;
    goto LABEL_3;
  }
  if ( !*((_QWORD *)*v10 + 6) )
    return 2147942487LL;
  *((_BYTE *)*v10 + 416) = 1;
  return 0LL;
}
