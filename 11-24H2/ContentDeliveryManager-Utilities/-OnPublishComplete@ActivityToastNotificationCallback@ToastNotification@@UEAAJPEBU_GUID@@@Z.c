/*
 * XREFs of ?OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z @ 0x1800691B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18003AF28 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::OnPublishComplete(
        wil::details **this,
        struct _GUID *a2)
{
  wil::details::SetEvent(this[3], a2);
  return 0LL;
}
