/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1406B4600
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406B4440 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1406B460D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
