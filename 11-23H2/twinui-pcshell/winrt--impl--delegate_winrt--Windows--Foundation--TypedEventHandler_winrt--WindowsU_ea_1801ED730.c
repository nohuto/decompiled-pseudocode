/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___lambda_52b9999996331d993261a6e44ac3e037___::Invoke @ 0x1801ED730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??8winrt@@YA_NAEBUhstring@0@0@Z @ 0x18004CF30 (--8winrt@@YA_NAEBUhstring@0@0@Z.c)
 *     ??$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIInspectable@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800DEC74 (--$As@UIInspectable@@@WeakRef@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@UIInspectable@@@WRL@Mic.c)
 *     ??$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVUndockedSearchAppExperienceManager@@$$T@Z @ 0x1800E1388 (--$InvokeAll@PEAVUndockedSearchAppExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEA.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1800E8E74 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::WindowsUdk::UI::Shell::SearchAppHost_winrt::hstring___lambda_52b9999996331d993261a6e44ac3e037___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  struct IInspectable *v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF

  v8 = a3;
  v7 = 0LL;
  if ( (int)Microsoft::WRL::WeakRef::As<IInspectable>((Microsoft::WRL::WeakRef *)(a1 + 16), &v7) >= 0 )
  {
    if ( v7 )
    {
      Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<UndockedSearchAppExperienceManager *,std::nullptr_t>(
        *(_QWORD *)(a1 + 8) + 680LL,
        *(_QWORD *)(a1 + 8));
      v4 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int8)winrt::operator==(v4 + 840, (__int64)&v8, v5) )
      {
        try
        {
          ExperienceManagerUtils::PostToUIThread(
            *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(v4 + 56),
            (struct IUnknown *)v4,
            (void *)0x401,
            12LL);
        }
        catch ( ... )
        {
          return *(unsigned int *)winrt::to_hresult(&v7);
        }
      }
    }
  }
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v7);
  return 0LL;
}
