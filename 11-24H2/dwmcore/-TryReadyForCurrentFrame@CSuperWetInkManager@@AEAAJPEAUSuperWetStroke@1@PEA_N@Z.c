/*
 * XREFs of ?TryReadyForCurrentFrame@CSuperWetInkManager@@AEAAJPEAUSuperWetStroke@1@PEA_N@Z @ 0x1802189A4
 * Callers:
 *     ?ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018EA60 (-ScheduleScribblesForRenderTarget@CSuperWetInkManager@@QEAAJPEAVIMonitorTarget@@AEBV-$TMilRect@I.c)
 *     ?TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingContext@@_NPEA_N@Z @ 0x18018EF14 (-TryRegisterSuperWetForDrawLocal@CSuperWetInkManager@@AEAAJPEAVCSuperWetSource@@PEAVCDrawingCont.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001DF0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ @ 0x1801C4700 (-DeactivateCurrentSource@CSuperWetInkManager@@AEAAXXZ.c)
 *     ?CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z @ 0x180218A88 (-CheckLocalComputeScribbleSupport@CSuperWetInkManager@@AEAAJAEBUSuperWetStroke@1@PEA_N@Z.c)
 *     ?EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z @ 0x180218BB0 (-EnsureLocalSuperWetResources@CSuperWetInkManager@@AEAAJPEAVIMonitorTarget@@PEA_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@QEAA_NXZ @ 0x180245E8C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DWMInkDeviceLost@@@details@wil@@Q.c)
 */

__int64 __fastcall CSuperWetInkManager::TryReadyForCurrentFrame(
        CSuperWetInkManager *this,
        struct CSuperWetInkManager::SuperWetStroke *a2,
        bool *a3)
{
  int v6; // ebx
  __int64 v7; // rdx
  char IsEnabled; // al
  CSuperWetInkManager *v10; // rcx
  struct IMonitorTarget *v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  bool v13; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0;
  v13 = 0;
  v6 = CSuperWetInkManager::CheckLocalComputeScribbleSupport(this, a2, &v13);
  if ( v6 < 0 )
  {
    v7 = 541LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\globalsuperwetinkmanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( v13 )
  {
    v13 = 0;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_DWMInkDeviceLost>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DWMInkDeviceLost>::GetImpl'::`2'::impl);
    v11 = (struct IMonitorTarget *)*((_QWORD *)a2 + 1);
    if ( IsEnabled )
    {
      v6 = CSuperWetInkManager::EnsureLocalSuperWetResources(v10, v11, &v13);
      if ( v6 == -2005270523 )
      {
        CSuperWetInkManager::s_lostDevice = 1;
LABEL_10:
        v7 = 561LL;
        goto LABEL_3;
      }
      if ( v6 < 0 )
        goto LABEL_10;
    }
    else
    {
      v6 = CSuperWetInkManager::EnsureLocalSuperWetResources(v10, v11, &v13);
      if ( v6 < 0 )
      {
        v7 = 567LL;
        goto LABEL_3;
      }
    }
    if ( v13 )
    {
      *((_BYTE *)a2 + 96) = 1;
      *a3 = 1;
    }
    return 0LL;
  }
  CSuperWetInkManager::DeactivateCurrentSource(this);
  return 0LL;
}
