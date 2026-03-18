/*
 * XREFs of ??1?$_Tidy_guard@V?$vector@EV?$allocator@E@std@@@std@@@std@@QEAA@XZ @ 0x14000D5FC
 * Callers:
 *     ??$_Construct_n@$$V@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x14000D234 (--$_Construct_n@$$V@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 * Callees:
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x14000E774 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 */

__int64 __fastcall std::_Tidy_guard<std::vector<unsigned char>>::~_Tidy_guard<std::vector<unsigned char>>(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return std::vector<unsigned char>::_Tidy();
  return result;
}
