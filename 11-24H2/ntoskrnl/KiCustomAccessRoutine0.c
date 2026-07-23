/*
 * XREFs of KiCustomAccessRoutine0 @ 0x1406B6840
 * Callers:
 *     ExpTimerDpcRoutine @ 0x140491570 (ExpTimerDpcRoutine.c)
 *     FsRtlTruncateSmallMcb @ 0x140696240 (FsRtlTruncateSmallMcb.c)
 * Callees:
 *     KiCustomRecurseRoutine0 @ 0x1406B6820 (KiCustomRecurseRoutine0.c)
 */

__int64 __fastcall KiCustomAccessRoutine0(unsigned int *a1)
{
  return KiCustomRecurseRoutine0(((unsigned __int8)a1 & 3u) + 1, a1);
}
