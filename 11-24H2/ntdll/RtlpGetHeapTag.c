/*
 * XREFs of RtlpGetHeapTag @ 0x18002AAC8
 * Callers:
 *     RtlQueryProcessHeapInformation @ 0x18002A340 (RtlQueryProcessHeapInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x18002B7F0 (RtlpQueryProcessEnumHeapsRoutine.c)
 * Callees:
 *     RtlQueryHeapInformation @ 0x18002AB10 (RtlQueryHeapInformation.c)
 */

__int64 __fastcall RtlpGetHeapTag(void *a1)
{
  __int64 v1; // rbx
  __int64 HeapInformation; // [rsp+48h] [rbp+10h] BYREF

  v1 = 0LL;
  HeapInformation = 0LL;
  if ( RtlQueryHeapInformation(a1, HeapTag, &HeapInformation, 8uLL, 0LL) >= 0 )
    return HeapInformation;
  return v1;
}
