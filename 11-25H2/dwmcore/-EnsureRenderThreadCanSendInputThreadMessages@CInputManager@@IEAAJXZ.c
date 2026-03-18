/*
 * XREFs of ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1802623BC
 * Callers:
 *     ?UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z @ 0x180262470 (-UpdateEdgyInput@CInputManager@@QEAAJAEBUEdgyCompositionConfigurationUpdateEx@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180262508 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanSendInputThreadMessages(CInputManager *this)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, const wchar_t *, _QWORD, _QWORD *); // rdi
  int v6; // eax
  unsigned int v7; // ebx

  if ( *((_QWORD *)this + 7) )
    return 0LL;
  v3 = (_QWORD *)((char *)this + 48);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 48,
    *((_QWORD *)this + 4));
  v4 = *((_QWORD *)this + 5);
  v5 = *(__int64 (__fastcall **)(__int64, const wchar_t *, _QWORD, _QWORD *))(*(_QWORD *)v4 + 24LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3,
    *v3);
  v6 = v5(v4, L"EdgyConfigurationEndpoint", 0LL, v3 + 1);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0xF0u, 0LL);
  return v7;
}
