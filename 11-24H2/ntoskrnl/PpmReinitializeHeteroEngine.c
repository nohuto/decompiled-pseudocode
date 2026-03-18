/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140AC7948
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1404EB758 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404EBED0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmRegisterPerfStates @ 0x14074FED4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x140750C40 (PpmUpdatePerfStates.c)
 *     PpmEnableProfile @ 0x140763B2C (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140ACB310 (PpmDisableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140ACB488 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 */

void __fastcall PpmReinitializeHeteroEngine(char a1, char a2, char a3)
{
  int v3; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v4) = a2;
  if ( a1 )
    v3 = 2048;
  else
    v3 = 4096;
  v4 = v3;
  if ( a3 )
    v4 = v3 | 0x8000;
  PpmReapplyPerfPolicy(&v4);
}
