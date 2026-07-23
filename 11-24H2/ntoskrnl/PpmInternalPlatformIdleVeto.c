/*
 * XREFs of PpmInternalPlatformIdleVeto @ 0x1404F7884
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC2410 (PopPowerInformationInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmInternalPlatformIdleVeto(unsigned int a1, char a2)
{
  unsigned int v2; // r9d
  __int64 v3; // rcx

  v2 = 0;
  if ( PpmPlatformStates )
  {
    if ( a1 < *(_DWORD *)PpmPlatformStates )
    {
      v3 = 448LL * a1;
      if ( a2 )
        _InterlockedOr((volatile signed __int32 *)(v3 + PpmPlatformStates + 80), 0x80000000);
      else
        _InterlockedAnd((volatile signed __int32 *)(v3 + PpmPlatformStates + 80), 0x7FFFFFFFu);
    }
    else
    {
      return (unsigned int)-1073741585;
    }
  }
  else
  {
    return (unsigned int)-1073741653;
  }
  return v2;
}
