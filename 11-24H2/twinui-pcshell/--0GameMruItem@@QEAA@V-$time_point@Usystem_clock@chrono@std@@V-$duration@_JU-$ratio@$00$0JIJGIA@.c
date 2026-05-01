/*
 * XREFs of ??0GameMruItem@@QEAA@V?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@11@Z @ 0x180218F40
 * Callers:
 *     ??$make_shared@UGameMruItem@@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@std@@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@4@AEAV54@AEAV54@@std@@YA?AV?$shared_ptr@UGameMruItem@@@0@AEAV?$time_point@Usystem_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0JIJGIA@@std@@@23@@chrono@0@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@11@Z @ 0x180314C44 (--$make_shared@UGameMruItem@@AEAV-$time_point@Usystem_clock@chrono@std@@V-$duration@_JU-$ratio@$.c)
 * Callees:
 *     ??$?0V?$basic_string_view@GU?$char_traits@G@std@@@std@@$0A@@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@1@AEBV?$allocator@G@1@@Z @ 0x180046E18 (--$-0V-$basic_string_view@GU-$char_traits@G@std@@@std@@$0A@@-$basic_string@GU-$char_traits@G@std.c)
 */

__int64 __fastcall GameMruItem::GameMruItem(__int64 a1, __int64 a2, __int128 *a3, __int128 *a4, __int128 *a5)
{
  *(_QWORD *)a1 = a2;
  std::wstring::wstring((char **)(a1 + 8), a3);
  std::wstring::wstring((char **)(a1 + 40), a4);
  std::wstring::wstring((char **)(a1 + 72), a5);
  return a1;
}
