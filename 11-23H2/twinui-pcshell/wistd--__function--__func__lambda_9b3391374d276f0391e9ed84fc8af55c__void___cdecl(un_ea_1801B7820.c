/*
 * XREFs of wistd::__function::__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(unsigned_char_const_&)_::destroy @ 0x1801B7820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wistd::__function::__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl_unsigned_char_const____::destroy(
        __int64 a1)
{
  std::_Ref_count_base *v1; // rcx

  v1 = *(std::_Ref_count_base **)(a1 + 16);
  if ( v1 )
    std::_Ref_count_base::_Decref(v1);
}
