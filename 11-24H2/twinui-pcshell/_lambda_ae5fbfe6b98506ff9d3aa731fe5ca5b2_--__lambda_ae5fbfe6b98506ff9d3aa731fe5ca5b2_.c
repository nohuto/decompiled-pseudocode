/*
 * XREFs of _lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_ @ 0x1805E32EC
 * Callers:
 *     wil::details::lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___::_lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___ @ 0x1805E3454 (wil--details--lambda_call__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2___--_lambda_call__lambda_ae5f.c)
 *     _anonymous_namespace_::CreateTileInStoreIfNeeded @ 0x1805E5528 (_anonymous_namespace_--CreateTileInStoreIfNeeded.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x180053844 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

void __fastcall lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_::__lambda_ae5fbfe6b98506ff9d3aa731fe5ca5b2_(
        volatile signed __int32 **a1)
{
  winrt::handle_type<winrt::impl::hstring_traits>::close(a1 + 4);
  std::wstring::_Tidy_deallocate((void **)a1);
}
