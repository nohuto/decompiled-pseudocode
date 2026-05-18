/*
 * XREFs of sub_180011C8C @ 0x180011C8C
 * Callers:
 *     sub_180011600 @ 0x180011600 (sub_180011600.c)
 *     sub_18001C654 @ 0x18001C654 (sub_18001C654.c)
 *     sub_18001F590 @ 0x18001F590 (sub_18001F590.c)
 *     sub_1800240E4 @ 0x1800240E4 (sub_1800240E4.c)
 *     sub_180024CC0 @ 0x180024CC0 (sub_180024CC0.c)
 *     sub_1800257F0 @ 0x1800257F0 (sub_1800257F0.c)
 *     sub_1800258E0 @ 0x1800258E0 (sub_1800258E0.c)
 *     sub_18002F488 @ 0x18002F488 (sub_18002F488.c)
 *     sub_180030FA4 @ 0x180030FA4 (sub_180030FA4.c)
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_180033810 @ 0x180033810 (sub_180033810.c)
 *     sub_1800339BC @ 0x1800339BC (sub_1800339BC.c)
 *     sub_180034224 @ 0x180034224 (sub_180034224.c)
 *     sub_180034D98 @ 0x180034D98 (sub_180034D98.c)
 *     sub_18003573C @ 0x18003573C (sub_18003573C.c)
 *     sub_18003582C @ 0x18003582C (sub_18003582C.c)
 *     sub_180035C90 @ 0x180035C90 (sub_180035C90.c)
 *     sub_180053688 @ 0x180053688 (sub_180053688.c)
 *     sub_1800951E4 @ 0x1800951E4 (sub_1800951E4.c)
 *     sub_180095280 @ 0x180095280 (sub_180095280.c)
 *     sub_18009537C @ 0x18009537C (sub_18009537C.c)
 *     sub_180096260 @ 0x180096260 (sub_180096260.c)
 *     sub_1800BDC90 @ 0x1800BDC90 (sub_1800BDC90.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_180011C8C(__int64 *a1)
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
