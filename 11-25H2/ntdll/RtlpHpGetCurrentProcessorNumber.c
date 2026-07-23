/*
 * XREFs of RtlpHpGetCurrentProcessorNumber @ 0x18000A840
 * Callers:
 *     RtlpHpLfhThreadDataInitializeSet @ 0x18000A350 (RtlpHpLfhThreadDataInitializeSet.c)
 *     RtlpHpLfhBucketUpdateAffinityMapping @ 0x18002FEB0 (RtlpHpLfhBucketUpdateAffinityMapping.c)
 *     RtlpHpVsContextHandleContention @ 0x18011DD0C (RtlpHpVsContextHandleContention.c)
 * Callees:
 *     RtlGetCurrentProcessorNumberEx @ 0x180167800 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 RtlpHpGetCurrentProcessorNumber()
{
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcessorNumber = 0;
  RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
  return ProcessorNumber.Number;
}
