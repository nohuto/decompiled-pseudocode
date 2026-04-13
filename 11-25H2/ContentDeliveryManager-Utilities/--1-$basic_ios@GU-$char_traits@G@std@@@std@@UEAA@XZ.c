/*
 * XREFs of ??1?$basic_ios@GU?$char_traits@G@std@@@std@@UEAA@XZ @ 0x18004C1F4
 * Callers:
 *     _std::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_istringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800B8356 (_std--basic_istringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigne.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0 @ 0x1800B8DD8 (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--allocator_unsigned.c)
 *     _std::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::basic_stringstream_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____::_1_::dtor$0_0 @ 0x1800B948B (_std--basic_stringstream_unsigned_short_std--char_traits_unsigned_short__std--alloc_ea_1800B948B.c)
 *     _std::basic_ostringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_ostringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800BA72D (_std--basic_ostringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_ost.c)
 *     _std::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_istringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800BBA75 (_std--basic_istringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___--basic_ist.c)
 *     _std::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t___::basic_stringstream_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____::_1_::dtor$0 @ 0x1800BBF02 (_std--basic_stringstream_wchar_t_std--char_traits_wchar_t__std--allocator_wchar_t___ea_1800BBF02.c)
 * Callees:
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x18000567C (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::basic_ios<unsigned short>::~basic_ios<unsigned short,std::char_traits<unsigned short>>(
        struct std::ios_base *a1)
{
  *(_QWORD *)a1 = &std::ios_base::`vftable';
  std::ios_base::_Ios_base_dtor(a1);
}
