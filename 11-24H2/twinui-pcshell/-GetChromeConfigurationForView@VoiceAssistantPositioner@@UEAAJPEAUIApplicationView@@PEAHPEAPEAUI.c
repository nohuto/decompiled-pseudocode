/*
 * XREFs of ?GetChromeConfigurationForView@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18050B5C0
 * Callers:
 *     ?GetChromeConfigurationForView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAUIApplicationViewTitlebarConfiguration@@@Z @ 0x18050B6A0 (-GetChromeConfigurationForView@VoiceAssistantPositioner@@W7EAAJPEAUIApplicationView@@PEAHPEAPEAU.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B330 (-InternalRelease@-$ComPtr@VApplicationViewTitlebarConfiguration@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewTitlebarConfiguration@@@12@XZ @ 0x18006E7E4 (--$Make@VApplicationViewTitlebarConfiguration@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplica.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall VoiceAssistantPositioner::GetChromeConfigurationForView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        int *a3,
        struct IApplicationViewTitlebarConfiguration **a4)
{
  __int64 *v5; // rax
  struct IApplicationViewTitlebarConfiguration *v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 v12[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IApplicationViewTitlebarConfiguration *v14; // [rsp+50h] [rbp+18h] BYREF

  *a3 = 0;
  v5 = Microsoft::WRL::Details::Make<ApplicationViewTitlebarConfiguration,>(v12);
  v14 = (struct IApplicationViewTitlebarConfiguration *)*v5;
  v6 = v14;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewTitlebarConfiguration>::InternalRelease(v12);
  if ( v6 )
  {
    v10 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, __int64, __int64))(*(_QWORD *)v6 + 40LL))(
            v6,
            1LL,
            1LL);
    v7 = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(struct IApplicationViewTitlebarConfiguration *, _QWORD))(*(_QWORD *)v6 + 24LL))(
              v6,
              0LL);
      v7 = v10;
      if ( v10 >= 0 )
      {
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v14);
        *a4 = v6;
        v7 = 0;
        goto LABEL_10;
      }
      v9 = 287LL;
    }
    else
    {
      v9 = 286LL;
    }
    v8 = (unsigned int)v10;
  }
  else
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 285LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v8);
LABEL_10:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v14);
  return v7;
}
