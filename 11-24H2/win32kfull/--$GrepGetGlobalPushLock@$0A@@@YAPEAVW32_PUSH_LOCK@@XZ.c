/*
 * XREFs of ??$GrepGetGlobalPushLock@$0A@@@YAPEAVW32_PUSH_LOCK@@XZ @ 0x140152610
 * Callers:
 *     GreAcquireEUDCPushLockExclusive2 @ 0x140152420 (GreAcquireEUDCPushLockExclusive2.c)
 *     GreReleaseEUDCPushLockExclusive2 @ 0x1401525F0 (GreReleaseEUDCPushLockExclusive2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GrepGetGlobalPushLock<0>(__int64 a1, __int64 a2, __int64 a3)
{
  return *(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 13496LL;
}
