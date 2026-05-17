/*
 * XREFs of RtlpHpVsSlotCompact @ 0x18011B65C
 * Callers:
 *     RtlpHpVsContextCompact @ 0x18005034C (RtlpHpVsContextCompact.c)
 * Callees:
 *     RtlpHpVsSlotFreeList @ 0x18011B418 (RtlpHpVsSlotFreeList.c)
 *     RtlpHpVsSlotCompactChunks @ 0x18011B6CC (RtlpHpVsSlotCompactChunks.c)
 *     RtlpInterlockedFlushSList @ 0x180165A80 (RtlpInterlockedFlushSList.c)
 */

unsigned __int64 __fastcall RtlpHpVsSlotCompact(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax
  __int64 v5; // rcx

  result = RtlpInterlockedFlushSList(a2 + 64);
  if ( result )
    result = (unsigned __int64)RtlpHpVsSlotFreeList(a1, a2, result);
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
