/*
 * XREFs of ?GetTaskbarLayout@CUndockedSearchAppExperienceManagerConfig@@UEAA?AUTaskbarLayout@Shell@UI@WindowsUdk@winrt@@XZ @ 0x180244100
 * Callers:
 *     <none>
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ?Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ @ 0x1801CCC38 (-Current@TaskbarLayout@Shell@UI@WindowsUdk@winrt@@SA@XZ.c)
 */

__int64 *__fastcall CUndockedSearchAppExperienceManagerConfig::GetTaskbarLayout(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rdi
  __int64 *v4; // rax
  __int64 *v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = a2;
  v2 = (__int64 *)(a1 + 24);
  if ( !*(_QWORD *)(a1 + 24) )
  {
    v4 = winrt::WindowsUdk::UI::Shell::TaskbarLayout::Current(&v6);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(v2, v4);
    winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  }
  *a2 = *v2;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
