/*
 * XREFs of ?OnWindowRemoved@CUIHierarchy@@AEAAXUWindowWatcher@WindowManagement@ApplicationModel@Internal@Windows@winrt@@UWindowChangedEventArgs@34567@@Z @ 0x1800A9B80
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000F254 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?AppModel@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180026FC0 (-AppModel@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowMa.c)
 *     ?Id@?$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180027020 (-Id@-$consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow@UIWindow@WindowManageme.c)
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?RemoveWindow@CUIHierarchy@@AEAA?AV?$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z @ 0x1800A9E58 (-RemoveWindow@CUIHierarchy@@AEAA-AV-$ComPtr@UCUIWindow@@@WRL@Microsoft@@_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CUIHierarchy::OnWindowRemoved(
        __int64 a1,
        winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2,
        __int64 **a3)
{
  __int64 *v6; // rax
  unsigned int v7; // ebx
  _QWORD v8[5]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  v6 = winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::AppModel(
         a3,
         v8);
  v7 = *winrt::impl::consume_Windows_Internal_ApplicationModel_WindowManagement_IWindow<winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow>::Id(
          v6,
          &v9);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)v8);
  CUIHierarchy::RemoveWindow(a1, &v9, v7);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v9);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow(a2);
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)a3);
}
