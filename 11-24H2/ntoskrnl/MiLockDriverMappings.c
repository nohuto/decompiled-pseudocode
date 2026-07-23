/*
 * XREFs of MiLockDriverMappings @ 0x1404A9FD0
 * Callers:
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140A611E4 (MiReleaseDriverPtes.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 */

char *__fastcall MiLockDriverMappings(__int64 a1)
{
  char *result; // rax
  char *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (char *)KeAbPreAcquire((__int64)&qword_140E2D998, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D998, 0LL) )
    result = (char *)ExfAcquirePushLockExclusiveEx(&qword_140E2D998, result, (__int64)&qword_140E2D998);
  if ( v2 )
    v2[10] = 1;
  return result;
}
