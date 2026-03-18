/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1406B58A0
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140496BE0 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140695170 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1406B5880 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
