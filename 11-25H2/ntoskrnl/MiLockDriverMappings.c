/*
 * XREFs of MiLockDriverMappings @ 0x1404AE734
 * Callers:
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140A651C4 (MiReleaseDriverPtes.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 */

__int64 *__fastcall MiLockDriverMappings(__int64 a1)
{
  __int64 *result; // rax
  __int64 *v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = KeAbPreAcquire((__int64)&qword_140E2D618, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D618, 0LL) )
    result = (__int64 *)ExfAcquirePushLockExclusiveEx(&qword_140E2D618, result, (__int64)&qword_140E2D618);
  if ( v2 )
    *((_BYTE *)v2 + 10) = 1;
  return result;
}
