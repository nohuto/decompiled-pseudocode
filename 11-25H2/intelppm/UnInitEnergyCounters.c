/*
 * XREFs of UnInitEnergyCounters @ 0x14002A950
 * Callers:
 *     <none>
 * Callees:
 *     DeactivateFixedFunctionCounters @ 0x140007194 (DeactivateFixedFunctionCounters.c)
 */

_DWORD *UnInitEnergyCounters()
{
  _DWORD *result; // rax

  result = (_DWORD *)LODWORD(WPP_MAIN_CB.Dpc.DeferredContext);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DeferredContext & 1) != 0 )
    return DeactivateFixedFunctionCounters();
  return result;
}
