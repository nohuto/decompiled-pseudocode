/*
 * XREFs of ?StartConnectionRetryTimer@MessageProxyReconnectAdapter@@AEAAJXZ @ 0x180675A00
 * Callers:
 *     ?OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z @ 0x1806756C0 (-OnDisconnected@MessageProxyReconnectAdapter@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     ?RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyReconnectAdapterOwner@@@Z @ 0x180675880 (-RuntimeClassInitialize@MessageProxyReconnectAdapter@@QEAAJAEBU_GUID@@PEBGPEAUIMessageProxyRecon.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x1801F294C (-Log_HrIfMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MessageProxyReconnectAdapter::StartConnectionRetryTimer(MessageProxyReconnectAdapter *this)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64 (__fastcall *)(void *), MessageProxyReconnectAdapter *, char *); // rbx
  int v4; // eax
  __int64 v5; // rdx
  const char *v7; // [rsp+30h] [rbp-8h]
  const char *v8; // [rsp+30h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x129,
    (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 8) != 0LL,
    (unsigned __int64)"Not expecting a valid proxy yet",
    v7);
  wil::details::in1diag3::Log_HrIfMsg(
    retaddr,
    (void *)0x12A,
    (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
    (const char *)0x8000FFFFLL,
    *((_QWORD *)this + 10) != 0LL,
    (unsigned __int64)"Not expecting an existing timer",
    v8);
  v2 = *((_QWORD *)this + 9);
  *((_DWORD *)this + 10) = 0;
  v3 = *(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), MessageProxyReconnectAdapter *, char *))(*(_QWORD *)v2 + 144LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 10);
  v4 = v3(v2, MessageProxyReconnectAdapter::s_AttemptPullProxy, this, (char *)this + 80);
  if ( v4 < 0 )
  {
    v5 = 305LL;
LABEL_5:
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)v5,
      (int)"shellcommondesktopbase\\textinput\\sharedlibs\\messageproxyreconnectadapter\\messageproxyreconnectadapter.cpp",
      (const char *)(unsigned int)v4);
    return 0LL;
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 10) + 80LL))(
         *((_QWORD *)this + 10),
         10000LL * *((unsigned int *)this + 24),
         10000LL * *((unsigned int *)this + 24));
  if ( v4 < 0 )
  {
    v5 = 310LL;
    goto LABEL_5;
  }
  return 0LL;
}
