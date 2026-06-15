/*
 * XREFs of Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____ @ 0x180146FA0
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageInstallingEventArgs_____lambda_ed93c361bb151993c0858b3e67bfc06f___ @ 0x18014658C (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--ApplicationModel--Pack.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUninstallingEventArgs_____lambda_ddf72429dfe7e6f051e146c766b7831c___ @ 0x1801465F8 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_1801465F8.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::PackageCatalog___Windows::ApplicationModel::PackageUpdatingEventArgs_____lambda_c0f79c7db2a352ac037a8b0fb781f475___ @ 0x180146664 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Applicati_ea_180146664.c)
 *     Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::System::UserWatcher___Windows::System::UserChangedEventArgs____Microsoft::WRL::FtmBase___lambda_763aee26e7d4656314e991e320ffb749___ @ 0x1801466D0 (Microsoft--WRL--Callback_Microsoft--WRL--Implements_Microsoft--WRL--RuntimeClassFlags_2__Windows.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____lambda_7ee6381ccef9550c878152fb933ee002___ @ 0x18014673C (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7ee6381ccef95.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_14b36391e39e184c5a3f1194e32070c1___ @ 0x1801467D0 (Windows--Internal--ComTaskPool--QueueTask__lambda_14b36391e39e184c5a3f1194e32070c1___.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A7F7C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall Microsoft::WRL::Details::MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____::_MakeAllocator_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7ee6381ccef9550c878152fb933ee002_____(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1, (const struct std::nothrow_t *)1);
}
