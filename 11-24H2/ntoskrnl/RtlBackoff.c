/*
 * XREFs of RtlBackoff @ 0x140253B30
 * Callers:
 *     KiRetireDpcList @ 0x140251EB0 (KiRetireDpcList.c)
 *     KiInsertQueueDpc @ 0x140254310 (KiInsertQueueDpc.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     RtlAcquireSwapReference @ 0x1403A4E34 (RtlAcquireSwapReference.c)
 *     RtlpFcAddDelayedUsageReportToBuffer @ 0x1403A4E8C (RtlpFcAddDelayedUsageReportToBuffer.c)
 *     RtlReleaseSwapReference @ 0x1403A500C (RtlReleaseSwapReference.c)
 *     RtlpFcAddFeatureUsageDataToBuffer @ 0x1403A6A8C (RtlpFcAddFeatureUsageDataToBuffer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlBackoff(unsigned int *a1)
{
  unsigned int v1; // r8d
  __int64 result; // rax
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
    result = (unsigned int)KeNumberProcessors_0;
    if ( (_DWORD)KeNumberProcessors_0 == 1 )
      return result;
    v1 = 64;
  }
  *a1 = v1;
  v3 = __rdtsc();
  result = 10 * (((v1 - 1) & (unsigned int)v3) + v1) / MEMORY[0xFFFFF780000002D6];
  for ( i = 0; i < (unsigned int)result; ++i )
    _mm_pause();
  return result;
}
