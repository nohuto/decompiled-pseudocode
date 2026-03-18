/*
 * XREFs of KiSrcuFlushCompletedDpcRoutine @ 0x1405BCF70
 * Callers:
 *     <none>
 * Callees:
 *     KiSrcuFlushCompleted @ 0x1405BCE34 (KiSrcuFlushCompleted.c)
 */

void __fastcall KiSrcuFlushCompletedDpcRoutine(__int64 a1, __int64 a2)
{
  KiSrcuFlushCompleted(a2);
}
