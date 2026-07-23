/*
 * XREFs of KiFlushBhbDuringTrapEntryOrExitTsx @ 0x1406C0800
 * Callers:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x1406C0640 (KiFlushBhbDuringTrapEntryOrExit.c)
 * Callees:
 *     <none>
 */

void KiFlushBhbDuringTrapEntryOrExitTsx()
{
  __asm
  {
    xbegin  locret_1406C080D
    xabort  0
  }
  _mm_lfence();
  __debugbreak();
}
