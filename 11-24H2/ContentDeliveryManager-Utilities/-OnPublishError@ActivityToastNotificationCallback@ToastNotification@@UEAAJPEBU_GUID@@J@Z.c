/*
 * XREFs of ?OnPublishError@ActivityToastNotificationCallback@ToastNotification@@UEAAJPEBU_GUID@@J@Z @ 0x1800691D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18003AF28 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x180069174 (-Log_HrMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 */

__int64 __fastcall ToastNotification::ActivityToastNotificationCallback::OnPublishError(
        wil::details **this,
        const struct _GUID *a2,
        unsigned int a3)
{
  void *v4; // rdx
  const char *v6; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  wil::details::in1diag3::Log_HrMsg(
    retaddr,
    (void *)0x9E,
    (int)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\toastnotificationactivationcallback.cpp",
    (const char *)a3,
    (int)"Error publishing completion activity",
    v6);
  wil::details::SetEvent(this[3], v4);
  return 0LL;
}
