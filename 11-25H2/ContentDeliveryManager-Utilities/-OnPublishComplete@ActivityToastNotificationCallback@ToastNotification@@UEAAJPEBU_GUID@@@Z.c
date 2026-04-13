/*
 * XREFs of ?OnPublishComplete@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@@Z @ 0x180068D10
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18003ADE8 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::OnPublishComplete(
        wil::details **this,
        struct _GUID *a2)
{
  wil::details::SetEvent(this[3], a2);
  return 0LL;
}
