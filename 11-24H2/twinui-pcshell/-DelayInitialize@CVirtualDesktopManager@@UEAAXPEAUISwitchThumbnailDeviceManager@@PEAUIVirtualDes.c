/*
 * XREFs of ?DelayInitialize@CVirtualDesktopManager@@UEAAXPEAUISwitchThumbnailDeviceManager@@PEAUIVirtualDesktopSwitchAnimator@@PEAUIImmersiveSettingsCache@@PEAUIMultitaskingViewServiceProvider@@@Z @ 0x1805533C0
 * Callers:
 *     <none>
 * Callees:
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x18014403C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CVirtualDesktopManager::DelayInitialize(
        CVirtualDesktopManager *this,
        struct ISwitchThumbnailDeviceManager *a2,
        struct IVirtualDesktopSwitchAnimator *a3,
        struct IImmersiveSettingsCache *a4,
        struct IMultitaskingViewServiceProvider *a5)
{
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 *v10; // rbx
  __int64 v11; // rax
  int v12; // eax
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 30, (__int64)a2);
  v8 = *((_QWORD *)this + 28);
  *((_QWORD *)this + 28) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct IVirtualDesktopSwitchAnimator *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 29, (__int64)a4);
  v9 = *((_QWORD *)this + 33);
  *((_QWORD *)this + 33) = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IMultitaskingViewServiceProvider *))(*(_QWORD *)a5 + 8LL))(a5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v13 = 0LL;
  winrt::impl::resume_apartment_context::resume_apartment_context((winrt::impl::resume_apartment_context *)&v13);
  v10 = (__int64 *)((char *)this + 248);
  if ( v10 != (__int64 *)&v13 )
  {
    if ( *v10 )
      winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(v10);
    v11 = v13;
    *(_QWORD *)&v13 = 0LL;
    *v10 = v11;
  }
  v12 = DWORD2(v13);
  DWORD2(v13) = -1;
  *((_DWORD *)v10 + 2) = v12;
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v13);
}
