/*
 * XREFs of RtlpReadProcessHeaps @ 0x180112AC0
 * Callers:
 *     RtlDetectHeapLeaks @ 0x180022B90 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlpPushPageDescriptor @ 0x18001FE54 (RtlpPushPageDescriptor.c)
 *     RtlQueryHeapInformation @ 0x18002AB10 (RtlQueryHeapInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

char RtlpReadProcessHeaps()
{
  char result; // al
  _QWORD HeapInformation[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  memset_thunk_772440563353939046(HeapInformation, 0, 0x58uLL);
  HeapInformation[0] = -1LL;
  HeapInformation[1] = 0LL;
  v4 = 0LL;
  v3 = RtlpLeakCallbackRoutine;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, (HEAP_INFORMATION_CLASS)2, HeapInformation, 0x58uLL, 0LL);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
  RtlpLDPreviousPage = 0LL;
  RtlpLDNumBlocks = 0;
  return result;
}
