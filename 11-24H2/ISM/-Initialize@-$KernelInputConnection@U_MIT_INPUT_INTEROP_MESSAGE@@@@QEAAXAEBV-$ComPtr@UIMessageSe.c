/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_INPUT_INTEROP_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@@Z @ 0x18000ABC4
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800F0B40 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000BE08 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008E73C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??4?$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18009238C (--4-$function@$$A6AXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800AEBD8 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::Initialize(
        _QWORD *a1,
        _QWORD *a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v8; // rdx
  const char *v9; // r9
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, const wchar_t *, _QWORD *); // rbx
  int v12; // eax
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v21; // [rsp+20h] [rbp-38h]
  int v22; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *((_DWORD *)a1 + 34) = a3;
  std::function<void (_MIT_INPUT_INTEROP_MESSAGE const *)>::operator=(a1 + 8, a4);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v9);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v10 = *a2;
    v11 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    v12 = v11(v10, L"Kernel\\MIT\\InputPort", a1);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v12,
        v21);
    LOBYTE(v13) = 1;
    v14 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v13);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v14,
        v21);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      *a2);
    v15 = *a2;
    v16 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      a1[1]);
    v22 = (_DWORD)a1 + 16;
    v17 = v16(v15, KernelInputConnection<_MIT_INPUT_INTEROP_MESSAGE>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v17,
        v22);
    v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v18 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v18,
        v22);
    v19 = NtMITCoreMsgKOpenConnectionTo(a3, a1 + 3);
    if ( v19 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v19,
        v22);
  }
  return std::_Func_class<void,>::~_Func_class<void,>(a4, v8);
}
