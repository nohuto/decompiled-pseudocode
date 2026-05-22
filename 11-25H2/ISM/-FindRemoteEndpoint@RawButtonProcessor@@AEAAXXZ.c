/*
 * XREFs of ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x1801AB070
 * Callers:
 *     ?Initialize@RawButtonProcessor@@AEAAJXZ @ 0x1801AB254 (-Initialize@RawButtonProcessor@@AEAAJXZ.c)
 *     ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801AB2E0 (-OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 *     ?OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801AB340 (-OnInput@RawButtonProcessor@@UEAAJPEAUInputInfo@@PEAVInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall RawButtonProcessor::FindRemoteEndpoint(RawButtonProcessor *this)
{
  __int64 v2; // rdi
  int (__fastcall *v3)(__int64, __int64 *); // rbx
  unsigned __int64 v4; // r8
  __int64 v5; // rbx
  int (__fastcall *v6)(__int64, const wchar_t *, _QWORD, char *); // rdi
  unsigned __int64 v7; // r8
  __int64 v8; // rbx
  int (__fastcall *v9)(__int64, const wchar_t *, __int64, char *); // rdi
  int v10; // eax
  int v11; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v13 = 0LL;
  v2 = *((_QWORD *)this + 3);
  v3 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 24LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
  if ( v3(v2, &v13) >= 0 )
  {
    v5 = v13;
    v6 = *(int (__fastcall **)(__int64, const wchar_t *, _QWORD, char *))(*(_QWORD *)v13 + 24LL);
    wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
      (wil::details **)this + 4,
      *((wil::details **)this + 4),
      v4);
    if ( v6(v5, L"System\\RawShellButtonRouterInput", 0LL, (char *)this + 40) >= 0
      || (v8 = v13,
          v9 = *(int (__fastcall **)(__int64, const wchar_t *, __int64, char *))(*(_QWORD *)v13 + 24LL),
          wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
            (wil::details **)this + 4,
            *((wil::details **)this + 4),
            v7),
          v9(v8, L"System\\RawShellButtonRouterInput", 1LL, (char *)this + 40) >= 0) )
    {
      v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(**((_QWORD **)this + 3) + 136LL))(
              *((_QWORD *)this + 3),
              *((_QWORD *)this + 5),
              (char *)this + 360);
      if ( v10 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0xE5,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\rawshellbutton\\system\\lib\\"
               "rawbuttonprocessor.cpp",
          (const char *)(unsigned int)v10,
          v11);
    }
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
}
