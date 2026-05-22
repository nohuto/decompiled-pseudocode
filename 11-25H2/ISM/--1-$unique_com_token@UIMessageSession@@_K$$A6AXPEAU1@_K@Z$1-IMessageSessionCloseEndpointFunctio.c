/*
 * XREFs of ??1?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAA@XZ @ 0x180074154
 * Callers:
 *     _CursorNotificationProcessor::CheckAndEnsureCursorManagerClient_::_1_::dtor$1 @ 0x1801C8834 (_CursorNotificationProcessor--CheckAndEnsureCursorManagerClient_--_1_--dtor$1.c)
 *     _InputStateManager::InputStateManager_::_1_::dtor$4 @ 0x1801CB29D (_InputStateManager--InputStateManager_--_1_--dtor$4.c)
 *     _CursorNotificationProcessor::Initialize_::_1_::dtor$1 @ 0x1801CECC2 (_CursorNotificationProcessor--Initialize_--_1_--dtor$1.c)
 * Callees:
 *     ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x1800AF038 (-IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>::~unique_com_token<IMessageSession,unsigned __int64,void (IMessageSession *,unsigned __int64),&void wil::details::IMessageSessionCloseEndpointFunction(IMessageSession *,unsigned __int64),0>(
        wil::details **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  struct IMessageSession *v4; // rdx
  wil::details *v5; // rcx

  v4 = a1[1];
  if ( v4 )
    wil::details::IMessageSessionCloseEndpointFunction(*a1, v4, a3);
  a1[1] = 0LL;
  v5 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(wil::details *))(*(_QWORD *)v5 + 16LL))(v5);
  }
}
