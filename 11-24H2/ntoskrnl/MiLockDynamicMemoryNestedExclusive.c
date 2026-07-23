/*
 * XREFs of MiLockDynamicMemoryNestedExclusive @ 0x14066F014
 * Callers:
 *     MiAcquireAddMemoryLocks @ 0x1407E8B38 (MiAcquireAddMemoryLocks.c)
 *     MiNodeZeroConductor @ 0x1407FFF00 (MiNodeZeroConductor.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *MiLockDynamicMemoryNestedExclusive()
{
  char *result; // rax
  char *v1; // rbx

  result = (char *)KeAbPreAcquire((__int64)&qword_140E38E00, 0LL);
  v1 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E38E00, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&qword_140E38E00, result, (__int64)&qword_140E38E00);
  if ( v1 )
    v1[10] = 1;
  return result;
}
