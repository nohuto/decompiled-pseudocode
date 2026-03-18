/*
 * XREFs of ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x14001023C
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000FED8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::chrono::steady_clock::now(__int64 *a1)
{
  __int64 perf_frequency; // rdi
  __int64 perf_counter; // rax
  __int64 v4; // rax

  perf_frequency = _Query_perf_frequency();
  perf_counter = _Query_perf_counter();
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
