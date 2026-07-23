/*
 * XREFs of RtlEnableHeapGC @ 0x18013FB10
 * Callers:
 *     _LdrpInitialize @ 0x1800AEAE4 (_LdrpInitialize.c)
 * Callees:
 *     RtlpHpGCTimerEnable @ 0x1801408D0 (RtlpHpGCTimerEnable.c)
 */

__int64 __fastcall RtlEnableHeapGC(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlpHpGCTimerEnable(a1, a1);
  return result;
}
