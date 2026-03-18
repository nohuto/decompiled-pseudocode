/*
 * XREFs of ??$_Get_size_of_n@$0GI@@std@@YA_K_K@Z @ 0x1801804D4
 * Callers:
 *     ??$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@?$vector@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@V?$allocator@UProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@std@@@std@@AEAAPEAUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@QEAU23@AEBU23@@Z @ 0x180180330 (--$_Emplace_reallocate@AEBUProcessResourceUsageRecord@CProcessResourceAttributionReporter@@@-$ve.c)
 *     ??$_Emplace_reallocate@$$V@?$vector@USuperWetStroke@CSuperWetInkManager@@V?$allocator@USuperWetStroke@CSuperWetInkManager@@@std@@@std@@AEAAPEAUSuperWetStroke@CSuperWetInkManager@@QEAU23@@Z @ 0x180269F4C (--$_Emplace_reallocate@$$V@-$vector@USuperWetStroke@CSuperWetInkManager@@V-$allocator@USuperWetS.c)
 * Callees:
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180250B48 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

__int64 __fastcall std::_Get_size_of_n<104>(unsigned __int64 a1)
{
  if ( a1 > 0x276276276276276LL )
    std::_Throw_bad_array_new_length();
  return 104 * a1;
}
