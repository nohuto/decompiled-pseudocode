/*
 * XREFs of LdrpDetectDetour @ 0x18003A320
 * Callers:
 *     LdrpEnableParallelLoading @ 0x18003A1C4 (LdrpEnableParallelLoading.c)
 *     LdrpLoadDllInternal @ 0x18004A300 (LdrpLoadDllInternal.c)
 * Callees:
 *     TpReleaseWork @ 0x18003A420 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18003A590 (TpWaitForWork.c)
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     ZwQueryInformationThread @ 0x1801636C0 (ZwQueryInformationThread.c)
 */

void LdrpDetectDetour()
{
  _QWORD *v0; // rdx
  unsigned int i; // ecx
  _QWORD *v2; // r8
  __int64 v3; // rax
  int ThreadInformation; // [rsp+40h] [rbp+8h] BYREF

  ThreadInformation = 0;
  if ( !LdrpDetourExist )
  {
    v0 = &LdrpThunkSignature;
    for ( i = 0; i < 5; ++i )
    {
      v2 = *(&LdrpCriticalLoaderFunctions + i);
      v3 = *v0 - *v2;
      if ( *v0 == *v2 )
        v3 = v0[1] - v2[1];
      if ( v3 )
      {
        LdrpLogInternal(
          "minkernel\\ldr\\ldrmap.c",
          4213LL,
          "LdrpDetectDetour",
          2LL,
          "!!! Detour detected, disable parallel loading\n");
        LdrpDetourExist = 1;
        break;
      }
      v0 += 2;
    }
    if ( ZwQueryInformationThread(
           (HANDLE)0xFFFFFFFFFFFFFFFELL,
           ThreadDynamicCodePolicyInfo,
           &ThreadInformation,
           4u,
           0LL) >= 0
      && ThreadInformation == 1 )
    {
      LdrpDetourExist = 1;
    }
    else if ( !LdrpDetourExist )
    {
      return;
    }
    if ( LdrpMapAndSnapWork )
    {
      TpWaitForWork(LdrpMapAndSnapWork, 1u);
      TpReleaseWork(LdrpMapAndSnapWork);
      LdrpMapAndSnapWork = 0LL;
    }
  }
}
