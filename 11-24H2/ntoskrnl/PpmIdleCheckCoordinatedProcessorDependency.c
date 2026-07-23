/*
 * XREFs of PpmIdleCheckCoordinatedProcessorDependency @ 0x1405CBA64
 * Callers:
 *     PpmIdleCheckCoordinatedDependencies @ 0x1405CB5E8 (PpmIdleCheckCoordinatedDependencies.c)
 * Callees:
 *     PpmTestAndLockProcessor @ 0x1405CC954 (PpmTestAndLockProcessor.c)
 */

__int64 __fastcall PpmIdleCheckCoordinatedProcessorDependency(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 *a5)
{
  __int64 v7; // rdi
  __int64 v8; // r8

  v7 = -1LL;
  v8 = PpmTestAndLockProcessor(a1, a4, a3);
  if ( !v8 )
  {
    if ( *(_BYTE *)(PpmPlatformStates + 8)
      && (unsigned int)(a2 + *(_DWORD *)(344LL * *(unsigned int *)(a1 + 34944) + *(_QWORD *)(a1 + 34880) + 1336)) > *(_DWORD *)(a1 + 34936) )
    {
      v8 = 2147483663LL;
    }
    else
    {
      if ( KiClockTimerPerCpuTickScheduling )
        v7 = *(_QWORD *)(a1 + 34928);
      v8 = 0LL;
    }
  }
  *a5 = v7;
  return v8;
}
