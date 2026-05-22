/*
 * XREFs of ??1?$pair@IUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@QEAA@XZ @ 0x180083C94
 * Callers:
 *     _ViewHierarchyWithWindowManager::OnWindowAdded_::_1_::dtor$3 @ 0x1801C9822 (_ViewHierarchyWithWindowManager--OnWindowAdded_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>::~pair<unsigned int,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>(
        __int64 a1)
{
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)(a1 + 8));
}
