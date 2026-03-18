/*
 * XREFs of WheaInitializeRecordHeader @ 0x140425FF0
 * Callers:
 *     HalpCreateMcaMemoryErrorRecord @ 0x14053F058 (HalpCreateMcaMemoryErrorRecord.c)
 *     HalpCreateMcaProcessorErrorRecord @ 0x14053F418 (HalpCreateMcaProcessorErrorRecord.c)
 *     HalpCreateNMIErrorRecord @ 0x140543CE8 (HalpCreateNMIErrorRecord.c)
 *     WheapCreateRecordFromGenericErrorData @ 0x14065D7A4 (WheapCreateRecordFromGenericErrorData.c)
 * Callees:
 *     WheapGetTimestamp @ 0x14042605C (WheapGetTimestamp.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall WheaInitializeRecordHeader(_DWORD *a1)
{
  memset_0(a1, 0, 0x80uLL);
  *(_DWORD *)((char *)a1 + 6) = -1;
  a1[4] |= 2u;
  *((GUID *)a1 + 4) = WHEA_RECORD_CREATOR_GUID;
  *a1 = 1380274243;
  *((_WORD *)a1 + 2) = 528;
  a1[3] = 3;
  WheapGetTimestamp(a1 + 6);
  *((_QWORD *)a1 + 12) = _InterlockedIncrement64(&WheapErrorRecordId);
  return 0LL;
}
