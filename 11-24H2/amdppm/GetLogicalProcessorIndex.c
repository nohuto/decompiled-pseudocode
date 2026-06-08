/*
 * XREFs of GetLogicalProcessorIndex @ 0x140032FCC
 * Callers:
 *     InitCpcStatesInternal @ 0x140033390 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034A5C (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x140034D84 (InitPerfStatesInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetLogicalProcessorIndex(__int64 a1)
{
  if ( byte_140015F28 )
    return *(unsigned int *)(a1 + 72);
  else
    return *(unsigned int *)(a1 + 56);
}
