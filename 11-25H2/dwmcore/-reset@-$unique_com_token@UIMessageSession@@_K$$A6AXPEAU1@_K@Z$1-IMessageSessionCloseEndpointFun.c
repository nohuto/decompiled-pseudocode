/*
 * XREFs of ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x180262508
 * Callers:
 *     ?EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1801BD260 (-EnsureRenderThreadCanReceiveInputThreadMessages@CInputManager@@IEAAJXZ.c)
 *     ??1CInputManager@@MEAA@XZ @ 0x1802622D0 (--1CInputManager@@MEAA@XZ.c)
 *     ?EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ @ 0x1802623BC (-EnsureRenderThreadCanSendInputThreadMessages@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x180262458 (-IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::reset(
        wil::details **a1,
        wil::details *a2)
{
  struct IMessageSession *v4; // rdx
  wil::details *v5; // rbx

  v4 = a1[1];
  if ( v4 )
    wil::details::IMessageSessionCloseEndpointFunction(*a1, v4);
  a1[1] = 0LL;
  v5 = *a1;
  if ( *a1 != a2 )
  {
    *a1 = a2;
    if ( a2 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)a2 + 8LL))(a2);
    if ( v5 )
      (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
