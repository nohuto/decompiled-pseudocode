/*
 * XREFs of ?HandleGamingPostureHotkey@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180351438
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x1803559E0 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18001F62C (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ @ 0x18029E290 (-InternalRelease@-$ComPtr@UIUpdateViewValueSet@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ @ 0x180335768 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_57804088@@@details@wil@@QEAA_NXZ.c)
 *     wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_670c3bfbe2527c19a6d3da5bf7d2d729___ @ 0x180342E74 (wil--details--RunWhenCompleteAction_IUnknown_Windows--Foundation--IAsyncAction____lambda_670c3bf.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18034687C (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefl_ea_18034687C.c)
 *     ??0?$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180346938 (--0-$ActivityBase@VGamingPostureUXTelemetryProvider@@$0A@$0A@$04$0DAAAAAA@U_TlgRefl_ea_180346938.c)
 *     ??1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ @ 0x180348634 (--1HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAA@XZ.c)
 *     ?StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z @ 0x18035AE0C (-StartActivity@HotkeyEntryPointActivity@GamingPostureUXTelemetryProvider@@QEAAX_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GamingOverlayExperienceManager::HandleGamingPostureHotkey(GamingOverlayExperienceManager *this)
{
  __int64 v1; // rdi
  __int64 (__fastcall *v2)(__int64, SID *, GUID *, _QWORD **); // rbx
  int v3; // eax
  unsigned int v4; // ebx
  bool v5; // si
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 (__fastcall *v8)(_QWORD *, __int64 *); // rdi
  int v9; // eax
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(_QWORD *, __int64 *); // rdi
  int v12; // ebx
  int v14; // eax
  _QWORD *v15; // rbx
  bool v16; // zf
  __int64 v17; // rax
  __int64 (__fastcall *v18)(_QWORD *, __int64 *); // rdi
  int v19; // eax
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(_QWORD *, __int64 *); // rdi
  _QWORD v22[42]; // [rsp+30h] [rbp-D0h] BYREF
  bool v23; // [rsp+180h] [rbp+80h]
  __int64 v24; // [rsp+190h] [rbp+90h] BYREF
  _QWORD *v25; // [rsp+198h] [rbp+98h] BYREF
  _QWORD v26[42]; // [rsp+1A0h] [rbp+A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+318h] [rbp+218h]

  v25 = 0LL;
  v1 = *((_QWORD *)this + 56);
  v2 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, _QWORD **))(*(_QWORD *)v1 + 24LL);
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v25);
  v3 = v2(v1, &SID_GamingPostureController, &GUID_b525603c_e3b6_51fa_bdfc_1ac36cf03dc8, &v25);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v24 = 0LL;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_57804088>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_57804088>::GetImpl'::`2'::impl) )
    {
      v5 = (unsigned int)IsGamingFullScreenExperienceActive() == 0;
      memset_0(v26, 0, sizeof(v26));
      wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v26);
      v26[0] = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
      GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::StartActivity(
        (GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v26,
        v5);
      v6 = v25;
      v7 = *v25;
      if ( v5 )
      {
        v8 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v7 + 48);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        v9 = v8(v6, &v24);
        v4 = v9;
        if ( v9 < 0 )
        {
          v10 = 4843LL;
LABEL_7:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v10,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v9);
          GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v26);
LABEL_8:
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
          goto LABEL_15;
        }
      }
      else
      {
        v11 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v7 + 56);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
        v9 = v11(v6, &v24);
        v4 = v9;
        if ( v9 < 0 )
        {
          v10 = 4847LL;
          goto LABEL_7;
        }
      }
      wil::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<GamingPostureUXTelemetryProvider,0,0,5,50331648,_TlgReflectorTag_Param0IsProviderType>(
        (struct wil::details::IFailureCallback *)v22,
        (__int64)v26);
      v22[0] = &GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::`vftable';
      v23 = v5;
      v12 = wil::details::RunWhenCompleteAction_IUnknown_Windows::Foundation::IAsyncAction____lambda_670c3bfbe2527c19a6d3da5bf7d2d729___(
              v24,
              (__int64)v22);
      GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v22);
      if ( v12 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1315,
          (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
          (const char *)(unsigned int)v12);
      wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread((__int64)v26);
      GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity::~HotkeyEntryPointActivity((GamingPostureUXTelemetryProvider::HotkeyEntryPointActivity *)v26);
LABEL_14:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v4 = 0;
      goto LABEL_15;
    }
    v14 = IsGamingFullScreenExperienceActive();
    v15 = v25;
    v16 = v14 == 0;
    v17 = *v25;
    if ( v16 )
    {
      v18 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v17 + 48);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v19 = v18(v15, &v24);
      v4 = v19;
      if ( v19 >= 0 )
        goto LABEL_14;
      v20 = 4893LL;
    }
    else
    {
      v21 = *(__int64 (__fastcall **)(_QWORD *, __int64 *))(v17 + 56);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
      v19 = v21(v15, &v24);
      v4 = v19;
      if ( v19 >= 0 )
        goto LABEL_14;
      v20 = 4897LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v20,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)v19);
    goto LABEL_8;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x12E1,
    (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
    (const char *)(unsigned int)v3);
LABEL_15:
  Microsoft::WRL::ComPtr<IUpdateViewValueSet>::InternalRelease((__int64 *)&v25);
  return v4;
}
