/*
 * XREFs of ?IMessageSessionCloseEndpointFunction@details@wil@@YAXPEAUIMessageSession@@_K@Z @ 0x1800AF038
 * Callers:
 *     ?reset@?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAAXPEAUIMessageSession@@_K@Z @ 0x18000B6AC (-reset@-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFun.c)
 *     ?CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ @ 0x18001449C (-CheckAndEnsureCursorManagerClient@CursorNotificationProcessor@@AEAA_NXZ.c)
 *     ??1?$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1?IMessageSessionCloseEndpointFunction@details@wil@@YAX01@Z$0A@@wil@@QEAA@XZ @ 0x180074154 (--1-$unique_com_token@UIMessageSession@@_K$$A6AXPEAU1@_K@Z$1-IMessageSessionCloseEndpointFunctio.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::IMessageSessionCloseEndpointFunction(wil::details *this, struct IMessageSession *a2)
{
  (*(void (__fastcall **)(wil::details *, struct IMessageSession *))(*(_QWORD *)this + 168LL))(this, a2);
}
