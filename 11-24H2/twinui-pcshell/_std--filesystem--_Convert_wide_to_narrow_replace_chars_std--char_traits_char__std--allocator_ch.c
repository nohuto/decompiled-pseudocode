/*
 * XREFs of _std::filesystem::_Convert_wide_to_narrow_replace_chars_std::char_traits_char__std::allocator_char____::_1_::dtor$0 @ 0x1806DF7BC
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18031535C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::filesystem::_Convert_wide_to_narrow_replace_chars_std::char_traits_char__std::allocator_char____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return std::string::~string(*(_QWORD *)(a2 + 176));
  }
  return result;
}
