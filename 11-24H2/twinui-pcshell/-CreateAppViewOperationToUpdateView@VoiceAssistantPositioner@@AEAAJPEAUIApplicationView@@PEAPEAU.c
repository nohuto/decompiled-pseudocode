/*
 * XREFs of ?CreateAppViewOperationToUpdateView@VoiceAssistantPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIApplicationViewOperation@@@Z @ 0x18050ACD8
 * Callers:
 *     ?UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ @ 0x18050FEE0 (-UpdateManagedView@VoiceAssistantPositioner@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18005155C (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?View@?$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEventArgs@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x1800566E4 (-View@-$consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs@UIViewVisibilityChangedEvent.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@AEAUtagRECT@@@Z @ 0x18006D374 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@AEAUtagRECT@@@D.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x18006DEB8 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x18006E190 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ?Mirror_IsThreadRTL@@YAHXZ @ 0x1801B78DC (-Mirror_IsThreadRTL@@YAHXZ.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801CCC38 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 *     ?ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z @ 0x1802B2D20 (-ScaleByPerMonitorDPI@ExperienceManagerUtils@@YAHHPEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAHAEAHAEAUtagSIZE@@@VoiceAssistantPositionerTelemetry@@SAXAEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AEAH3AEAUtagSIZE@@@Z @ 0x180509E58 (--$VAPositioner_CreateAppViewOperationToUpdateView@AEAPEAUIApplicationView@@AEA_NAEAUtagRECT@@AE.c)
 *     ?ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA?AUtagRECT@@W4EDGEUI_TRAYSTUCKPLACE@@HHU2@1111H@Z @ 0x18050A59C (-ComputeVoiceAssistantWindowRect@VoiceAssistantPositioner@@AEAA-AUtagRECT@@W4EDGEUI_TRAYSTUCKPLA.c)
 *     ?GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@PEAUtagRECT@@22@Z @ 0x18050B888 (-GetMonitorInformation@VoiceAssistantPositioner@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VoiceAssistantPositioner::CreateAppViewOperationToUpdateView(
        VoiceAssistantPositioner *this,
        struct IApplicationView *a2,
        struct tagSIZE *a3)
{
  VoiceAssistantPositioner *v4; // r13
  ApplicationViewOperation **v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  __int64 (__fastcall *v11)(char *, struct IApplicationView *, int *, __int64 *); // rdi
  int MonitorInformation; // eax
  __int64 v13; // rdx
  HMONITOR v14; // r12
  int IsThreadRTL; // eax
  LONG left; // ecx
  const char *v17; // r9
  int v18; // eax
  HMONITOR v19; // r8
  LONG v20; // edi
  LONG v21; // esi
  LONG v22; // r14d
  LONG v23; // r15d
  int v24; // r12d
  HMONITOR v25; // r8
  int v26; // r13d
  HMONITOR v27; // r8
  int v28; // eax
  __int64 v29; // rdx
  char v31; // [rsp+60h] [rbp-148h] BYREF
  __int64 v32; // [rsp+68h] [rbp-140h] BYREF
  __int64 v33; // [rsp+70h] [rbp-138h] BYREF
  int v34; // [rsp+78h] [rbp-130h] BYREF
  int v35[2]; // [rsp+80h] [rbp-128h] BYREF
  __int64 v36; // [rsp+88h] [rbp-120h] BYREF
  __int64 *v37[2]; // [rsp+90h] [rbp-118h] BYREF
  struct tagRECT v38; // [rsp+A0h] [rbp-108h] BYREF
  int v39; // [rsp+B0h] [rbp-F8h] BYREF
  int v40; // [rsp+B4h] [rbp-F4h] BYREF
  _DWORD v41[2]; // [rsp+B8h] [rbp-F0h] BYREF
  struct tagSIZE *v42; // [rsp+C0h] [rbp-E8h]
  RECT v43; // [rsp+D0h] [rbp-D8h] BYREF
  struct tagSIZE *v44; // [rsp+E0h] [rbp-C8h]
  ApplicationViewOperation *v45; // [rsp+E8h] [rbp-C0h] BYREF
  RECT v46; // [rsp+F0h] [rbp-B8h] BYREF
  struct tagRECT v47; // [rsp+100h] [rbp-A8h] BYREF
  struct tagRECT v48; // [rsp+110h] [rbp-98h] BYREF
  struct IApplicationView *v49; // [rsp+120h] [rbp-88h] BYREF
  RECT rc; // [rsp+130h] [rbp-78h] BYREF
  __int128 v51; // [rsp+140h] [rbp-68h] BYREF
  struct tagRECT v52; // [rsp+150h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+0h]

  v44 = a3;
  v4 = this;
  *(_QWORD *)&v46.left = this;
  *(_QWORD *)&v43.left = this;
  v49 = a2;
  v42 = a3;
  v5 = Microsoft::WRL::Details::Make<ApplicationViewOperation,>((ApplicationViewOperation **)v37);
  v45 = *v5;
  v6 = (__int64)v45;
  *v5 = 0LL;
  Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)v37);
  if ( !v6 )
  {
    v7 = -2147024882;
    v8 = 2147942414LL;
    v9 = 689LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)v8);
    goto LABEL_41;
  }
  v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v6 + 112LL))(v6, 255LL, 288LL);
  v7 = v10;
  if ( v10 < 0 )
  {
    v8 = (unsigned int)v10;
    v9 = 692LL;
    goto LABEL_5;
  }
  v39 = 0;
  v32 = 0LL;
  v11 = *(__int64 (__fastcall **)(char *, struct IApplicationView *, int *, __int64 *))(*((_QWORD *)v4 + 13) + 40LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  MonitorInformation = v11((char *)v4 + 104, a2, &v39, &v32);
  v7 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    v13 = 695LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)MonitorInformation);
LABEL_9:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    goto LABEL_41;
  }
  MonitorInformation = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 176LL))(v6, v32);
  v7 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    v13 = 696LL;
    goto LABEL_8;
  }
  MonitorInformation = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 128LL))(v6, 0LL);
  v7 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    v13 = 698LL;
    goto LABEL_8;
  }
  rc = 0LL;
  v31 = 1;
  v14 = MonitorFromRect(&rc, 1u);
  *(_QWORD *)v35 = v14;
  v34 = 0;
  v38 = 0LL;
  v48 = 0LL;
  v47 = 0LL;
  MonitorInformation = VoiceAssistantPositioner::GetMonitorInformation(
                         v4,
                         v14,
                         (enum EDGEUI_TRAYSTUCKPLACE *)&v34,
                         &v38,
                         &v48,
                         &v47);
  v7 = MonitorInformation;
  if ( MonitorInformation < 0 )
  {
    v13 = 709LL;
    goto LABEL_8;
  }
  rc.top = v38.bottom / 2;
  rc.bottom = v38.bottom / 2;
  rc.left = v38.right / 2;
  rc.right = v38.right / 2;
  try
  {
    winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current(v37);
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
      v37,
      &v36,
      (__int64)v14);
    if ( v36
      && !(unsigned int)winrt::impl::consume_WindowsUdk_UI_Shell_IViewVisibilityChangedEventArgs<winrt::WindowsUdk::UI::Shell::IViewVisibilityChangedEventArgs>::View(&v36) )
    {
      IsThreadRTL = Mirror_IsThreadRTL();
      left = v38.left;
      if ( IsThreadRTL )
        left = v38.right;
      rc.left = left;
      rc.right = left;
      rc.top = v38.top;
      rc.bottom = v38.top;
    }
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v36);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)v37);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2E4,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      v17);
    v6 = (__int64)v45;
    v4 = *(VoiceAssistantPositioner **)&v43.left;
    *(_QWORD *)&v46.left = *(_QWORD *)&v43.left;
    v44 = v42;
    v14 = *(HMONITOR *)v35;
  }
  v51 = 0LL;
  v40 = 0;
  v18 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, int *))(**((_QWORD **)v4 + 25) + 40LL))(
          *((_QWORD *)v4 + 25),
          &v51,
          &v40);
  if ( v18 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x2EA,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v18);
  v20 = v51;
  v21 = DWORD1(v51);
  v22 = DWORD2(v51);
  v23 = HIDWORD(v51);
  v24 = ExperienceManagerUtils::ScaleByPerMonitorDPI((ExperienceManagerUtils *)0x28, (ExperienceManagerUtils *)v14, v19);
  v42 = (struct tagSIZE *)((char *)v4 + 384);
  v26 = ExperienceManagerUtils::ScaleByPerMonitorDPI(
          (ExperienceManagerUtils *)*((unsigned int *)v4 + 96),
          *(ExperienceManagerUtils **)v35,
          v25);
  LODWORD(v36) = v26;
  v35[0] = ExperienceManagerUtils::ScaleByPerMonitorDPI(
             (ExperienceManagerUtils *)*(unsigned int *)(*(_QWORD *)&v46.left + 388LL),
             *(ExperienceManagerUtils **)v35,
             v27);
  v43.left = v20;
  v43.top = v21;
  v43.right = v22;
  v43.bottom = v23;
  v46 = rc;
  VoiceAssistantPositioner::ComputeVoiceAssistantWindowRect(
    (__int64)&v38,
    &v52,
    v34,
    v26,
    v35[0],
    (__int64)&v38,
    &v48,
    (__m128i *)&v47,
    (__m128i *)&v46,
    &v43,
    v24);
  v33 = 0LL;
  v28 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT &>(
          &v33,
          (__int64)&v52);
  v7 = v28;
  if ( v28 < 0 )
  {
    v29 = 756LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\voiceassistantpositioner.cpp",
      (const char *)(unsigned int)v28);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    goto LABEL_9;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 80LL))(v6, v33);
  v7 = v28;
  if ( v28 < 0 )
  {
    v29 = 757LL;
    goto LABEL_27;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 160LL))(v6, 13LL);
  v7 = v28;
  if ( v28 < 0 )
  {
    v29 = 760LL;
    goto LABEL_27;
  }
  v41[0] = 1;
  v41[1] = 1;
  v28 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v6 + 224LL))(v6, v41, 0LL);
  v7 = v28;
  if ( v28 < 0 )
  {
    v29 = 764LL;
    goto LABEL_27;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, _DWORD *, _QWORD))(*(_QWORD *)v6 + 208LL))(v6, v41, 0LL);
  v7 = v28;
  if ( v28 < 0 )
  {
    v29 = 765LL;
    goto LABEL_27;
  }
  v28 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 96LL))(v6, 1LL);
  v7 = v28;
  if ( v28 < 0 )
  {
    v29 = 770LL;
    goto LABEL_27;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
  *v44 = (struct tagSIZE)v6;
  VoiceAssistantPositionerTelemetry::VAPositioner_CreateAppViewOperationToUpdateView<IApplicationView * &,bool &,tagRECT &,int &,int &,tagSIZE &>(
    &v49,
    (bool *)&v31,
    &v52,
    (int *)&v36,
    v35,
    v42);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  v7 = 0;
LABEL_41:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v45);
  return v7;
}
