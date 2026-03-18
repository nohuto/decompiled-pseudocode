/*
 * XREFs of KeSetVpThreadLowPriorityOverride @ 0x1405B7860
 * Callers:
 *     KeSwitchFrozenProcessor @ 0x1405C1B30 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x1405C1C80 (KiFreezeTargetExecution.c)
 * Callees:
 *     <none>
 */

volatile signed __int32 *__fastcall KeSetVpThreadLowPriorityOverride(__int64 a1, char a2)
{
  volatile signed __int32 *result; // rax

  result = *(volatile signed __int32 **)(a1 + 36536);
  if ( result )
  {
    if ( a2 )
      _InterlockedOr(result, 0x20000u);
    else
      _InterlockedAnd(result, 0xFFFDFFFF);
  }
  return result;
}
