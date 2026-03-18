/*
 * XREFs of PspLockProcessListShared @ 0x14041D480
 * Callers:
 *     PsChangeQuantumTable @ 0x1409C0FF8 (PsChangeQuantumTable.c)
 *     PsGetPreviousProcess @ 0x140A3247C (PsGetPreviousProcess.c)
 *     PsGetNextProcessEx @ 0x140A35680 (PsGetNextProcessEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PspLockProcessListShared(__int64 a1)
{
  __int64 *v1; // rbx
  signed __int64 result; // rax

  --*(_WORD *)(a1 + 486);
  v1 = KeAbPreAcquire((__int64)&PspActiveProcessLock, 0LL);
  result = _InterlockedCompareExchange64((volatile signed __int64 *)&PspActiveProcessLock, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx(
               (signed __int64 *)&PspActiveProcessLock,
               0,
               v1,
               (unsigned __int64)&PspActiveProcessLock);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
