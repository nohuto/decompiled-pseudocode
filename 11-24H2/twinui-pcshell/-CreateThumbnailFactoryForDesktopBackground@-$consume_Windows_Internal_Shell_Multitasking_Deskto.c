/*
 * XREFs of ?CreateThumbnailFactoryForDesktopBackground@?$consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice@UDesktopThumbnailDevice@Desktop@Multitasking@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBURect@Foundation@Windows@3@@Z @ 0x1806A6EE0
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18011D884 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802DF798 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::impl::consume_Windows_Internal_Shell_Multitasking_Desktop_IDesktopThumbnailDevice<winrt::Windows::Internal::Shell::Multitasking::Desktop::DesktopThumbnailDevice>::CreateThumbnailFactoryForDesktopBackground(
        __int64 (__fastcall ****a1)(_QWORD, void *, __int64 **),
        _QWORD *a2,
        _OWORD *a3)
{
  __int64 (__fastcall ***v5)(_QWORD, void *, __int64 **); // rcx
  int v6; // eax
  __int64 *v7; // rbx
  __int64 v8; // rax
  int v9; // eax
  _BYTE v11[24]; // [rsp+30h] [rbp-48h] BYREF
  int v12; // [rsp+50h] [rbp-28h] BYREF
  __int128 v13; // [rsp+58h] [rbp-20h]
  __int64 *v14; // [rsp+A0h] [rbp+28h] BYREF
  _QWORD *v15; // [rsp+A8h] [rbp+30h] BYREF
  __int64 *v16; // [rsp+B0h] [rbp+38h] BYREF
  __int64 v17; // [rsp+B8h] [rbp+40h] BYREF

  v15 = a2;
  v17 = 0LL;
  v5 = *a1;
  if ( v5 )
  {
    v14 = 0LL;
    v6 = (**v5)(
           v5,
           &winrt::impl::guid_v<winrt::Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice>,
           &v14);
    v7 = v14;
    v16 = v14;
  }
  else
  {
    v6 = 0;
    v16 = 0LL;
    v7 = 0LL;
  }
  *(_DWORD *)v11 = 0;
  *(_OWORD *)&v11[8] = 0LL;
  winrt::check_hresult((int *)&v15, v6, (__int64)v11);
  v12 = 0;
  v13 = 0LL;
  v8 = *v7;
  *(_OWORD *)v11 = *a3;
  v9 = (*(__int64 (__fastcall **)(__int64 *, _BYTE *, __int64 *))(v8 + 56))(v7, v11, &v17);
  winrt::check_hresult((int *)&v15, v9, (__int64)&v12);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v16);
  *a2 = v17;
  return a2;
}
