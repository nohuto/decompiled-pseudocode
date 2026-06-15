/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x1800BFDE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<std::wstring>::_Destroy(__int64 a1, __int64 a2)
{
  return std::wstring::_Tidy_deallocate(a1 + 16, a2);
}
