/*
 * XREFs of ?SubscribeToServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800CF190
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1800CF1E0 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 *     ?IsCurrentPlatformSupported@TaskFlowImmersiveShellBroker@@AEAA_NXZ @ 0x1802C0E14 (-IsCurrentPlatformSupported@TaskFlowImmersiveShellBroker@@AEAA_NXZ.c)
 */

__int64 __fastcall TaskFlowImmersiveShellBroker::SubscribeToServices(
        TaskFlowImmersiveShellBroker *this,
        struct IServiceProvider *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( TaskFlowImmersiveShellBroker::IsCurrentPlatformSupported(this) )
  {
    v3 = TaskFlowImmersiveShellBroker::ReinitializeObjects((TaskFlowImmersiveShellBroker *)((char *)this - 72));
    if ( v3 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x10D,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\taskflowimmersiveshellbroker.cpp",
        (const char *)(unsigned int)v3);
    *((_DWORD *)this + 30) = 1;
  }
  return 0LL;
}
