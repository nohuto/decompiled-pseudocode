/*
 * XREFs of ?CreateTitlebarConfiguration@FullScreenPositionerHelpers@@YAJPEAUIApplicationView@@_NPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180325F34
 * Callers:
 *     ?GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x180324740 (-GetChromeConfigurationForView@FullScreenPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@Z @ 0x180324FB0 (-PositionView@FullScreenPositioner@@AEAAXPEAUIApplicationView@@W4PositionViewShowOperation@1@_N@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B330 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006C718 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationVie.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x18006CBD0 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18006E7E4 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     ?IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800704E8 (-IsFullScreenCompatQuirkedApp@FullScreenPositionerHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall FullScreenPositionerHelpers::CreateTitlebarConfiguration(
        int (__fastcall ***this)(FullScreenPositionerHelpers *, GUID *, __int64 *),
        struct IApplicationView *a2,
        _QWORD *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  int v5; // ebp
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // esi
  int v12; // eax
  struct IApplicationView *v13; // rdx
  bool IsFullScreenCompatQuirkedApp; // al
  BOOL v15; // ecx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+50h] [rbp+18h] BYREF

  v5 = (unsigned __int8)a2;
  *a3 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v18);
  v7 = v18;
  if ( v18 )
  {
    *(_WORD *)(v18 + 48) = 1;
    *(_DWORD *)(v7 + 52) = 1;
    *(_DWORD *)(v7 + 56) = 1;
    *(_DWORD *)(v7 + 88) = 0;
    *(_DWORD *)(v7 + 68) = 255;
    *(_DWORD *)(v7 + 72) = 0;
    v11 = v5 ^ 1;
    v12 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v7, 55, (v5 ^ 1u) + 36);
    v8 = v12;
    if ( v12 >= 0 )
    {
      *(_DWORD *)(v7 + 76) = 32 * (v11 + 2);
      IsFullScreenCompatQuirkedApp = FullScreenPositionerHelpers::IsFullScreenCompatQuirkedApp(this, v13);
      v15 = (_BYTE)v5 && !IsFullScreenCompatQuirkedApp;
      *(_DWORD *)(v7 + 80) = v15;
      *(_BYTE *)(v7 + 84) = 1;
      if ( IsFullScreenCompatQuirkedApp
        && (v12 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v7, 51, v11), v8 = v12, v12 < 0) )
      {
        v10 = 98LL;
      }
      else
      {
        v12 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>>(
                v7,
                &GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6,
                a3);
        v8 = v12;
        if ( v12 >= 0 )
        {
          v8 = 0;
          goto LABEL_17;
        }
        v10 = 101LL;
      }
    }
    else
    {
      v10 = 80LL;
    }
    v9 = (unsigned int)v12;
  }
  else
  {
    v8 = -2147024882;
    v9 = 2147942414LL;
    v10 = 68LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\fullscreen\\lib\\fullscreenpositionerhelpers.cpp",
    (const char *)v9);
LABEL_17:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(&v18);
  return v8;
}
