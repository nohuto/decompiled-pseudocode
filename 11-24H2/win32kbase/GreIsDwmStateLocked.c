/*
 * XREFs of GreIsDwmStateLocked @ 0x140024460
 * Callers:
 *     UserReferenceDwmApiPort @ 0x1400243F0 (UserReferenceDwmApiPort.c)
 *     CheckOrAcquireDwmStateLock @ 0x14006F960 (CheckOrAcquireDwmStateLock.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall GreIsDwmStateLocked(__int64 a1)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(a1);
  return ExIsResourceAcquiredSharedLite((PERESOURCE)(**(_QWORD **)(SessionState + 88) + 520LL)) != 0;
}
