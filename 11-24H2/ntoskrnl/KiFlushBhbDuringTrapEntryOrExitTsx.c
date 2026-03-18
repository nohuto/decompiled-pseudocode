/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1406BF900
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406BF740 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1406BF90D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
