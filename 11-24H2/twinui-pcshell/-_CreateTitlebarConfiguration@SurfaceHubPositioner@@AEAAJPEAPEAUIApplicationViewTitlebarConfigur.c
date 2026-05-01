/*
 * XREFs of ?_CreateTitlebarConfiguration@SurfaceHubPositioner@@AEAAJPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804EF80C
 * Callers:
 *     ?GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x1804EF360 (-GetChromeConfigurationForView@SurfaceHubPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIAppl.c)
 *     ?_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804F01B8 (-_SetDefaultLayout@SurfaceHubPositioner@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B330 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewTitlebarConfiguration@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18006C718 (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationVie.c)
 *     ?SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z @ 0x18006CBD0 (-SetVisibleButtons@ApplicationViewTitlebarConfiguration@@UEAAJW4TITLE_BAR_BUTTONS@@0@Z.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18006E7E4 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 */

__int64 __fastcall SurfaceHubPositioner::_CreateTitlebarConfiguration(
        SurfaceHubPositioner *this,
        struct IApplicationViewTitlebarConfiguration **a2)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // r9
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  SurfaceHubPositioner *v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = this;
  *a2 = 0LL;
  Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(&v10);
  v3 = (__int64)v10;
  if ( v10 )
  {
    *((_WORD *)v10 + 24) = 257;
    v7 = ApplicationViewTitlebarConfiguration::SetVisibleButtons(v3, 55, 0);
    v4 = v7;
    if ( v7 >= 0 )
    {
      *(_DWORD *)(v3 + 72) = 0;
      *(_DWORD *)(v3 + 68) = 255;
      *(_DWORD *)(v3 + 56) = 0;
      *(_DWORD *)(v3 + 52) = 1;
      *(_DWORD *)(v3 + 76) = 1;
      *(_DWORD *)(v3 + 80) = 0;
      *(_BYTE *)(v3 + 84) = 1;
      *(_DWORD *)(v3 + 88) = 0;
      v7 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewTitlebarConfiguration,Microsoft::WRL::FtmBase>>(
             v3,
             &GUID_47dcddaf_0882_4312_b34f_a5ee46048bd6,
             a2);
      v4 = v7;
      if ( v7 >= 0 )
      {
        v4 = 0;
        goto LABEL_10;
      }
      v5 = 635LL;
    }
    else
    {
      v5 = 629LL;
    }
    v6 = (unsigned int)v7;
  }
  else
  {
    v4 = -2147024882;
    v5 = 625LL;
    v6 = 2147942414LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v5,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\surfacehubpositioner.cpp",
    (const char *)v6);
LABEL_10:
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease((__int64 *)&v10);
  return v4;
}
