/*
 * XREFs of RtlEnableHeapGC @ 0x180141920
 * Callers:
 *     _LdrpInitialize @ 0x180066904 (_LdrpInitialize.c)
 * Callees:
 *     RtlpHpGCTimerEnable @ 0x180142720 (RtlpHpGCTimerEnable.c)
 */

__int64 __fastcall RtlEnableHeapGC(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlpHpGCTimerEnable(a1, a1);
  return result;
}
