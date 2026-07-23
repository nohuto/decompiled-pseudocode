/*
 * XREFs of RtlInitializeProcessorFeaturesBitMap @ 0x1801454C8
 * Callers:
 *     LdrpInitializeProcess @ 0x1800AEF54 (LdrpInitializeProcess.c)
 * Callees:
 *     NtQuerySystemInformation @ 0x180160710 (NtQuerySystemInformation.c)
 */

NTSTATUS RtlInitializeProcessorFeaturesBitMap()
{
  NTSTATUS result; // eax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF

  ReturnLength = 0;
  result = NtQuerySystemInformation(
             SystemProcessorFeaturesBitMapInformation,
             &RtlProcessorFeaturesBuffer,
             0x10u,
             &ReturnLength);
  RtlProcessorFeaturesBitMap = 128LL;
  qword_1801D2DC8 = (__int64)&RtlProcessorFeaturesBuffer;
  return result;
}
