/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_792e2b5f338484b498a9aaa997a4c547___::Invoke @ 0x1800E8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 *     ?UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged@SearchAppExperienceManagerTelemetry@@SAXXZ @ 0x1800E8FD8 (-UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged@SearchAppExperienceManagerTelem.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::TaskbarLayout_winrt::Windows::Foundation::IInspectable___lambda_792e2b5f338484b498a9aaa997a4c547___::Invoke(
        __int64 a1)
{
  __int64 v3; // [rsp+20h] [rbp-8h]
  struct IInspectable *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 16), &v4) >= 0 && v4 )
  {
    SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ShellViewButtonBoundsChanged();
    try
    {
      ExperienceManagerUtils::PostToUIThread(
        *(ExperienceManagerUtils **)(*(_QWORD *)(a1 + 8) + 56LL),
        *(struct IUnknown **)(a1 + 8),
        (void *)0x401,
        0xDu,
        v3);
    }
    catch ( ... )
    {
      return *(unsigned int *)winrt::to_hresult(&v4);
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v4);
  return 0LL;
}
