/*
 * XREFs of _lambda_3415c00afb736d6d54203eb8c7c58983_::__lambda_3415c00afb736d6d54203eb8c7c58983_ @ 0x18059CA34
 * Callers:
 *     winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x18059A9A0 (winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_3415c00afb73.c)
 *     winrt::impl::implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___::_implements_delegate_winrt::Windows::System::Threading::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983___ @ 0x18059CC7C (winrt--impl--implements_delegate_winrt--Windows--System--Threading--TimerElapsedHan_ea_18059CC7C.c)
 *     _winrt::Windows::System::Threading::TimerElapsedHandler::TimerElapsedHandler__lambda_3415c00afb736d6d54203eb8c7c58983____::_1_::dtor$0 @ 0x1806F6524 (_winrt--Windows--System--Threading--TimerElapsedHandler--TimerElapsedHandler__lambda_3415c00afb7.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall lambda_3415c00afb736d6d54203eb8c7c58983_::__lambda_3415c00afb736d6d54203eb8c7c58983_(__int64 *a1)
{
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)(a1 + 1));
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(a1);
}
