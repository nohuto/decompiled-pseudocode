/*
 * XREFs of RtlInitializeProcessorFeaturesBitMap @ 0x1801486C8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800D29F4 (LdrpInitializeProcess.c)
 * Callees:
 *     NtQuerySystemInformation @ 0x1801638E0 (NtQuerySystemInformation.c)
 */

NTSTATUS RtlInitializeProcessorFeaturesBitMap()
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 0;
  AdditionalProcessorFeaturesEnabled = 1;
  result = NtQuerySystemInformation(
             SystemProcessorFeaturesBitMapInformation,
             &RtlProcessorFeaturesBuffer,
             0x10u,
             &ReturnLength);
  RtlProcessorFeaturesBitMap = 128LL;
  qword_1801D5E28 = (__int64)&RtlProcessorFeaturesBuffer;
  return result;
}
