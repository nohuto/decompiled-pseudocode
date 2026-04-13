/*
 * XREFs of _std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor$7 @ 0x1800B7061
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18002A33C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor_7(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 4;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~4u;
    return std::string::~string(a2 + 312, a2);
  }
  return result;
}
