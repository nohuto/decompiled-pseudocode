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
  char v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0;
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
          (int)"minkernel\\ldr\\ldrmap.c",
          4213,
          (int)"LdrpDetectDetour",
          2,
          "!!! Detour detected, disable parallel loading\n",
          v4);
        LdrpDetourExist = 1;
        break;
      }
      v0 += 2;
    }
    if ( (int)ZwQueryInformationThread(-2LL, 42LL, &v5) >= 0 && v5 == 1 )
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
      TpReleaseWork(LdrpMapAndSnapWork);
      LdrpMapAndSnapWork = 0LL;
    }
  }
}
