/*
 * XREFs of ?stoul@std@@YAKAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@1@PEA_KH@Z @ 0x180664D9C
 * Callers:
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int___________ @ 0x180661960 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hstring_std--uno.c)
 *     _lambda_8c1f6654c547dc66508309fc47ecefe4_::operator()_std::unordered_map_winrt::hstring_std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64____std::hash_winrt::hstring__std::equal_to_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64__std::allocator_unsigned___int64___________ @ 0x180661CB8 (_lambda_8c1f6654c547dc66508309fc47ecefe4_--operator()_std--unordered_map_winrt--hst_ea_180661CB8.c)
 * Callees:
 *     <none>
 */

void __fastcall std::stoul(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rax
  _DWORD *v4; // rdi
  _QWORD *v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  v2 = a1;
  v3 = (_DWORD *)_o__errno(a1, a2);
  v4 = v3;
  if ( v2[3] > 0xFuLL )
    v2 = (_QWORD *)*v2;
  v5 = 0LL;
  *v3 = 0;
  _o_strtoul(v2, &v5, 10LL);
  if ( v2 == v5 )
  {
    std::_Xinvalid_argument("invalid stoul argument");
    __debugbreak();
  }
  if ( *v4 == 34 )
  {
    std::_Xout_of_range("stoul argument out of range");
    __debugbreak();
  }
}
