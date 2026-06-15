/*
 * XREFs of ??0hresult_illegal_method_call@winrt@@QEAA@AEBUslim_source_location@impl@1@@Z @ 0x1800E3C90
 * Callers:
 *     ?First@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IIterable@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAPEAX@Z @ 0x1800E57E0 (-First@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_v.c)
 *     ?GetAt@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUguid@3@@Z @ 0x1800E5890 (-GetAt@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector_v.c)
 *     ?GetMany@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIIPEAUguid@3@PEAI@Z @ 0x1800E5AD0 (-GetMany@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector.c)
 *     ?GetMany@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHIPEAUguid@3@PEAI@Z @ 0x1800E5B70 (-GetMany@-$produce@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector.c)
 *     ?IndexOf@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHUguid@3@PEAIPEA_N@Z @ 0x1800E5EC0 (-IndexOf@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vector.c)
 *     ?MoveNext@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800E6050 (-MoveNext@-$produce@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vecto.c)
 *     ?get_Current@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAUguid@3@@Z @ 0x1800E7F00 (-get_Current@-$produce@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Ve.c)
 *     ?get_HasCurrent@?$produce@Uiterator@?$iterable_base@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@Uguid@3@Uno_collection_version@23@@winrt@@U?$IIterator@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800E7FC0 (-get_HasCurrent@-$produce@Uiterator@-$iterable_base@U-$scoped_input_vector_view@Uguid@winrt@@V-$.c)
 *     ?get_Size@?$produce@U?$scoped_input_vector_view@Uguid@winrt@@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@Uguid@winrt@@@std@@@std@@@std@@@impl@winrt@@U?$IVectorView@Uguid@winrt@@@Collections@Foundation@Windows@3@@impl@winrt@@UEAAHPEAI@Z @ 0x1800E8050 (-get_Size@-$produce@U-$scoped_input_vector_view@Uguid@winrt@@V-$_Vector_const_iterator@V-$_Vecto.c)
 * Callees:
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x1800E3A40 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 */

winrt::hresult_illegal_method_call *__fastcall winrt::hresult_illegal_method_call::hresult_illegal_method_call(
        winrt::hresult_illegal_method_call *this,
        const struct winrt::impl::slim_source_location *a2)
{
  winrt::hresult_error::hresult_error((__int64)this, winrt::impl::error_illegal_method_call);
  return this;
}
