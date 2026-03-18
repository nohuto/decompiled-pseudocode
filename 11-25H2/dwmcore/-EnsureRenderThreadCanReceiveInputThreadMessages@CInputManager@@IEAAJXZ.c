/*
 * XREFs of ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1801BD260
 * Callers:
 *     ?Initialize@CInputManager@@UEAAJXZ @ 0x1801BCB80 (-Initialize@CInputManager@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180262508 (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInputManager::EnsureRenderThreadCanReceiveInputThreadMessages(CInputManager *this)
{
  _QWORD *v3; // rbx
  __int64 v4; // rsi
  __int64 (__fastcall *v5)(__int64, int (*)(void *, const void *, int), CInputManager *, _QWORD *); // rdi
  int v6; // eax
  unsigned int v7; // ebx
  int v8; // eax

  if ( *((_QWORD *)this + 9) )
    return 0LL;
  v3 = (_QWORD *)((char *)this + 64);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    (char *)this + 64,
    *((_QWORD *)this + 4));
  v4 = *((_QWORD *)this + 4);
  v5 = *(__int64 (__fastcall **)(__int64, int (*)(void *, const void *, int), CInputManager *, _QWORD *))(*(_QWORD *)v4 + 112LL);
  wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
    v3,
    *v3);
  v6 = v5(v4, CInputManager::s_OnReceiveInputThreadMessage, this, v3 + 1);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x8Bu, 0LL);
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, const wchar_t *, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 40LL))(
           *((_QWORD *)this + 5),
           L"EdgyNotificationEndpoint",
           *((_QWORD *)this + 9),
           0LL);
    v7 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x90u, 0LL);
  }
  return v7;
}
