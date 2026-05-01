/*
 * XREFs of ?PinUnPinSwitchItemToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180495380
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@@Z @ 0x18004FB70 (-IsTaskGroupSwitchItem@VirtualDesktopController@@AEAA_NUISwitchItem@Multitasking@ComposableShell.c)
 *     ?GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18004FC0C (-GetApplicationViewFromSwitchItem@VirtualDesktopController@@AEAAJPEAUISwitchItem@Multitasking@Co.c)
 *     ?GetSwitchItemWinrt@VirtualDesktopController@@AEAA?AUISwitchItem@Multitasking@ComposableShell@Internal@Windows@winrt@@PEAU23456@@Z @ 0x1800525B4 (-GetSwitchItemWinrt@VirtualDesktopController@@AEAA-AUISwitchItem@Multitasking@ComposableShell@In.c)
 *     ?IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAE@Z @ 0x180494BB0 (-IsSwitchItemPinnedToAllDesktops@VirtualDesktopController@@UEAAJPEAUISwitchItem@Multitasking@Com.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall VirtualDesktopController::PinUnPinSwitchItemToAllDesktops(
        __int64 **this,
        struct Windows::Internal::ComposableShell::Multitasking::ISwitchItem *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  VirtualDesktopController *v6; // rcx
  int ApplicationViewFromSwitchItem; // eax
  struct IApplicationView *v8; // rbx
  int (__fastcall *v9)(struct IApplicationView *, __int64 *); // rdi
  __int64 *v10; // rcx
  __int64 v11; // rax
  __int64 v13; // [rsp+20h] [rbp-20h] BYREF
  __int64 v14; // [rsp+28h] [rbp-18h] BYREF
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v18; // [rsp+70h] [rbp+30h] BYREF
  struct IApplicationView *v19; // [rsp+78h] [rbp+38h] BYREF

  VirtualDesktopController::GetSwitchItemWinrt((__int64)this, (winrt *)&v13, a2);
  v18 = v13;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v18);
  if ( VirtualDesktopController::IsTaskGroupSwitchItem(
         v4,
         (winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v18) )
  {
    v5 = -2147467259;
  }
  else
  {
    v19 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    ApplicationViewFromSwitchItem = VirtualDesktopController::GetApplicationViewFromSwitchItem(v6, a2, &v19);
    v5 = ApplicationViewFromSwitchItem;
    if ( ApplicationViewFromSwitchItem >= 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v16 = 0LL;
      v8 = v19;
      v9 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)v19 + 136LL);
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
      v15 = -1LL;
      v16 = -1LL;
      if ( v9(v8, &v14) >= 0 )
      {
        LOBYTE(v18) = 0;
        VirtualDesktopController::IsSwitchItemPinnedToAllDesktops((VirtualDesktopController *)this, a2, (bool *)&v18);
        v10 = this[14];
        v11 = *v10;
        if ( (_BYTE)v18 )
          (*(void (__fastcall **)(__int64 *, __int64))(v11 + 40))(v10, v14);
        else
          (*(void (__fastcall **)(__int64 *, __int64))(v11 + 32))(v10, v14);
      }
      Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v14);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
      v5 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1A0,
        (int)"pcshell\\twinui\\virtualdesktopdatasource\\lib\\virtualdesktopcontroller.cpp",
        (const char *)(unsigned int)ApplicationViewFromSwitchItem);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v19);
    }
  }
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
  return v5;
}
