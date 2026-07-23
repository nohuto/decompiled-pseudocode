/*
 * XREFs of ViWdStartTimer @ 0x140B9ED4C
 * Callers:
 *     VfWdCheckForSettingsChange @ 0x140B9E898 (VfWdCheckForSettingsChange.c)
 *     ViWdIrpTimerDpcRoutine @ 0x140B9EC20 (ViWdIrpTimerDpcRoutine.c)
 * Callees:
 *     KiSetTimerEx @ 0x140316810 (KiSetTimerEx.c)
 */

__int64 ViWdStartTimer()
{
  return KiSetTimerEx((__int64)&ViWdIrpTimer, -10000000LL, 0, 0, (__int64)&ViWdIrpTimerDpc);
}
