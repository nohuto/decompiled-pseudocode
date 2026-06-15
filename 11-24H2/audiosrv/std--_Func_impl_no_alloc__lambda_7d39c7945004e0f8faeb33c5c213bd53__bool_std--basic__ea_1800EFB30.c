/*
 * XREFs of std::_Func_impl_no_alloc__lambda_7d39c7945004e0f8faeb33c5c213bd53__bool_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____::_Do_call @ 0x1800EFB30
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_7d39c7945004e0f8faeb33c5c213bd53_::operator() @ 0x1800EB0B0 (_lambda_7d39c7945004e0f8faeb33c5c213bd53_--operator().c)
 */

char __fastcall std::_Func_impl_no_alloc__lambda_7d39c7945004e0f8faeb33c5c213bd53__bool_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____::_Do_call(
        __int64 a1,
        __int128 *a2)
{
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  _OWORD v5[2]; // [rsp+20h] [rbp-28h] BYREF

  v2 = *a2;
  v3 = a2[1];
  *((_QWORD *)a2 + 2) = 0LL;
  *(_WORD *)a2 = 0;
  *((_QWORD *)a2 + 3) = 7LL;
  v5[0] = v2;
  v5[1] = v3;
  return lambda_7d39c7945004e0f8faeb33c5c213bd53_::operator()((_QWORD *)(a1 + 8), (__int64)v5);
}
