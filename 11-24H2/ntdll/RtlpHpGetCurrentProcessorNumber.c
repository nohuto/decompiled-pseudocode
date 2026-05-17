/*
 * XREFs of RtlpHpGetCurrentProcessorNumber @ 0x18004EBB4
 * Callers:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18004EAC0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180119830 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextHandleContention @ 0x18011C474 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     RtlGetCurrentProcessorNumberEx @ 0x180166270 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 RtlpHpGetCurrentProcessorNumber()
{
  int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  RtlGetCurrentProcessorNumberEx(&v1);
  return BYTE2(v1);
}
