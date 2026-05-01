/*
 * XREFs of ?SetViewStateForDesiredAppState@VoiceAssistantPositioner@@UEAAJPEAUIApplicationView@@W4APPLICATION_DESIRED_STATE@@@Z @ 0x18050CE20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DEB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18006E190 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180191370 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ?CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSHER_INPUT@@W4APPCRUSHER_SOURCE@@W4APPCRUSHER_CLOSE_OPTIONS@@@Z @ 0x18067F1A8 (-CloseView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAUIImmersiveAppCrusher@@W4APPCRUSH.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall VoiceAssistantPositioner::SetViewStateForDesiredAppState(__int64 a1, __int64 a2, unsigned int a3)
{
  IUnknown **v5; // rax
  unsigned int v6; // ebx
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ebx
  __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  __int64 v15[3]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  void *ppvOut; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 != 2 )
  {
    if ( a3 > 1 )
    {
      v6 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25B,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
        (const char *)0x8000FFFFLL);
      return v6;
    }
    v10 = (a3 != 0) + 1;
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>((ApplicationViewOperation **)&ppvOut);
    if ( ppvOut )
    {
      *((_DWORD *)ppvOut + 18) = v10;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 320LL))(a2);
      v6 = v13;
      if ( v13 >= 0 )
      {
        v6 = 0;
        goto LABEL_17;
      }
      v11 = (unsigned int)v13;
      v12 = 599LL;
    }
    else
    {
      v6 = -2147024882;
      v11 = 2147942414LL;
      v12 = 597LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v11);
LABEL_17:
    Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&ppvOut);
    return v6;
  }
  ppvOut = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  v5 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk(a1 - 112, v15);
  v6 = IUnknown_QueryService(*v5, &stru_1807B1BA0, &GUID_103231ae_04cb_4e5e_b63d_e3ce47cd0f0a, &ppvOut);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v15);
  if ( (v6 & 0x80000000) == 0 )
  {
    v9 = ApplicationViewHelpers::CloseView(a2, ppvOut, 8LL);
    v6 = v9;
    if ( v9 >= 0 )
    {
      v6 = 0;
      goto LABEL_8;
    }
    v7 = (unsigned int)v9;
    v8 = 589LL;
  }
  else
  {
    v7 = v6;
    v8 = 587LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
    (const char *)v7);
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
  return v6;
}
