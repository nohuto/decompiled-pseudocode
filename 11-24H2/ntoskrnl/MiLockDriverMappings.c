/*
 * XREFs of MiLockDriverMappings @ 0x1404AF5D4
 * Callers:
 *     MiReleaseDriverPtes @ 0x140A67CE4 (MiReleaseDriverPtes.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 */

__int64 __fastcall MiLockDriverMappings(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx

  --*(_WORD *)(a1 + 486);
  result = (__int64)KeAbPreAcquire((__int64)&qword_140E2D858, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140E2D858, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140E2D858, result, (__int64)&qword_140E2D858);
  if ( v2 )
    *(_BYTE *)(v2 + 10) = 1;
  return result;
}
