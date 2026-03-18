/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140AC1DDC
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1404E9D08 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404E9D50 (PpmHeteroHgsUpdateWorker.c)
 *     PpmRegisterPerfStates @ 0x140743E04 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140744B70 (PpmUpdatePerfStates.c)
 *     PpmEnableProfile @ 0x14075406C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AC4518 (PpmDisableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC46CC (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 */

void __fastcall PpmReinitializeHeteroEngine(char a1, char a2, char a3)
{
  unsigned int v3; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v4) = a2;
  if ( a1 )
    v3 = 2048;
  else
    v3 = 4096;
  v4 = v3;
  if ( a3 )
    v4 = v3 | 0x8000;
  PpmReapplyPerfPolicy((unsigned int *)&v4);
}
