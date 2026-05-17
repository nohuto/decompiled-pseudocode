/*
 * XREFs of RtlpReadProcessHeaps @ 0x18010A86C
 * Callers:
 *     RtlDetectHeapLeaks @ 0x18010A5F0 (RtlDetectHeapLeaks.c)
 * Callees:
 *     RtlpPushPageDescriptor @ 0x18003F524 (RtlpPushPageDescriptor.c)
 *     RtlQueryHeapInformation @ 0x180046B40 (RtlQueryHeapInformation.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

char RtlpReadProcessHeaps()
{
  char result; // al
  _QWORD v1[2]; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v3)(__int64); // [rsp+48h] [rbp-50h]
  __int64 v4; // [rsp+50h] [rbp-48h]

  memset_thunk_772440563353939046(v1, 0, 0x58uLL);
  v1[0] = -1LL;
  v1[1] = 0LL;
  v4 = 0LL;
  v3 = RtlpLeakCallbackRoutine;
  v2 = 5;
  result = RtlQueryHeapInformation(0LL, 2, v1, 0x58uLL, 0LL);
  if ( RtlpLDPreviousPage )
    result = RtlpPushPageDescriptor(RtlpLDPreviousPage, 1LL);
  RtlpLDPreviousPage = 0LL;
  RtlpLDNumBlocks = 0;
  return result;
}
