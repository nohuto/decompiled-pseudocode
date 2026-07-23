/*
 * XREFs of PpmReinitializeHeteroEngine @ 0x140AC53D4
 * Callers:
 *     PpmPerfClearBootOverrides @ 0x1404E2698 (PpmPerfClearBootOverrides.c)
 *     PpmHeteroHgsUpdateWorker @ 0x1404E2DF0 (PpmHeteroHgsUpdateWorker.c)
 *     PpmRegisterPerfStates @ 0x14074E1F4 (PpmRegisterPerfStates.c)
 *     PpmUpdatePerfStates @ 0x14074EF60 (PpmUpdatePerfStates.c)
 *     PpmEnableProfile @ 0x1407634F0 (PpmEnableProfile.c)
 *     PpmDisableProfile @ 0x140AC8F20 (PpmDisableProfile.c)
 *     PpmHvEnableQosEnlightenment @ 0x140AC9098 (PpmHvEnableQosEnlightenment.c)
 * Callees:
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 */

LONG __fastcall PpmReinitializeHeteroEngine(char a1, char a2, char a3)
{
  int v3; // eax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v5) = a2;
  if ( a1 )
    v3 = 2048;
  else
    v3 = 4096;
  v5 = v3;
  if ( a3 )
    v5 = v3 | 0x8000;
  return PpmReapplyPerfPolicy(&v5);
}
