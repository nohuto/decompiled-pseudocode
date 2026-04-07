/*
 * XREFs of ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18009F0F8
 * Callers:
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$1 @ 0x1800F7EF5 (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtException_CppWinRt_::_1_::catch$7 @ 0x1800F809C (_wil--details--ResultFromCaughtException_CppWinRt_--_1_--catch$7.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18008122C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18009A53C (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?message@hresult_error@winrt@@QEBA?AUhstring@2@XZ @ 0x1800A0980 (-message@hresult_error@winrt@@QEBA-AUhstring@2@XZ.c)
 */

void __fastcall wil::details::MaybeGetExceptionString(
        wil::details *this,
        const struct winrt::hresult_error *a2,
        unsigned __int16 *a3)
{
  __int64 v5; // rax
  void *v6; // r9
  void *v7; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 )
  {
    v5 = winrt::hresult_error::message(this, &v7);
    if ( *(_QWORD *)v5 )
      v6 = *(void **)(*(_QWORD *)v5 + 16LL);
    else
      v6 = &unk_180107C78;
    StringCchPrintfW((unsigned __int16 *)a2, (size_t)a3, (size_t *)L"winrt::hresult_error: %ls", v6);
    winrt::handle_type<winrt::impl::hstring_traits>::close(&v7);
  }
}
