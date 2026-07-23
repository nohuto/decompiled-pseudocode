/*
 * XREFs of PopDisksRegisteredForIdle @ 0x140494D18
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14027E340 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140285130 (KeAcquireSpinLockRaiseToDpc.c)
 */

char PopDisksRegisteredForIdle()
{
  char v0; // bl
  KIRQL v2; // dl
  __int64 i; // rax

  if ( (PopSimulate & 2) != 0 )
    return 1;
  v0 = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopDopeGlobalLock);
  for ( i = PopIdleDetectList; (__int64 *)i != &PopIdleDetectList; i = *(_QWORD *)i )
  {
    if ( *(_DWORD *)(i + 16) == 1 )
    {
      v0 = 1;
      break;
    }
  }
  KeReleaseSpinLock(&PopDopeGlobalLock, v2);
  return v0;
}
