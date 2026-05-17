/*
 * XREFs of RtlpGetHeapTag @ 0x180046AF8
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x1800463B0 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180047340 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x180046B40 (RtlQueryHeapInformation.c)
 */

__int64 __fastcall RtlpGetHeapTag(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( (int)RtlQueryHeapInformation(a1, 7LL, &v3, 8LL, 0LL) >= 0 )
    return v3;
  return v1;
}
