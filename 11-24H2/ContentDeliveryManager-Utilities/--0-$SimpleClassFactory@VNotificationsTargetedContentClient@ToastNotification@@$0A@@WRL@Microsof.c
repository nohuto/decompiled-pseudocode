/*
 * XREFs of ??0?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180066D40
 * Callers:
 *     ??$MakeAndInitialize@V?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@WRL@Microsoft@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAV?$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification@@$0A@@12@@Z @ 0x180065AA4 (--$MakeAndInitialize@V-$SimpleClassFactory@VNotificationsTargetedContentClient@ToastNotification.c)
 * Callees:
 *     ??0?$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ @ 0x180066C78 (--0-$ClassFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@QEAA@XZ.c)
 */

_QWORD *Microsoft::WRL::SimpleClassFactory<ToastNotification::NotificationsTargetedContentClient,0>::SimpleClassFactory<ToastNotification::NotificationsTargetedContentClient,0>()
{
  _QWORD *v0; // rcx
  _QWORD *result; // rax

  Microsoft::WRL::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::ClassFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>();
  result = v0;
  *v0 = &Microsoft::WRL::SimpleClassFactory<ToastNotification::NotificationsTargetedContentClient,0>::`vftable';
  return result;
}
