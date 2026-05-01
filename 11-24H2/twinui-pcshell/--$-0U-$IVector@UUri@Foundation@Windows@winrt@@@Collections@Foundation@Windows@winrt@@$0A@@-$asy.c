/*
 * XREFs of ??$?0U?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@winrt@@$0A@@?$async_iterable@UUri@Foundation@Windows@winrt@@@param@winrt@@QEAA@AEBU?$IVector@UUri@Foundation@Windows@winrt@@@Collections@Foundation@Windows@2@@Z @ 0x1805C22D0
 * Callers:
 *     LockScreenWidgetPackageHelperBase::InstallInboxedPackageAsync$_ResumeCoro$1 @ 0x1805D35C0 (LockScreenWidgetPackageHelperBase--InstallInboxedPackageAsync$_ResumeCoro$1.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall winrt::param::async_iterable<winrt::Windows::Foundation::Uri>::async_iterable<winrt::Windows::Foundation::Uri>(
        __int64 a1,
        void (__fastcall ****a2)(_QWORD, __int64 *, __int64 *))
{
  __int64 v2; // rax
  void (__fastcall ***v4)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  *(_BYTE *)(a1 + 8) = 1;
  *(_QWORD *)a1 = 0LL;
  v4 = *a2;
  if ( *a2 )
  {
    v7 = 0LL;
    (**v4)(
      v4,
      &winrt::impl::guid_v<winrt::Windows::Foundation::Collections::IIterable<winrt::Windows::Foundation::Uri>>,
      &v7);
    v2 = v7;
  }
  v6 = v2;
  winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=((__int64 *)a1, &v6);
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v6);
  return a1;
}
