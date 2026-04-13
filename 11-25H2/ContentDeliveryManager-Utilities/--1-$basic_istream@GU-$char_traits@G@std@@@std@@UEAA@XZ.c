/*
 * XREFs of ??1?$basic_istream@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18004C214
 * Callers:
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$4 @ 0x1800B838A (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_stri.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$1 @ 0x1800BBAA9 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t__ea_1800BBAA9.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::basic_istream<unsigned short>::~basic_istream<unsigned short,std::char_traits<unsigned short>>(
        __int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(*(int *)(*(_QWORD *)(a1 - 24) + 4LL) + a1 - 24) = &std::basic_istream<unsigned short>::`vftable';
  result = *(_QWORD *)(a1 - 24);
  *(_DWORD *)(*(int *)(result + 4) + a1 - 28) = *(_DWORD *)(result + 4) - 24;
  return result;
}
