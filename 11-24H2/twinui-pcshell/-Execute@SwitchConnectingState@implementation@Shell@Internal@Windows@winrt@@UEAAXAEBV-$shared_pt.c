/*
 * XREFs of ?Execute@SwitchConnectingState@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBV?$shared_ptr@URemoteSessionInformation@implementation@Shell@Internal@Windows@winrt@@@std@@W4CloudPCState@3456@@Z @ 0x18066DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA?AUhstring@6@XZ @ 0x18066B8D4 (-GetWallpaperImagePath@Utils@implementation@Shell@Internal@Windows@winrt@@SA-AUhstring@6@XZ.c)
 *     ?ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IEAAXW4CloudPCState@3456@0@Z @ 0x1806726D4 (-ThrowIllegalStateTransition@ConnectionStateBase@implementation@Shell@Internal@Windows@winrt@@IE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectingState::Execute(
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  void (__fastcall *v5)(__int64, __int64, void *, __int64 *); // rbx
  void *WallpaperImagePath; // rax
  volatile signed __int32 *v7[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( a3 != 1 && a3 != 2 && a3 != 99 )
    winrt::Windows::Internal::Shell::implementation::ConnectionStateBase::ThrowIllegalStateTransition(a1, a3, 0LL);
  v5 = *(void (__fastcall **)(__int64, __int64, void *, __int64 *))(*(_QWORD *)a1 + 8LL);
  v8 = 1200000000LL;
  WallpaperImagePath = winrt::Windows::Internal::Shell::implementation::Utils::GetWallpaperImagePath(v7);
  v5(a1, a2, WallpaperImagePath, &v8);
  winrt::handle_type<winrt::impl::hstring_traits>::close(v7);
}
