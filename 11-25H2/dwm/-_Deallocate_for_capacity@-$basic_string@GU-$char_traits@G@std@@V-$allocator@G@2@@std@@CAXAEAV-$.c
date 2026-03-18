/*
 * XREFs of ?_Deallocate_for_capacity@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@CAXAEAV?$allocator@G@2@QEAG_K@Z @ 0x140010098
 * Callers:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x14000F044 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall std::wstring::_Deallocate_for_capacity(__int64 a1, char *a2, __int64 a3)
{
  std::_Deallocate<16,0>(a2, 2 * a3 + 2);
}
