/*
 * XREFs of sub_180011B8C @ 0x180011B8C
 * Callers:
 *     sub_180011500 @ 0x180011500 (sub_180011500.c)
 *     sub_18001C4F4 @ 0x18001C4F4 (sub_18001C4F4.c)
 *     sub_18001F430 @ 0x18001F430 (sub_18001F430.c)
 *     sub_180023F84 @ 0x180023F84 (sub_180023F84.c)
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_180025690 @ 0x180025690 (sub_180025690.c)
 *     sub_180025780 @ 0x180025780 (sub_180025780.c)
 *     sub_18002F328 @ 0x18002F328 (sub_18002F328.c)
 *     sub_180030E44 @ 0x180030E44 (sub_180030E44.c)
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_1800336B0 @ 0x1800336B0 (sub_1800336B0.c)
 *     sub_18003385C @ 0x18003385C (sub_18003385C.c)
 *     sub_1800340C4 @ 0x1800340C4 (sub_1800340C4.c)
 *     sub_180034C38 @ 0x180034C38 (sub_180034C38.c)
 *     sub_1800355DC @ 0x1800355DC (sub_1800355DC.c)
 *     sub_1800356CC @ 0x1800356CC (sub_1800356CC.c)
 *     sub_180035B30 @ 0x180035B30 (sub_180035B30.c)
 *     sub_180053528 @ 0x180053528 (sub_180053528.c)
 *     sub_180095084 @ 0x180095084 (sub_180095084.c)
 *     sub_180095120 @ 0x180095120 (sub_180095120.c)
 *     sub_18009521C @ 0x18009521C (sub_18009521C.c)
 *     sub_180096100 @ 0x180096100 (sub_180096100.c)
 *     sub_1800BDB30 @ 0x1800BDB30 (sub_1800BDB30.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180011B8C(__int64 *a1)
{
  __int64 perf_frequency; // rdi
  __int64 perf_counter; // rax
  __int64 v4; // rax

  perf_frequency = Query_perf_frequency();
  perf_counter = Query_perf_counter();
  if ( perf_frequency == 10000000 )
  {
    v4 = 100 * perf_counter;
LABEL_6:
    *a1 = v4;
    return a1;
  }
  if ( perf_frequency != 24000000 )
  {
    v4 = 1000000000 * (perf_counter / perf_frequency) + 1000000000 * (perf_counter % perf_frequency) / perf_frequency;
    goto LABEL_6;
  }
  *a1 = 1000000000 * (perf_counter / 24000000) + 1000000000 * (perf_counter % 24000000) / 24000000;
  return a1;
}
