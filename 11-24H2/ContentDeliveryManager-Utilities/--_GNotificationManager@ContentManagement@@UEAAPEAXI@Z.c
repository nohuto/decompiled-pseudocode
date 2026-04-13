/*
 * XREFs of ??_GNotificationManager@ContentManagement@@UEAAPEAXI@Z @ 0x18002CE70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificationActivationCallback@@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18002A1D8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UINotificati.c)
 */

ContentManagement::NotificationManager *__fastcall ContentManagement::NotificationManager::`scalar deleting destructor'(
        ContentManagement::NotificationManager *this,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>((__int64)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
