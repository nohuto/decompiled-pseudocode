/*
 * XREFs of RtlpHpVsSlotCompact @ 0x18011CEF4
 * Callers:
 *     RtlpHpVsContextCompact @ 0x18000BF8C (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x18011CCB0 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011CF64 (RtlpHpVsSlotCompactChunks.c)
 *     RtlpInterlockedFlushSList @ 0x180167010 (RtlpInterlockedFlushSList.c)
 */

__int64 __fastcall RtlpHpVsSlotCompact(__int64 a1, _RTL_SRWLOCK *a2)
{
  __int64 result; // rax
  __int64 v5; // rcx

  result = RtlpInterlockedFlushSList(&a2[8]);
  if ( result )
    result = (__int64)RtlpHpVsSlotFreeList(a1, a2, (_QWORD *)result);
  if ( *(_WORD *)(a1 + 6) )
  {
    result = *(__int16 *)(a1 + 6);
    v5 = *(_QWORD *)(result + a1 + 32);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 88);
  }
  if ( v5 )
    return RtlpHpVsSlotCompactChunks(a1, a2);
  return result;
}
