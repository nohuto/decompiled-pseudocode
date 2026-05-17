/*
 * XREFs of RtlpGetHeapTag @ 0x18009A7D8
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x18009A090 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x18009B020 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x18009A820 (RtlQueryHeapInformation.c)
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
