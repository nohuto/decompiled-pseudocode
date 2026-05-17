/*
 * XREFs of RtlBackoff @ 0x1800D6AD0
 * Callers:
 *     LdrpAddUnicodeStringToSnapsBuffer @ 0x1800144D0 (LdrpAddUnicodeStringToSnapsBuffer.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x18004A470 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlpQueueWaitBlockToSRWLock @ 0x18004AC20 (RtlpQueueWaitBlockToSRWLock.c)
 *     RtlpHpEnvAcquireGlobalLockExclusive @ 0x1800D5764 (RtlpHpEnvAcquireGlobalLockExclusive.c)
 *     RtlpFcReferenceFeatureConfigurationBuffers @ 0x1800D63CC (RtlpFcReferenceFeatureConfigurationBuffers.c)
 *     RtlpFcUpdateLocalConfiguration @ 0x1800D6550 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlReleaseSwapReference @ 0x1800D6A4C (RtlReleaseSwapReference.c)
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
