/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1406AA5D0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x1404970A0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140689D20 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1406AA5B0 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
