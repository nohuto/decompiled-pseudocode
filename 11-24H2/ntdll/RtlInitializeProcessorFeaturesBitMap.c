/*
 * XREFs of RtlInitializeProcessorFeaturesBitMap @ 0x180147118
 * Callers:
 *     LdrpInitializeProcess @ 0x180066D74 (LdrpInitializeProcess.c)
 * Callees:
 *     NtQuerySystemInformation @ 0x180162350 (NtQuerySystemInformation.c)
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
  qword_1801D3DC8 = (__int64)&RtlProcessorFeaturesBuffer;
  return result;
}
