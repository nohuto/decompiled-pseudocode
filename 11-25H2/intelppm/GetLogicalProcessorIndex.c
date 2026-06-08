/*
 * XREFs of GetLogicalProcessorIndex @ 0x1400355E0
 * Callers:
 *     InitCpcStatesInternal @ 0x1400358D0 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140036F80 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400372A8 (InitPerfStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLogicalProcessorIndex(__int64 a1)
{
  if ( byte_140019AD0 )
    return *(unsigned int *)(a1 + 72);
  else
    return *(unsigned int *)(a1 + 56);
}
