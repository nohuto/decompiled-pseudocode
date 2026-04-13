/*
 * XREFs of ??1AppInstallInfoRecordImpl@ContentManagement@@UEAA@XZ @ 0x180042650
 * Callers:
 *     ??_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z @ 0x180042A80 (--_EAppInstallInfoRecordImpl@ContentManagement@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ContentManagement::AppInstallInfoRecordImpl::~AppInstallInfoRecordImpl(HSTRING *this)
{
  WindowsDeleteString(this[12]);
  this[12] = 0LL;
  WindowsDeleteString(this[11]);
  this[11] = 0LL;
  WindowsDeleteString(this[10]);
  this[10] = 0LL;
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Microsoft::WRL::FtmBase,INotificationActivationCallback>((__int64)this);
}
