/*
 * XREFs of ?Show@CAltTabViewHost@@UEAAJPEAUIImmersiveMonitor@@W4ALT_TAB_VIEW_FLAGS@@PEAUIApplicationView@@@Z @ 0x1804B0410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180041470 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?DismissView@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ @ 0x18011F3C0 (-DismissView@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@UEAAJXZ.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18011F8B8 (--0-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsP.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136988 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180328954 (-Stop@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0.c)
 *     ??1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1804AF4D0 (--1ShowAltTab@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1804B0800 (-StartActivity@ShowAltTab@MultitaskingViewTelemetry@@QEAAXXZ.c)
 *     ?SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ @ 0x1804B0D00 (-SwitchToSelectedItemAndDismiss@CAltTabViewHost@@UEAAJXZ.c)
 *     ?_RegisterForMonitorEvents@?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z @ 0x1804B0D50 (-_RegisterForMonitorEvents@-$CMultitaskingViewHostBase@UIAltTabViewHost@@@@IEAAJPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAltTabViewHost::Show(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 (__fastcall ****v12)(_QWORD, GUID *, __int64 *); // rax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall *v14)(_QWORD, GUID *, __int64 *); // rbx
  int v15; // eax
  char v16; // bl
  __int64 v17; // rbx
  void (__fastcall *v18)(__int64, __int64, GUID *, __int64 *); // rdi
  __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+50h] [rbp-B0h]
  __int64 v28; // [rsp+58h] [rbp-A8h]
  char v29; // [rsp+60h] [rbp-A0h]
  __int128 v30; // [rsp+68h] [rbp-98h] BYREF
  volatile signed __int32 *v31[42]; // [rsp+80h] [rbp-80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+218h] [rbp+118h]

  v26 = (a1 + 24) & -(__int64)(a1 != 0);
  v27 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v26, 1);
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v31,
    (__int64)"ShowAltTab");
  v31[0] = (volatile signed __int32 *)&MultitaskingViewTelemetry::ShowAltTab::`vftable';
  MultitaskingViewTelemetry::ShowAltTab::StartActivity((MultitaskingViewTelemetry::ShowAltTab *)v31);
  v28 = a1;
  v29 = 1;
  v8 = CMultitaskingViewHostBase<IAltTabViewHost>::_RegisterForMonitorEvents(a1, a2);
  v9 = v8;
  if ( v8 >= 0 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)(a1 + 184), a2);
    v30 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)a2 + 88LL))(a2, &v30);
    v9 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCC,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v10);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
      goto LABEL_26;
    }
    v11 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, __int64))(**(_QWORD **)(a1 + 160) + 24LL))(
            *(_QWORD *)(a1 + 160),
            &v30,
            3LL);
    v9 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCF,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v11);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
      goto LABEL_26;
    }
    v23 = 0LL;
    if ( !a4 )
      goto LABEL_16;
    v24 = 0LL;
    v12 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a1 + 144) + 24LL))(
                                                                  *(_QWORD *)(a1 + 144),
                                                                  &v25);
    v13 = *v12;
    v14 = ***v12;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    v15 = v14(v13, &GUID_ab2611a6_5a19_4261_a11a_5f77866165e6, &v24);
    if ( v15 >= 0 )
    {
      v16 = 1;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD8,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v15);
      v16 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v25);
    if ( v16 )
    {
      v17 = v24;
      v18 = *(void (__fastcall **)(__int64, __int64, GUID *, __int64 *))(*(_QWORD *)v24 + 24LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      v18(v17, a4, &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc, &v23);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    if ( v23
      && (*(int (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 160) + 112LL))(*(_QWORD *)(a1 + 160), 1LL) >= 0 )
    {
      v19 = (unsigned int)((a3 & 2) != 0) + 5;
    }
    else
    {
LABEL_16:
      v19 = (unsigned int)((a3 & 2) != 0) + 7;
    }
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 160) + 104LL))(
      *(_QWORD *)(a1 + 160),
      1LL,
      v19);
    v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 64LL))(*(_QWORD *)(a1 + 160));
    v9 = v20;
    if ( v20 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xED,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v20);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
      goto LABEL_26;
    }
    *(_BYTE *)(a1 + 112) = 1;
    v21 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 160) + 96LL))(*(_QWORD *)(a1 + 160));
    v9 = v21;
    if ( v21 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF1,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
        (const char *)(unsigned int)v21);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
      CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
      goto LABEL_26;
    }
    *(_BYTE *)(a1 + 216) = a3 & 1;
    if ( (a3 & 4) != 0 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 168) + 24LL))(*(_QWORD *)(a1 + 168)) )
      {
LABEL_24:
        (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(
          *(_QWORD *)(a1 + 88),
          *(unsigned int *)(a1 + 72));
LABEL_25:
        wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64 *)v31);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v23);
        v9 = 0;
        goto LABEL_26;
      }
    }
    else if ( (a3 & 1) != 0 || GetAsyncKeyState(18) < 0 )
    {
      goto LABEL_24;
    }
    CAltTabViewHost::SwitchToSelectedItemAndDismiss((CAltTabViewHost *)a1);
    goto LABEL_25;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xC8,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\alttabviewhost.cpp",
    (const char *)(unsigned int)v8);
  CMultitaskingViewHostBase<IAltTabViewHost>::DismissView(a1);
LABEL_26:
  MultitaskingViewTelemetry::ShowAltTab::~ShowAltTab(v31);
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v26);
  return v9;
}
