/*
 * XREFs of PpmHeteroHgsEvalAndRegisterContainmentGroups @ 0x1405D7220
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 * Callees:
 *     PpmHeteroHgsRegisterContainmentGroups @ 0x1405D7408 (PpmHeteroHgsRegisterContainmentGroups.c)
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
      v2 = PpmParkNodes + 1288LL * i;
      WORD4(v3) = *(_WORD *)(v2 + 4);
      *(_QWORD *)&v3 = *(_QWORD *)(v2 + 16);
      if ( !*(_QWORD *)(v2 + 1272) )
        PpmHeteroHgsRegisterContainmentGroups(v2, 0LL, &v3);
      ++i;
    }
  }
  return result;
}
