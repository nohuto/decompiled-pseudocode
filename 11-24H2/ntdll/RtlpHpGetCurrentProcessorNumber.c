/*
 * XREFs of RtlpHpGetCurrentProcessorNumber @ 0x180064794
 * Callers:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x1800646A0 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x180117A60 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextHandleContention @ 0x18011A6A4 (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     RtlGetCurrentProcessorNumberEx @ 0x180164630 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 RtlpHpGetCurrentProcessorNumber()
{
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcessorNumber = 0;
  RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
  return ProcessorNumber.Number;
}
