/*
 * XREFs of PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D47C4
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D49AC (PpmHeteroHgsRegisterContainmentGroups.c)
 */

__int64 PpmHeteroHgsEvalAndRegisterContainmentGroups()
{
  __int64 result; // rax
  unsigned __int16 i; // bx
  __int64 v2; // rcx
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 2) != 0 )
  {
    for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
    {
      v3 = 0LL;
      v2 = PpmParkNodes + 1296LL * i;
      WORD4(v3) = *(_WORD *)(v2 + 4);
      *(_QWORD *)&v3 = *(_QWORD *)(v2 + 16);
      if ( !*(_QWORD *)(v2 + 1280) )
        PpmHeteroHgsRegisterContainmentGroups(v2, 0LL, &v3);
      ++i;
    }
  }
  return result;
}
