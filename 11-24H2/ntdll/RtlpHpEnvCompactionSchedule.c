/*
 * XREFs of RtlpHpEnvCompactionSchedule @ 0x1800656C0
 * Callers:
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpLfhSlotAllocateSlow @ 0x180061270 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextFree @ 0x180065110 (RtlpHpLfhContextFree.c)
 *     RtlpHpLfhContextCompact @ 0x180065FB0 (RtlpHpLfhContextCompact.c)
 *     RtlpHpVsChunkSplit @ 0x1800687B0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpVsChunkFree @ 0x1800697A0 (RtlpHpVsChunkFree.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18006A6B0 (RtlpHpSegPageRangeCoalesce.c)
 * Callees:
 *     EtwEventWriteTransfer @ 0x18001B000 (EtwEventWriteTransfer.c)
 *     TpSetTimerEx @ 0x180087860 (TpSetTimerEx.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 RtlpHpEnvCompactionSchedule()
{
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+38h] [rbp-40h] BYREF
  _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-30h] BYREF
  void *v3; // [rsp+58h] [rbp-20h]
  int v4; // [rsp+60h] [rbp-18h]
  int v5; // [rsp+64h] [rbp-14h]

  if ( !Context )
    return 3221225635LL;
  if ( byte_1801D1908 )
    return 3221225738LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)&qword_1801CD278, 1, 0) )
    return 259LL;
  TpSetTimerEx(Context, &DueTime, 0, 0x3E8u);
  if ( (RtlpHpHeapFeatures & 8) != 0 && (unsigned int)dword_1801CB670 > 5 )
  {
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (unsigned __int64)off_1801CB678;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1801CB678;
    v3 = &unk_1801A157E;
    UserData.Reserved = 2;
    v4 = 25;
    v5 = 1;
    EtwEventWriteTransfer(qword_1801CB690, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  return 0LL;
}
