/*
 * XREFs of LdrpDetectDetour @ 0x18006CBA0
 * Callers:
 *     LdrpLoadDllInternal @ 0x18000B460 (LdrpLoadDllInternal.c)
 *     LdrpEnableParallelLoading @ 0x1800AB384 (LdrpEnableParallelLoading.c)
 * Callees:
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     TpReleaseWork @ 0x18006CCA0 (TpReleaseWork.c)
 *     TpWaitForWork @ 0x18006D890 (TpWaitForWork.c)
 *     ZwQueryInformationThread @ 0x180162130 (ZwQueryInformationThread.c)
 */

void LdrpDetectDetour()
{
  _QWORD *v0; // rdx
  unsigned int i; // ecx
  _QWORD *v2; // r8
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // [rsp+28h] [rbp-10h]
  int v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
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
          (__int64)"minkernel\\ldr\\ldrmap.c",
          4203,
          (__int64)"LdrpDetectDetour",
          2,
          "!!! Detour detected, disable parallel loading\n",
          v6);
        LdrpDetourExist = 1;
        break;
      }
      v0 += 2;
    }
    if ( (int)ZwQueryInformationThread(-2LL, 42LL, &v7, 4LL, 0LL) >= 0 && v7 == 1 )
    {
      LdrpDetourExist = 1;
    }
    else if ( !LdrpDetourExist )
    {
      return;
    }
    if ( LdrpMapAndSnapWork )
    {
      TpWaitForWork(LdrpMapAndSnapWork, 1LL);
      TpReleaseWork(LdrpMapAndSnapWork, v4, v5);
      LdrpMapAndSnapWork = 0LL;
    }
  }
}
