/*
 * XREFs of RtlEnableHeapGC @ 0x180143010
 * Callers:
 *     _LdrpInitialize @ 0x1800D2584 (_LdrpInitialize.c)
 * Callees:
 *     RtlpHpGCTimerEnable @ 0x180143E10 (RtlpHpGCTimerEnable.c)
 */

__int64 __fastcall RtlEnableHeapGC(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return RtlpHpGCTimerEnable(a1, a1);
  return result;
}
