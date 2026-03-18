/*
 * XREFs of PspLockProcessListShared @ 0x14041B0F0
 * Callers:
 *     PsGetPreviousProcess @ 0x1408F00BC (PsGetPreviousProcess.c)
 *     PsChangeQuantumTable @ 0x140A32230 (PsChangeQuantumTable.c)
 *     PsGetNextProcessEx @ 0x140A3AC50 (PsGetNextProcessEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  _QWORD *v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)&PspActiveProcessLock, 0, v1, (__int64)&PspActiveProcessLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
