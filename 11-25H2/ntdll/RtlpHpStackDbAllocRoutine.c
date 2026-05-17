/*
 * XREFs of RtlpHpStackDbAllocRoutine @ 0x18014CF20
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x1800DCF34 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataAlloc @ 0x18004F990 (RtlpHpMetadataAlloc.c)
 */

unsigned __int64 __fastcall RtlpHpStackDbAllocRoutine(unsigned __int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataAlloc(a1, a1, 0, &v2);
}
