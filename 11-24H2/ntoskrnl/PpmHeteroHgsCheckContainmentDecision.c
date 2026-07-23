/*
 * XREFs of PpmHeteroHgsCheckContainmentDecision @ 0x14044C408
 * Callers:
 *     PpmCheckStart @ 0x14044C244 (PpmCheckStart.c)
 *     PpmHeteroUpdateHgsConfiguration @ 0x1404E2E24 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmParkApplyPolicy @ 0x1404E4B18 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405DE964 (PpmParkApplyPolicyEx.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074DEF8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074E004 (PpmPerfSetMaximumOverride.c)
 *     PpmReapplyPerfPolicy @ 0x140AC5250 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x14044C47C (PpmHeteroHgsEvaluateContainmentDecision.c)
 */

__int64 PpmHeteroHgsCheckContainmentDecision()
{
  __int64 result; // rax
  unsigned __int16 i; // bx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
      PpmHeteroHgsEvaluateContainmentDecision(PpmParkNodes + 1296LL * i++);
  }
  return result;
}
