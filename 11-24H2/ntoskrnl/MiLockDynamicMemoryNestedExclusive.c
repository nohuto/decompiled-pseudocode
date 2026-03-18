/*
 * XREFs of MiLockDynamicMemoryNestedExclusive @ 0x14066DE40
 * Callers:
 *     MiAcquireAddMemoryLocks @ 0x1407E8568 (MiAcquireAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x1407FF7C0 (MiNodeZeroConductor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 MiLockDynamicMemoryNestedExclusive()
{
  __int64 result; // rax
  __int64 v1; // rbx

  result = (__int64)KeAbPreAcquire((__int64)&qword_140E38CC0, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E38CC0, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140E38CC0, result, (__int64)&qword_140E38CC0);
  if ( v1 )
    *(_BYTE *)(v1 + 10) = 1;
  return result;
}
