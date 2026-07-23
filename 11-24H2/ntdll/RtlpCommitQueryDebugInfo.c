/*
 * XREFs of RtlpCommitQueryDebugInfo @ 0x18002B900
 * Callers:
 *     RtlpCopyRemoteDebugInformation @ 0x180029D60 (RtlpCopyRemoteDebugInformation.c)
 *     AVrfpQueryProcessVerifierOptions @ 0x18002A024 (AVrfpQueryProcessVerifierOptions.c)
 *     RtlQueryProcessModuleInformation @ 0x18002A204 (RtlQueryProcessModuleInformation.c)
 *     RtlQueryProcessLockInformation @ 0x18002AFA0 (RtlQueryProcessLockInformation.c)
 *     RtlpQueryProcessEnumHeapsRoutine @ 0x18002B7F0 (RtlpQueryProcessEnumHeapsRoutine.c)
 *     RtlpWalkCallbackRoutine @ 0x18002BBD0 (RtlpWalkCallbackRoutine.c)
 *     RtlCommitDebugInfo @ 0x18010F250 (RtlCommitDebugInfo.c)
 * Callees:
 *     ZwAllocateVirtualMemory @ 0x180160350 (ZwAllocateVirtualMemory.c)
 */

char *__fastcall RtlpCommitQueryDebugInfo(_QWORD *a1, unsigned int a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rcx
  char *result; // rax
  ULONG_PTR RegionSize; // [rsp+50h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp+20h] BYREF

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
      BaseAddress = (char *)a1 + v4;
      RegionSize = v3 - v4;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        a1[10] += RegionSize;
        goto LABEL_3;
      }
    }
  }
  return 0LL;
}
