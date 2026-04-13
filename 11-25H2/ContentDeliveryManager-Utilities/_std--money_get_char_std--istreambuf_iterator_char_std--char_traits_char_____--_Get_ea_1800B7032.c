/*
 * XREFs of _std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor$6 @ 0x1800B7032
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x18002A33C (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 */

__int64 __fastcall std::money_get_char_std::istreambuf_iterator_char_std::char_traits_char_____::_Getmfld_::_1_::dtor_6(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 56) & 2;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 56) &= ~2u;
    return std::string::~string(a2 + 184, a2);
  }
  return result;
}
