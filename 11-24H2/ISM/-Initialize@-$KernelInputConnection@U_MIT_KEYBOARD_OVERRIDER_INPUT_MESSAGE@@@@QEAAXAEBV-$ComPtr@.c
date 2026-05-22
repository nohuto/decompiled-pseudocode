/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE@@@Z@std@@@Z @ 0x1800F07A0
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F0B40 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AEBD8 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x1800EFA9C (--4-$function@$$A6AXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::Initialize(
        _QWORD *a1,
        wil::details **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  wil::details *v9; // rdi
  __int64 (__fastcall *v10)(wil::details *, const wchar_t *, _QWORD *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  unsigned __int64 v14; // r8
  wil::details *v15; // rsi
  __int64 (__fastcall *v16)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  unsigned __int64 v17; // r8
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v22; // [rsp+20h] [rbp-28h]
  int v23; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)a1 + 34) = 13;
  std::function<void (_MIT_PTP_INTEROP_MESSAGE const *)>::operator=((__int64)(a1 + 8), a4);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v8);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v9 = *a2;
    v10 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    v11 = v10(v9, L"Kernel\\MIT\\InputPort", a1);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v11,
        v22);
    LOBYTE(v12) = 1;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v13,
        v22);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      *a2,
      v14);
    v15 = *a2;
    v16 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      (wil::details *)a1[1],
      v17);
    v23 = (_DWORD)a1 + 16;
    v18 = v16(v15, KernelInputConnection<_MIT_KEYBOARD_OVERRIDER_INPUT_MESSAGE>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v18,
        v23);
    v19 = (*(__int64 (__fastcall **)(wil::details *, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v19 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v19,
        v23);
    v20 = NtMITCoreMsgKOpenConnectionTo(13LL, a1 + 3);
    if ( v20 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v20,
        v23);
  }
  return std::_Func_class<void,>::~_Func_class<void,>(a4, v7);
}
