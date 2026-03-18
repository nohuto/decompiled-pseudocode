/*
 * XREFs of PopSetupHighPerfPowerRequest @ 0x14073CE20
 * Callers:
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14046D2B4 (PpmEndHighPerfRequest.c)
 *     PpmBeginHighPerfRequest @ 0x14046D320 (PpmBeginHighPerfRequest.c)
 *     PpmPerfClearBootOverrides @ 0x1404E9D08 (PpmPerfClearBootOverrides.c)
 */

__int64 __fastcall PopSetupHighPerfPowerRequest(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebx

  if ( PpmHighPerfDuration[0] )
  {
    v3 = PpmBeginHighPerfRequest();
    if ( v3 >= 0 )
    {
      PpmEndHighPerfRequest(0);
      return (unsigned int)v3;
    }
  }
  else
  {
    v3 = 0;
  }
  PpmPerfClearBootOverrides(a1, a2, a3);
  return (unsigned int)v3;
}
