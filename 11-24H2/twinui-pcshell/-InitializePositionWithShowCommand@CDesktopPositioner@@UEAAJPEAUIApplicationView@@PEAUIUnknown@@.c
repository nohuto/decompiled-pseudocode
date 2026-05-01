/*
 * XREFs of ?InitializePositionWithShowCommand@CDesktopPositioner@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@PEAKPEAUtagRECT@@@Z @ 0x180512F00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x18006EDDC (-InitializePositionHelper@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIUnknown@@PEAUIPres.c)
 *     ?TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180237AD4 (-TryGetSnapId@CDesktopPositioner@@AEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1802EDB4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     ?ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z @ 0x180514978 (-ShouldMaximizeWindow@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@@Z.c)
 *     ?TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect@Foundation@Windows@@@Z @ 0x1805149D4 (-TryGetSnapRectForAppView@CDesktopPositioner@@AEAA_NPEAUIApplicationView@@PEAUIUnknown@@PEAURect.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDesktopPositioner::InitializePositionWithShowCommand(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct IUnknown *a3,
        struct IPresentationRequestedArgs *a4,
        unsigned int *a5,
        struct tagRECT *a6)
{
  CDesktopPositioner *v10; // rsi
  LONG v11; // ecx
  float v12; // xmm1_4
  float v13; // xmm0_4
  unsigned int SnapId; // r9d
  LONG v15; // r10d
  int v16; // eax
  unsigned int v17; // ebx
  __int128 v19; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+40h]

  *a5 = 0;
  *a6 = 0LL;
  v10 = (CDesktopPositioner *)((char *)this - 144);
  if ( CDesktopPositioner::ShouldMaximizeWindow((CDesktopPositioner *)((char *)this - 144), a2) )
  {
    *a5 = 2;
    goto LABEL_10;
  }
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl) )
  {
    v19 = 0LL;
    if ( !CDesktopPositioner::TryGetSnapRectForAppView(v10, a2, a3, (struct Windows::Foundation::Rect *)&v19) )
      goto LABEL_10;
    *a5 = 3;
    v11 = (int)*((float *)&v19 + 1);
    v12 = *((float *)&v19 + 2) + *(float *)&v19;
    v13 = *((float *)&v19 + 3) + *((float *)&v19 + 1);
    a6->left = (int)*(float *)&v19;
    a6->top = v11;
  }
  else
  {
    SnapId = CDesktopPositioner::TryGetSnapId(
               v10,
               (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))a2,
               a3);
    if ( SnapId == -1 )
      goto LABEL_10;
    v19 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, __int128 *))(**((_QWORD **)this + 26) + 80LL))(
           *((_QWORD *)this + 26),
           SnapId,
           &v19) < 0 )
      goto LABEL_10;
    *a5 = 3;
    v15 = (int)*((float *)&v19 + 1);
    v12 = *((float *)&v19 + 2) + *(float *)&v19;
    v13 = *((float *)&v19 + 3) + *((float *)&v19 + 1);
    a6->left = (int)*(float *)&v19;
    a6->top = v15;
  }
  a6->right = (int)v12;
  a6->bottom = (int)v13;
LABEL_10:
  v16 = CDesktopPositioner::InitializePositionHelper(v10, a2, a3, a4);
  v17 = v16;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x45A,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)v16);
  return v17;
}
