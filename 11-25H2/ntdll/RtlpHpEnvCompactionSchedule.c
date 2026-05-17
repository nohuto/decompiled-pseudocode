/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x18000B720
 * Callers:
 *     RtlpHpLfhContextFree @ 0x18000B170 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhContextCompact @ 0x18000C010 (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsChunkSplit @ 0x18000E810 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x18000F800 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x180010710 (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180030120 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 * Callees:
 *     TpSetTimerEx @ 0x18003E670 (TpSetTimerEx.c)
 *     EtwEventWriteTransfer @ 0x18008E770 (EtwEventWriteTransfer.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 RtlpHpEnvCompactionSchedule()
{
  _DWORD v1[2]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v2; // [rsp+40h] [rbp-38h]
  void *v3; // [rsp+48h] [rbp-30h] BYREF
  int v4; // [rsp+50h] [rbp-28h]
  int v5; // [rsp+54h] [rbp-24h]
  void *v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  if ( !qword_1801D0268 )
    return 3221225635LL;
  if ( byte_1801D4988 )
    return 3221225738LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801D0278, 1, 0) )
    return 259LL;
  TpSetTimerEx(qword_1801D0268, &qword_1801D0270, 0LL, 1000LL);
  if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CE670 > 5 )
  {
    v1[1] = 5;
    v3 = off_1801CE678;
    v1[0] = 184549376;
    v2 = 0LL;
    v4 = *(unsigned __int16 *)off_1801CE678;
    v6 = &unk_1801A4426;
    v5 = 2;
    v7 = 25;
    v8 = 1;
    EtwEventWriteTransfer(qword_1801CE690, (unsigned int)v1, 0, 0, 2, (__int64)&v3);
  }
  return 0LL;
}
