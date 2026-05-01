/*
 * XREFs of ??$Make@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWindowWrapper@@@12@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x180415BF0
 * Callers:
 *     ??$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@4567@AEAW4AppModelKind@4567@AEAUAppViewId@4567@PEAUIWindow@4567@AEAUWindowId@4567@PEBGW4WindowCreatedType@@@wil@@YA?AV?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@$$QEAPEAVWindowEventDispatcher@@$$QEAPEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@$$QEAPEAUIAppModel@6789@AEAW4AppModelKind@6789@AEAUAppViewId@6789@$$QEAPEAUIWindow@6789@AEAUWindowId@6789@$$QEAPEBG$$QEAW4WindowCreatedType@@@Z @ 0x180416748 (--$MakeOrThrow@VWindowWrapper@@PEAVWindowEventDispatcher@@PEAUIAppView@WindowManage_ea_180416748.c)
 * Callees:
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18001522C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D16C4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?Attach@?$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z @ 0x18041D700 (-Attach@-$ComPtr@VWindowWrapper@@@WRL@Microsoft@@QEAAXPEAVWindowWrapper@@@Z.c)
 *     ??0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@ApplicationModel@Internal@Windows@@PEAUIAppModel@3456@W4AppModelKind@3456@UAppViewId@3456@PEAUIWindow@3456@UWindowId@3456@PEBGW4WindowCreatedType@@@Z @ 0x180432BE4 (--0WindowWrapper@@QEAA@PEAUIWindowEventDispatcherInternal@@PEAUIAppView@WindowManagement@Applica.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Microsoft::WRL::Details::Make<WindowWrapper,WindowEventDispatcher *,Windows::Internal::ApplicationModel::WindowManagement::IAppView *,Windows::Internal::ApplicationModel::WindowManagement::IAppModel *,enum Windows::Internal::ApplicationModel::WindowManagement::AppModelKind &,Windows::Internal::ApplicationModel::WindowManagement::AppViewId &,Windows::Internal::ApplicationModel::WindowManagement::IWindow *,Windows::Internal::ApplicationModel::WindowManagement::WindowId &,unsigned short const *,enum WindowCreatedType>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _QWORD *a7,
        _DWORD *a8,
        _QWORD *a9,
        _DWORD *a10)
{
  void *v14; // rax
  __int64 v15; // rax
  void *v17; // [rsp+58h] [rbp-40h] BYREF
  void *v18; // [rsp+60h] [rbp-38h]
  void *v19; // [rsp+68h] [rbp-30h]

  *a1 = 0LL;
  v14 = operator new(0x2C8uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v14;
  v18 = v14;
  if ( v14 )
  {
    v19 = v14;
    v15 = WindowWrapper::WindowWrapper(
            v14,
            (*a2 + 16LL) & -(__int64)(*a2 != 0LL),
            *a3,
            *a4,
            *a5,
            *a6,
            *a7,
            *a8,
            *a9,
            *a10,
            1,
            v17,
            v18,
            v14);
    Microsoft::WRL::ComPtr<WindowWrapper>::Attach(a1, v15);
    v17 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
  return a1;
}
