/*
 * XREFs of RtlpLogHeapCreateEvent @ 0x180118270
 * Callers:
 *     RtlpHpHeapCreate @ 0x1800351B4 (RtlpHpHeapCreate.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 * Callees:
 *     RtlpEstimateAllocatedSize @ 0x18009B36C (RtlpEstimateAllocatedSize.c)
 *     NtTraceEvent @ 0x180163DD0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlpLogHeapCreateEvent(__int64 a1, int a2, __int64 a3, __int64 a4, HANDLE TraceHandle)
{
  _BYTE Fields[6]; // [rsp+20h] [rbp-88h] BYREF
  __int16 v11; // [rsp+26h] [rbp-82h]
  __int64 v12; // [rsp+40h] [rbp-68h]
  int v13; // [rsp+48h] [rbp-60h]
  __int64 v14; // [rsp+4Ch] [rbp-5Ch]
  __int64 v15; // [rsp+54h] [rbp-54h]
  __int64 v16; // [rsp+5Ch] [rbp-4Ch]

  memset_thunk_772440563353939046(Fields, 0, 0x44uLL);
  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a4;
  v16 = RtlpEstimateAllocatedSize(a1);
  v11 = 4128;
  return NtTraceEvent(TraceHandle, 0x403u, 0x24u, Fields);
}
