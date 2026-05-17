/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x18004FAE0
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x18004B690 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextFree @ 0x18004F530 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhContextCompact @ 0x1800503D0 (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsChunkSplit @ 0x180052BD0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x180053BC0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180054AD0 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18003AD80 (EtwEventWriteTransfer.c)
 *     TpSetTimerEx @ 0x18006AF80 (TpSetTimerEx.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 RtlpHpEnvCompactionSchedule()
{
  __int128 v1; // [rsp+38h] [rbp-40h] BYREF
  void *v2; // [rsp+48h] [rbp-30h] BYREF
  int v3; // [rsp+50h] [rbp-28h]
  int v4; // [rsp+54h] [rbp-24h]
  void *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( !qword_1801CE268 )
    return 3221225635LL;
  if ( byte_1801D2908 )
    return 3221225738LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CE278, 1, 0) )
    return 259LL;
  TpSetTimerEx(qword_1801CE268, &qword_1801CE270, 0LL, 1000LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CC670 > 5 )
  {
    v2 = off_1801CC678;
    v1 = 0x50B000000uLL;
    v3 = *(unsigned __int16 *)off_1801CC678;
    v5 = &unk_1801A23DE;
    v4 = 2;
    v6 = 25;
    v7 = 1;
    EtwEventWriteTransfer(qword_1801CC690, &v1, 0LL, 0LL, 2, (__int64)&v2);
  }
  return 0LL;
}
