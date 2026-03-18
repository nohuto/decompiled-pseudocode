/*
 * XREFs of MiLockDynamicMemoryNestedExclusive @ 0x140662300
 * Callers:
 *     MiAcquireAddMemoryLocks @ 0x1407D86A8 (MiAcquireAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x1407EF900 (MiNodeZeroConductor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *MiLockDynamicMemoryNestedExclusive()
{
  __int64 *result; // rax
  __int64 *v1; // rbx

  result = KeAbPreAcquire((__int64)&qword_140E38A80, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E38A80, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&qword_140E38A80, result, (__int64)&qword_140E38A80);
  if ( v1 )
    *((_BYTE *)v1 + 10) = 1;
  return result;
}
