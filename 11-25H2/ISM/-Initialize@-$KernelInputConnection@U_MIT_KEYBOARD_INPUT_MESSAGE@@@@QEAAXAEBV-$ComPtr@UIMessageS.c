/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_KEYBOARD_INPUT_MESSAGE@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@Z@std@@@Z @ 0x18000AF6C
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800EF290 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ??4?$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z @ 0x18000AA4C (--4-$function@$$A6AXPEBU_MIT_PEN_EVENT_MESSAGE@@@Z@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B0D58 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::Initialize(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(__int64, const wchar_t *, _QWORD *); // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rsi
  __int64 (__fastcall *v15)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+20h] [rbp-28h]
  int v21; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *((_DWORD *)a1 + 34) = 8;
  std::function<void (_MIT_PEN_EVENT_MESSAGE const *)>::operator=((__int64)(a1 + 8), a4);
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v8);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v9 = *a2;
    v10 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    v11 = v10(v9, L"Kernel\\MIT\\InputPort", a1);
    if ( v11 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v11,
        v20);
    LOBYTE(v12) = 1;
    v13 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v12);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v13,
        v20);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      *a2);
    v14 = *a2;
    v15 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      a1 + 1,
      a1[1]);
    v21 = (_DWORD)a1 + 16;
    v16 = v15(v14, KernelInputConnection<_MIT_KEYBOARD_INPUT_MESSAGE>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v16 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v16,
        v21);
    v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v17 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v17,
        v21);
    v18 = NtMITCoreMsgKOpenConnectionTo(8LL, a1 + 3);
    if ( v18 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v18,
        v21);
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a4, v7);
}
