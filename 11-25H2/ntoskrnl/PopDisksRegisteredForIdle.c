/*
 * XREFs of PopDisksRegisteredForIdle @ 0x14049A1D8
 * Callers:
 *     NtPowerInformation @ 0x14096E740 (NtPowerInformation.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseSpinLock @ 0x1402EA780 (KeReleaseSpinLock.c)
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
