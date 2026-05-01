/*
 * XREFs of ??$AddRefCountWrappers@PEAUIVirtualDesktop@@@@YAJV?$tuple@PEAUIVirtualDesktop@@@std@@PEAV?$tuple@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@1@@Z @ 0x18054CB8C
 * Callers:
 *     ??$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@@CVirtualDesktopNotifications@@IEAAJP8IVirtualDesktopNotification@@EAAJPEAUIVirtualDesktop@@@Z0@Z @ 0x18054D1C0 (--$_ForwardVirtualDesktopNotification2@UIVirtualDesktopNotification@@PEAUIVirtualDesktop@@@CVirt.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18001C8F0 (--1-$ComPtr@UIPackage@StateRepository@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??4?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1802C1D38 (--4-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall AddRefCountWrappers<IVirtualDesktop *>(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v2 = *a1;
  v6 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v6, v2);
  v4 = v6;
  v6 = 0LL;
  v7 = v4;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v6);
  Microsoft::WRL::ComPtr<IClassicWindow>::operator=(a2, (char *)&v7);
  Microsoft::WRL::ComPtr<Windows::Internal::StateRepository::IPackage>::~ComPtr<Windows::Internal::StateRepository::IPackage>(&v7);
  return 0LL;
}
