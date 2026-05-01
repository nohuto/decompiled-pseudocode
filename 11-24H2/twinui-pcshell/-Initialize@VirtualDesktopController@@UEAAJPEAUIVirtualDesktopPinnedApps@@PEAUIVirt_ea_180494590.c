/*
 * XREFs of ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@AEBV?$com_ptr_t@UIRemoteSessionWindowManager@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180494590
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180019118 (--4-$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QE.c)
 *     ?Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopNotificationService@@PEAUIVirtualDesktopDataSourceInternal@@@Z @ 0x180092AF0 (-Initialize@VirtualDesktopController@@UEAAJPEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopMan.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18013C6A0 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 */

__int64 __fastcall VirtualDesktopController::Initialize(
        __int64 a1,
        struct IVirtualDesktopPinnedApps *a2,
        struct IVirtualDesktopManagerInternal *a3,
        struct IVirtualDesktopNotificationService *a4,
        struct IVirtualDesktopDataSourceInternal *a5,
        __int64 *a6)
{
  RTL_SRWLOCK *v8; // [rsp+40h] [rbp+8h] BYREF

  VirtualDesktopController::Initialize((VirtualDesktopController *)a1, a2, a3, a4, a5);
  wil::AcquireSRWLockExclusive(&v8, (RTL_SRWLOCK *)(a1 + 104));
  wil::com_ptr_t<Windows::Foundation::Collections::IPropertySet,wil::err_exception_policy>::operator=(
    (__int64 *)(a1 + 112),
    *a6);
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v8);
  return 0LL;
}
