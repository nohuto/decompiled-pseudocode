/*
 * XREFs of DrvDestroyMDEV @ 0x140089B74
 * Callers:
 *     hdcOpenDCW @ 0x140067790 (hdcOpenDCW.c)
 *     DrvCleanupAndDestroyMDEV @ 0x14008968C (DrvCleanupAndDestroyMDEV.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPATHSMODALITY@@PEAXPEAU_MDEV@@PEAPEAU4@KU_CDS_INTERNAL_FLAGS@@PEAE@Z @ 0x1401C6C88 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAUD3DKMT_GETPA.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x140020150 (-GreAcquireSemaphoreInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     ??0?$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002322C (--0-$SEMOBJ@$0BD@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x140023374 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x140039260 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

void __fastcall DrvDestroyMDEV(__int64 *a1)
{
  struct _ERESOURCE **v2; // r15
  unsigned int v3; // eax
  unsigned int v4; // esi
  struct _ERESOURCE *v5; // rbx
  __int64 v6; // rdi
  struct _ERESOURCE *v7; // rcx
  __int64 v8; // rbx
  struct _ERESOURCE *v9; // rdx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct _ERESOURCE *v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(struct _ERESOURCE ***)(W32GetSessionState(a1) + 88);
  WdLogSingleEntry1(4LL, a1);
  v3 = *((_DWORD *)a1 + 5);
  v4 = 0;
  for ( WdLogGlobalForLineNumber = 20274; v4 < v3; ++v4 )
  {
    v5 = *v2;
    v7 = *v2;
    v10 = a1[7 * v4 + 5];
    v6 = v10;
    GreAcquireSemaphoreInternal(v7);
    GrepAcquireLockValidate<19>();
    --*(_DWORD *)(v6 + 12);
    if ( v5 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v5);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v10);
    v3 = *((_DWORD *)a1 + 5);
  }
  if ( v3 > 1 )
  {
    v10 = *a1;
    v8 = v10;
    SEMOBJ<19>::SEMOBJ<19>(&v11, v2);
    v9 = v11;
    --*(_DWORD *)(v8 + 12);
    if ( v9 )
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v9);
    PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v10);
  }
}
