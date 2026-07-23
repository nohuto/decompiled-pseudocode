/*
 * XREFs of RtlpHpStackDbFreeRoutine @ 0x18014CF50
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x1800DCF34 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     RtlpHpMetadataFree @ 0x18000AB68 (RtlpHpMetadataFree.c)
 */

NTSTATUS __fastcall RtlpHpStackDbFreeRoutine(unsigned __int64 a1)
{
  __int128 v2; // [rsp+20h] [rbp-18h] BYREF

  v2 = RtlpHpEnvHandle;
  return RtlpHpMetadataFree(a1, &v2);
}
