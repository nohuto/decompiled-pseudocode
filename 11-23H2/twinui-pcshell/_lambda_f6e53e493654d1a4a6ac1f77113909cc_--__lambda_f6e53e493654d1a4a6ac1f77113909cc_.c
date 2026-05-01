/*
 * XREFs of _lambda_f6e53e493654d1a4a6ac1f77113909cc_::__lambda_f6e53e493654d1a4a6ac1f77113909cc_ @ 0x18024F680
 * Callers:
 *     wil::details::lambda_call__lambda_f6e53e493654d1a4a6ac1f77113909cc___::_lambda_call__lambda_f6e53e493654d1a4a6ac1f77113909cc___ @ 0x18024F77C (wil--details--lambda_call__lambda_f6e53e493654d1a4a6ac1f77113909cc___--_lambda_call__lambda_f6e5.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1806A0AB4 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ??1hstring@winrt@@QEAA@XZ @ 0x1800B498C (--1hstring@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_f6e53e493654d1a4a6ac1f77113909cc_::__lambda_f6e53e493654d1a4a6ac1f77113909cc_(__int64 a1)
{
  winrt::hstring::~hstring((void **)(a1 + 32));
  return std::wstring::_Tidy_deallocate(a1);
}
