/*
 * XREFs of ?AddWindow@RemoteSystem@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUWindowId@UI@56@@Z @ 0x18066555C
 * Callers:
 *     ?UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUWindowId@UI@56@AEBURemoteSystem@RemoteSystemData@@_N@Z @ 0x180652544 (-UpdateModifiedPropertiesAndNotify@RemoteSystemDataModel@factory_implementation@Shell@Internal@W.c)
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?AcquireSRWLockExclusive@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_SRWLOCK@@@Z @ 0x18013C6D0 (-AcquireSRWLockExclusive@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?ThumbnailFactory@?$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRootSwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUIThumbnailFactory@Multitasking@ComposableShell@Internal@Windows@3@@Z @ 0x18044F7FC (-ThumbnailFactory@-$consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem@UIRoot.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::RemoteSystem::AddWindow(
        winrt::Windows::Internal::Shell::implementation::RemoteSystem *this,
        const struct winrt::Windows::UI::WindowId *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::AcquireSRWLockExclusive(&v4, (RTL_SRWLOCK *)this + 4);
  winrt::impl::consume_Windows_Internal_ComposableShell_Multitasking_IRootSwitchItem<winrt::Windows::Internal::ComposableShell::Multitasking::IRootSwitchItem>::ThumbnailFactory(
    (__int64 *)this + 7,
    (__int64 *)a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
