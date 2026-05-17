/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x180047450
 * Callers:
 *     RtlpCopyRemoteDebugInformation @ 0x180045DD0 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x180046094 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryProcessModuleInformation @ 0x180046274 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessLockInformation @ 0x180046FA0 (RtlQueryProcessLockInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x180047340 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x180047E50 (RtlpWalkCallbackRoutine.c)
 *     RtlCommitDebugInfo @ 0x180113F50 (RtlCommitDebugInfo.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180161F90 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  unsigned __int64 v6; // [rsp+50h] [rbp+18h] BYREF
  char *v7; // [rsp+58h] [rbp+20h] BYREF

  if ( a2 <= 0xFFFFFFF8 )
  {
    v3 = a1[9] + ((a2 + 7) & 0xFFFFFFF8);
    v4 = a1[10];
    if ( v3 <= v4 )
    {
LABEL_3:
      result = (char *)a1 + a1[9];
      a1[9] = v3;
      return result;
    }
    if ( v3 <= a1[11] )
    {
      v7 = (char *)a1 + v4;
      v6 = v3 - v4;
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v7, 0LL, &v6, 4096, 4) >= 0 )
      {
        a1[10] += v6;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
