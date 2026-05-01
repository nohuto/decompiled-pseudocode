/*
 * XREFs of ?SetPositionOfExistingView@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAKPEAUtagRECT@@@Z @ 0x1805143D0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180237AD4 (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1802EDB4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180514978 (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x1805149D4 (-TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopPositioner::SetPositionOfExistingView(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  char IsEnabled; // al
  CDesktopPositioner *v10; // rcx
  unsigned int SnapId; // r9d
  LONG v12; // ecx
  float v13; // xmm1_4
  float v14; // xmm0_4
  __int128 v16; // [rsp+20h] [rbp-20h] BYREF

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl) )
  {
    *a4 = 0;
    *a5 = 0LL;
    if ( CDesktopPositioner::ShouldMaximizeWindow((CDesktopPositioner *)((char *)this - 152), a2) )
    {
      *a4 = 2;
      return 0LL;
    }
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl);
    v10 = (CDesktopPositioner *)((char *)this - 152);
    if ( IsEnabled )
    {
      v16 = 0LL;
      if ( !CDesktopPositioner::TryGetSnapRectForAppView(v10, a2, a3, (struct Windows::Foundation::Rect *)&v16) )
        return 0LL;
LABEL_9:
      v12 = (int)*((float *)&v16 + 1);
      v13 = *((float *)&v16 + 2) + *(float *)&v16;
      v14 = *((float *)&v16 + 3) + *((float *)&v16 + 1);
      *a4 = 3;
      a5->left = (int)*(float *)&v16;
      a5->top = v12;
      a5->right = (int)v13;
      a5->bottom = (int)v14;
      return 0LL;
    }
    SnapId = CDesktopPositioner::TryGetSnapId(
               v10,
               (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
               a3);
    if ( SnapId != -1 )
    {
      v16 = 0LL;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 25) + 80LL))(
             *((_QWORD *)this + 25),
             SnapId,
             &v16) >= 0 )
        goto LABEL_9;
    }
  }
  return 0LL;
}
