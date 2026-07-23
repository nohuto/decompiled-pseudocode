/*
 * XREFs of KiRcuFlushCompletedDpcRoutine @ 0x1405B9520
 * Callers:
 *     <none>
 * Callees:
 *     KiRcuFlushCompleted @ 0x14031C9F0 (KiRcuFlushCompleted.c)
 */

void __fastcall KiRcuFlushCompletedDpcRoutine(__int64 a1, __int64 a2)
{
  KiRcuFlushCompleted(1LL, a2);
}
