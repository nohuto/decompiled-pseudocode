/*
 * XREFs of ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800EF290
 * Callers:
 *     ?Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z @ 0x1800EEB54 (-Create@Win32kInterop@@SAJPEAUIRawInputClient@@PEAUISystemInputRouter@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18000A468 (-Initialize@-$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSe.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z@std@@@Z @ 0x18000AAD4 (-Initialize@-$KernelInputConnection@UMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18000AF6C (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageS.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_VPTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18000B4DC (-Initialize@-$KernelInputConnection@U_MIT_VPTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSes.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002192C (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?IsEdition@@YA_N_K@Z @ 0x1800392B0 (-IsEdition@@YA_N_K@Z.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x180039F24 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x1800520B8 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z@std@@@Z @ 0x18007B2D0 (-Initialize@-$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z@std@@@Z @ 0x18007BAFC (-Initialize@-$KernelInputConnection@U_MIT_HOTKEY_REGISTRATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMes.c)
 *     ?Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z @ 0x180087AE4 (-Initialize@CursorNotificationProcessor@@QEAAJPEAUICursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBUMIT_INPUTSTREAM_ENDED_MESSAGE@@@Z@std@@@Z @ 0x18008DA10 (-Initialize@-$KernelInputConnection@UMIT_INPUTSTREAM_ENDED_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessag.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z @ 0x1800901E4 (--4-$ComPtr@VDWMCursorBroker@@@WRL@Microsoft@@QEAAAEAV012@PEAVDWMCursorBroker@@@Z.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z@std@@@Z @ 0x18009327C (-Initialize@-$KernelInputConnection@U_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@@QEAAXAEBV-$ComPtr@U.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_MOUSE_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800934C8 (-Initialize@-$KernelInputConnection@U_MIT_MOUSE_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     ??$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVKeyboardOverriderDispatcher@@AEAV?$ComPtr@UIMessageSession@@@12@@Z @ 0x1800EE060 (--$MakeAndInitialize@VKeyboardOverriderDispatcher@@V1@AEAV-$ComPtr@UIMessageSession@@@WRL@Micros.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800EEEF0 (-Initialize@-$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV-$ComPtr@.c)
 *     ?Initialize@?$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x1800EF0C0 (-Initialize@-$KernelInputConnection@U_MIT_PTP_INTEROP_MESSAGE@@@@QEAAXAEBV-$ComPtr@UIMessageSess.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Win32kInterop::Initialize(
        Win32kInterop *this,
        struct IRawInputClient *a2,
        struct ISystemInputRouter *a3)
{
  int v5; // eax
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r8
  __int64 v14; // r8
  __int64 v15; // r8
  __int64 v16; // r8
  __int64 v17; // rdi
  __int64 (__fastcall *v18)(__int64, char *); // rbx
  int v19; // eax
  int v20; // eax
  __int64 (__fastcall **v22)(); // [rsp+20h] [rbp-40h] BYREF
  Win32kInterop *v23; // [rsp+28h] [rbp-38h]
  __int64 (__fastcall ***v24)(); // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  wil::details *v26; // [rsp+80h] [rbp+20h] BYREF

  v26 = 0LL;
  Microsoft::WRL::ComPtr<DWMCursorBroker>::operator=((__int64 *)this + 7, (__int64)a2);
  Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)this + 6, (__int64)a3);
  *((_BYTE *)this + 32) = 0;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  v5 = CoreUICreate(&v26);
  if ( v5 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x9B,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v5,
      (int)v22);
  Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 62, &v26);
  if ( IsEdition(253345LL) )
  {
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 5);
    v6 = Microsoft::WRL::Details::MakeAndInitialize<KeyboardOverriderDispatcher,KeyboardOverriderDispatcher,Microsoft::WRL::ComPtr<IMessageSession> &>(
           (KeyboardOverriderDispatcher **)this + 5,
           (__int64)&v26);
    if ( v6 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0xA0,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
        (const char *)(unsigned int)v6,
        (int)v22);
    v22 = off_1801DCDC8;
    v23 = this;
    v24 = &v22;
    KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize(
      (_QWORD *)this + 143,
      &v26,
      v7,
      (__int64)&v22);
  }
  v22 = off_1801DAAC0;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 71, &v26, 4u, (__int64)&v22);
  v22 = off_1801DA910;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize((_QWORD *)this + 107, &v26, v8, (__int64)&v22);
  v22 = off_1801D95C0;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::Initialize((_QWORD *)this + 125, &v26, v9, (__int64)&v22);
  ISMStatics::GetHotkeyRegistrationForwarder();
  v22 = off_1801DAA90;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_HOTKEY_REGISTRATION_MESSAGE>::Initialize((_QWORD *)this + 161, &v26, v10, (__int64)&v22);
  v22 = off_1801DA9A0;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_MOUSE_INPUT_MESSAGE>::Initialize((_QWORD *)this + 197, &v26, v11, (__int64)&v22);
  v22 = off_1801D99A8;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE>::Initialize(
    (_QWORD *)this + 179,
    &v26,
    v12,
    (__int64)&v22);
  v22 = off_1801DA940;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 89, &v26, 7u, (__int64)&v22);
  v22 = off_1801D99D8;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_VPTP_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 215, &v26, v13, (__int64)&v22);
  v22 = off_1801DA9D0;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<MIT_INPUTSTREAM_ENDED_MESSAGE>::Initialize((_QWORD *)this + 233, &v26, v14, (__int64)&v22);
  v22 = off_1801DA970;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE>::Initialize(
    (_QWORD *)this + 251,
    &v26,
    v15,
    (__int64)&v22);
  v22 = off_1801DCEC8;
  v23 = this;
  v24 = &v22;
  KernelInputConnection<_MIT_PTP_INTEROP_MESSAGE>::Initialize((_QWORD *)this + 269, &v26, v16, (__int64)&v22);
  v17 = *((_QWORD *)this + 6);
  v18 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v17 + 72LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 54);
  v19 = v18(v17, (char *)this + 432);
  if ( v19 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x113,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v19,
      (int)v22);
  v20 = CursorNotificationProcessor::Initialize(
          (Win32kInterop *)((char *)this + 440),
          *((struct ICursorBroker **)this + 54));
  if ( v20 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x114,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\win32kinterop.cpp",
      (const char *)(unsigned int)v20,
      (int)v22);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v26);
  return 0LL;
}
