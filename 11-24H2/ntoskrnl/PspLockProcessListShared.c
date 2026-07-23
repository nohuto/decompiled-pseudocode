/*
 * XREFs of PspLockProcessListShared @ 0x14040B0F0
 * Callers:
 *     PsGetPreviousProcess @ 0x1408618BC (PsGetPreviousProcess.c)
 *     PsChangeQuantumTable @ 0x140A261A0 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x140A30430 (PsGetNextProcessEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  char *v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = (char *)KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v1, (__int64)&PspActiveProcessLock);
  if ( v1 )
    v1[10] = 1;
  return result;
}
