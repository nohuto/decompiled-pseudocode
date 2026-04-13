/*
 * XREFs of ??1ContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAA@XZ @ 0x1800A89E8
 * Callers:
 *     ??_EContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAPEAXI@Z @ 0x1800A8A20 (--_EContentDeliveryManagerAppInfo@ApplicationModel@Extensions@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002A31C (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo::~ContentDeliveryManagerAppInfo(
        Windows::Internal::Extensions::ApplicationModel::ContentDeliveryManagerAppInfo *this)
{
  volatile int *v2; // rdx

  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 10);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)this + 9);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v2);
}
