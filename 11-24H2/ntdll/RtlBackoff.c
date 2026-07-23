/*
 * XREFs of RtlBackoff @ 0x1800D1E40
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x180040ED0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x180060800 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D0AD4 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D173C (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D18C0 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlReleaseSwapReference @ 0x1800D1DBC (RtlReleaseSwapReference.c)
 * Callees:
 *     <none>
 */

struct _TEB *__fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  struct _TEB *result; // rax
  unsigned __int64 v3; // rax
  unsigned int i; // ecx

  v1 = *a1;
  if ( *a1 )
  {
    if ( v1 < 0x1FFF )
      v1 *= 2;
  }
  else
  {
    result = NtCurrentTeb();
    if ( result->ProcessEnvironmentBlock->NumberOfProcessors == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = (struct _TEB *)(10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0x7FFE02D6]);
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}
