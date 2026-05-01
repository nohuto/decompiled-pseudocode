/*
 * XREFs of ?check_scope@input_scope@impl@winrt@@QEBAXXZ @ 0x1801EA01C
 * Callers:
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1801E9F10 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstr.c)
 *     ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1801E9FA0 (-MoveNext@-$produce@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring.c)
 *     ?First@?$produce@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IIterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x180374530 (-First@-$produce@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foun.c)
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAPEAXPEAI@Z @ 0x180374B50 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uhstring@.c)
 *     ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$scoped_input_iterable@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@PEBU?$pair@$$CBUhstring@winrt@@U12@@std@@@impl@winrt@@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@3@Uno_collection_version@23@@winrt@@U?$IIterator@U?$IKeyValuePair@Uhstring@winrt@@U12@@Collections@Foundation@Windows@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x180377550 (-get_HasCurrent@-$produce@Uiterator@-$iterable_base@U-$scoped_input_iterable@U-$IKeyValuePair@Uh.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x1802D25D8 (_CxxThrowException_0.c)
 *     ?current@slim_source_location@impl@winrt@@SA?AU123@IQEBD0@Z @ 0x1802DDF04 (-current@slim_source_location@impl@winrt@@SA-AU123@IQEBD0@Z.c)
 *     ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x18032CCE0 (--0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z.c)
 */

void __fastcall winrt::impl::input_scope::check_scope(winrt::impl::input_scope *this)
{
  const struct winrt::impl::slim_source_location *v1; // rax
  _BYTE pExceptionObject[24]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v3[32]; // [rsp+38h] [rbp-20h] BYREF

  if ( *(_BYTE *)this )
  {
    v1 = (const struct winrt::impl::slim_source_location *)winrt::impl::slim_source_location::current(v3);
    winrt::hresult_illegal_method_call::hresult_illegal_method_call(
      (winrt::hresult_illegal_method_call *)pExceptionObject,
      v1);
    throw (winrt::hresult_illegal_method_call *)pExceptionObject;
  }
}
