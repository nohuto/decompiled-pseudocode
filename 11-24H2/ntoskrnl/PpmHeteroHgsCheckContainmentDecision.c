/*
 * XREFs of PpmHeteroHgsCheckContainmentDecision @ 0x140457958
 * Callers:
 *     PpmHeteroUpdateHgsConfiguration @ 0x140203248 (PpmHeteroUpdateHgsConfiguration.c)
 *     PpmCheckStart @ 0x140457794 (PpmCheckStart.c)
 *     PpmParkApplyPolicy @ 0x1404ED2F4 (PpmParkApplyPolicy.c)
 *     PpmParkApplyPolicyEx @ 0x1405E1344 (PpmParkApplyPolicyEx.c)
 *     PpmPerfRemoveMaximumOverride @ 0x14074FBC8 (PpmPerfRemoveMaximumOverride.c)
 *     PpmPerfSetMaximumOverride @ 0x14074FCE0 (PpmPerfSetMaximumOverride.c)
 *     PpmReapplyPerfPolicy @ 0x140AC77C4 (PpmReapplyPerfPolicy.c)
 * Callees:
 *     PpmHeteroHgsEvaluateContainmentDecision @ 0x1404579CC (PpmHeteroHgsEvaluateContainmentDecision.c)
 */

__int64 PpmHeteroHgsCheckContainmentDecision()
{
  __int64 result; // rax
  unsigned __int16 i; // bx

  result = (unsigned int)PpmHeteroHgsContainmentState;
  if ( (PpmHeteroHgsContainmentState & 4) != 0 )
  {
    for ( i = 0; i < (unsigned int)PpmParkNumNodes; result = i )
      PpmHeteroHgsEvaluateContainmentDecision(PpmParkNodes + 1288LL * i++);
  }
  return result;
}
