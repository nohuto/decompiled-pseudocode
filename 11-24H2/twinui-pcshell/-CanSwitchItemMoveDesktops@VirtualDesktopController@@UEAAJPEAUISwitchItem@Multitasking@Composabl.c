/*
 * XREFs of ?CanSwitchItemMoveDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180493F20
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18004FB70 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18004FC0C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?GetSwitchItemWinrt@VirtualDesktopController@@AEAA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAU23456@@Z @ 0x1800525B4 (-GetSwitchItemWinrt@VirtualDesktopController@@AEAA-AUISwitchItem@Multitasking@ComposableShell@In.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x1804945E0 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?IsVisibleOnDesktops@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBW4VirtualDesktopsScope@TaskGroups@Shell@783@@Z @ 0x180494E5C (-IsVisibleOnDesktops@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::CanSwitchItemMoveDesktops(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        bool *a3)
{
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v9; // rcx
  int v10; // eax
  VirtualDesktopController *v11; // rcx
  int v12; // eax
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+18h]
  int v15; // [rsp+50h] [rbp+20h] BYREF
  struct IApplicationView *v16; // [rsp+60h] [rbp+30h] BYREF
  struct IApplicationView *v17; // [rsp+68h] [rbp+38h] BYREF

  *a3 = 0;
  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 17);
  if ( !this[11].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x130,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_3:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return v7;
  }
  v15 = 0;
  VirtualDesktopController::GetSwitchItemWinrt(v6, (winrt *)&v17, a2);
  v16 = v17;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v16);
  if ( VirtualDesktopController::IsTaskGroupSwitchItem(
         v9,
         (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16) )
  {
    VirtualDesktopController::InitializeTaskGroupController((VirtualDesktopController *)this);
    LODWORD(v16) = 1;
    v10 = (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::IsVisibleOnDesktops(
                             &this[16],
                             &v17,
                             &v16) ^ 1;
    v15 = v10;
  }
  else
  {
    v16 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    VirtualDesktopController::GetApplicationViewFromSwitchItem(v11, a2, &v16);
    v12 = (*(__int64 (__fastcall **)(PVOID, struct IApplicationView *, int *))(*(_QWORD *)this[11].Ptr + 40LL))(
            this[11].Ptr,
            v16,
            &v15);
    v7 = v12;
    if ( v12 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13E,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v12);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
      winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
      goto LABEL_3;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    v10 = v15;
  }
  *a3 = v10 != 0;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v17);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
