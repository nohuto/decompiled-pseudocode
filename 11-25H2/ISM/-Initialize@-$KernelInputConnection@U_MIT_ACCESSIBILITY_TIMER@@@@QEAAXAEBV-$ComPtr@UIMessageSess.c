/*
 * XREFs of ?Initialize@?$KernelInputConnection@U_MIT_ACCESSIBILITY_TIMER@@@@QEAAXAEBV?$ComPtr@UIMessageSession@@@WRL@Microsoft@@W4_MIT_ENDPOINT@@V?$function@$$A6AXPEBU_MIT_ACCESSIBILITY_TIMER@@@Z@std@@@Z @ 0x18007B2D0
 * Callers:
 *     ?Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z @ 0x1800EF290 (-Initialize@Win32kInterop@@QEAAJPEAUIRawInputClient@@PEAUISystemInputRouter@@@Z.c)
 * Callees:
 *     ?_Swap@?$_Func_class@X_N@std@@IEAAXAEAV12@@Z @ 0x18000A314 (-_Swap@-$_Func_class@X_N@std@@IEAAXAEAV12@@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x18000A430 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008DFDC (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 *     ?_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B0D58 (-_FailFast_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::Initialize(
        _QWORD *a1,
        wil::details **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 (__fastcall ***v7)(_QWORD, _BYTE *); // rcx
  __int64 v8; // rdx
  const char *v9; // r9
  _BYTE *v10; // rdx
  wil::details *v11; // rdi
  __int64 (__fastcall *v12)(wil::details *, const wchar_t *, _QWORD *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  int v15; // eax
  unsigned __int64 v16; // r8
  wil::details *v17; // rsi
  __int64 (__fastcall *v18)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD); // rdi
  unsigned __int64 v19; // r8
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v24; // [rsp+20h] [rbp-98h]
  int v25; // [rsp+20h] [rbp-98h]
  _BYTE v26[56]; // [rsp+40h] [rbp-78h] BYREF
  _BYTE *v27; // [rsp+78h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  *((_DWORD *)a1 + 34) = 17;
  v27 = 0LL;
  v7 = *(__int64 (__fastcall ****)(_QWORD, _BYTE *))(a4 + 56);
  if ( v7 )
    v27 = (_BYTE *)(**v7)(v7, v26);
  std::_Func_class<void,bool>::_Swap((__int64)v26, (__int64)(a1 + 8));
  if ( v27 )
  {
    v10 = v26;
    LOBYTE(v10) = v27 != v26;
    (*(void (__fastcall **)(_BYTE *, _BYTE *))(*(_QWORD *)v27 + 32LL))(v27, v10);
    v27 = 0LL;
  }
  if ( !ISMTestMode::s_instance )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x21,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
      v9);
  if ( !*(_BYTE *)ISMTestMode::s_instance )
  {
    v11 = *a2;
    v12 = *(__int64 (__fastcall **)(wil::details *, const wchar_t *, _QWORD *))(*(_QWORD *)*a2 + 80LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
    v13 = v12(v11, L"Kernel\\MIT\\InputPort", a1);
    if ( v13 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x27,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v13,
        v24);
    LOBYTE(v14) = 1;
    v15 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 32LL))(*a1, v14);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x3B,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v15,
        v24);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      *a2,
      v16);
    v17 = *a2;
    v18 = *(__int64 (__fastcall **)(wil::details *, __int64 (__fastcall *)(), _QWORD *, _QWORD))(*(_QWORD *)*a2 + 104LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)a1 + 1,
      (wil::details *)a1[1],
      v19);
    v25 = (_DWORD)a1 + 16;
    v20 = v18(v17, KernelInputConnection<_MIT_ACCESSIBILITY_TIMER>::s_OnKernelInputEventStatic, a1, *a1);
    if ( v20 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x43,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v20,
        v25);
    v21 = (*(__int64 (__fastcall **)(wil::details *, _QWORD, _QWORD *))(*(_QWORD *)*a2 + 136LL))(*a2, a1[2], a1 + 3);
    if ( v21 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x47,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v21,
        v25);
    v22 = NtMITCoreMsgKOpenConnectionTo(17LL, a1 + 3);
    if ( v22 < 0 )
      wil::details::in1diag3::_FailFast_NtStatus(
        retaddr,
        (void *)0x4C,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\KernelInputConnection\\KernelInputConnection.h",
        (const char *)(unsigned int)v22,
        v25);
  }
  return std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a4, v8);
}
