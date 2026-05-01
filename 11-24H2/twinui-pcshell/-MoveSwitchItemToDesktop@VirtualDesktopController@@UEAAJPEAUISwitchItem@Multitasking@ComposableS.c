/*
 * XREFs of ?MoveSwitchItemToDesktop@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAUIVirtualDesktop@3456@@Z @ 0x1804950D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18004FB70 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18004FC0C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z @ 0x180050F60 (-copy_from_abi@winrt@@YAXAEAUIUnknown@Foundation@Windows@1@PEAX@Z.c)
 *     ?GetSwitchItemWinrt@VirtualDesktopController@@AEAA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAU23456@@Z @ 0x1800525B4 (-GetSwitchItemWinrt@VirtualDesktopController@@AEAA-AUISwitchItem@Multitasking@ComposableShell@In.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x1801343EC (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AVSyncLockShared@Details@234@PEAU_RTL_SRWLOCK@@@Z.c)
 *     ?InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ @ 0x1804945E0 (-InitializeTaskGroupController@VirtualDesktopController@@AEAAXXZ.c)
 *     ?MoveToDesktop@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskGroupSwitchItemController@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUISwitchItem@Multitasking@ComposableShell@Internal@Windows@3@AEBUIVirtualDesktop@56783@@Z @ 0x1804952C0 (-MoveToDesktop@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController@UTaskG.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall VirtualDesktopController::MoveSwitchItemToDesktop(
        RTL_SRWLOCK *this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2,
        struct IUnknown *a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  void *v9; // r8
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v12; // eax
  VirtualDesktopController *v13; // rcx
  PVOID Ptr; // rdi
  __int64 (__fastcall *v15)(PVOID, struct IApplicationView *, _QWORD); // rbx
  _QWORD *v16; // rax
  struct IApplicationView *v17; // [rsp+20h] [rbp-20h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  __int64 v22; // [rsp+78h] [rbp+38h] BYREF

  Microsoft::WRL::Wrappers::SRWLock::LockShared(&SRWLock, this + 17);
  if ( !this[11].Ptr )
  {
    v7 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x112,
      (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
      (const char *)0x8007139FLL);
LABEL_13:
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
    return (unsigned int)v7;
  }
  VirtualDesktopController::GetSwitchItemWinrt(v6, (winrt *)&v22, a2);
  v21 = v22;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v21);
  if ( !VirtualDesktopController::IsTaskGroupSwitchItem(
          v8,
          (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21) )
  {
    v21 = 0LL;
    QueryInterface = a3->lpVtbl->QueryInterface;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    v12 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
            a3,
            &GUID_ead341c8_6a95_4b6a_9e8f_37d7170f85f2,
            &v21);
    v7 = v12;
    if ( v12 >= 0 )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
      VirtualDesktopController::GetApplicationViewFromSwitchItem(v13, a2, &v17);
      Ptr = this[11].Ptr;
      v15 = *(__int64 (__fastcall **)(PVOID, struct IApplicationView *, _QWORD))(*(_QWORD *)Ptr + 32LL);
      v16 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 24LL))(v21, v19);
      v7 = v15(Ptr, v17, *v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v19);
      if ( v7 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x124,
          (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
          (const char *)(unsigned int)v7);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11F,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)v12);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
    goto LABEL_13;
  }
  VirtualDesktopController::InitializeTaskGroupController((VirtualDesktopController *)this);
  v21 = 0LL;
  winrt::copy_from_abi((winrt *)&v21, a3, v9);
  winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroupSwitchItemController<winrt::Windows::Internal::Shell::TaskGroups::TaskGroupSwitchItemController>::MoveToDesktop(
    &this[16],
    &v22,
    &v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v21);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v22);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
