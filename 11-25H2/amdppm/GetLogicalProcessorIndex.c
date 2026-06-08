/*
 * XREFs of GetLogicalProcessorIndex @ 0x140031DCC
 * Callers:
 *     InitCpcStatesInternal @ 0x140032190 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x14003385C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140033B84 (InitPerfStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLogicalProcessorIndex(__int64 a1)
{
  if ( byte_140014EF0 )
    return *(unsigned int *)(a1 + 72);
  else
    return *(unsigned int *)(a1 + 56);
}
