/*
 * XREFs of PpmHeteroHgsCheckContainmentDecision @ 0x1404AF124
 * Callers:
 *     PpmCheckStart @ 0x140203674 (PpmCheckStart.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x140267B4C (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkApplyPolicy @ 0x1404E9D84 (PpmParkApplyPolicy.c)
 *     PpmPerfRemoveMaximumOverride @ 0x140743AF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x140743C10 (PpmPerfSetMaximumOverride.c)
 *     PpmReapplyPerfPolicy @ 0x140A3EE58 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404AF170 (PpmHeteroHgsEvaluateContainmentDecision.c)
 */

__int64 PpmHeteroHgsCheckContainmentDecision()
{
  __int64 result; // rax
  unsigned __int16 i; // bx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
      PpmHeteroHgsEvaluateContainmentDecision(PpmParkNodes + 208LL * i++);
  }
  return result;
}
