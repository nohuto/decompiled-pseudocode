/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18003AF28
 * Callers:
 *     ?Invoke@CompletionDelegate@?1???$WaitForCompletion@PEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@PEAVStorageFile@Storage@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z@UEAAJ0W4AsyncStatus@56ABI@@@Z @ 0x180033E40 (-Invoke@CompletionDelegate@-1---$WaitForCompletion@PEAU-$IAsyncOperation@PEAVStorageFile@Storage.c)
 *     ?OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z @ 0x1800691B0 (-OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z.c)
 *     ?OnPublishError@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@J@Z @ 0x1800691D0 (-OnPublishError@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@J@Z.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003D698 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  unsigned int v2; // r8d
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
    wil::details::in1diag3::_FailFast_GetLastError(retaddr, (void *)0x9D3, v2, v3);
}
