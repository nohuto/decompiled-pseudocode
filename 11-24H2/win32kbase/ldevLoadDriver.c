/*
 * XREFs of ldevLoadDriver @ 0x140101130
 * Callers:
 *     ?ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z @ 0x140100FD8 (-ldevGetDriverModes@@YAKPEAUtagGRAPHICS_DEVICE@@PEBGPEAXPEAPEAU_devicemodeW@@@Z.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x140178DA4 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvInitConsole @ 0x1401794EC (DrvInitConsole.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140016394 (--$GreReleaseSemaphoreCommon@$0BD@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     ??$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14002357C (--$GreAcquireSemaphore@$0BD@$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ldevUnloadImage @ 0x1401015E0 (ldevUnloadImage.c)
 *     ?ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z @ 0x140101744 (-ldevFillTable@@YAHPEAU_LDEV@@PEAUtagDRVENABLEDATA@@@Z.c)
 *     ldevLoadImage @ 0x140101890 (ldevLoadImage.c)
 *     ?IsCddCddRemoteSessionFilteringAllowed@@YAHXZ @ 0x140101DE0 (-IsCddCddRemoteSessionFilteringAllowed@@YAHXZ.c)
 *     ?ldevBindDisplayStub@@YAPEAU_LDEV@@XZ @ 0x140101E28 (-ldevBindDisplayStub@@YAPEAU_LDEV@@XZ.c)
 *     MakeSystemRelativePath @ 0x140101F10 (MakeSystemRelativePath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140136080 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     _wcsicmp @ 0x1401A0734 (_wcsicmp.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A2654 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

struct _LDEV *__fastcall ldevLoadDriver(PCWSTR Source, int a2, int a3)
{
  struct _LDEV *v3; // rbx
  int v4; // r14d
  int v5; // r12d
  __int64 v7; // rcx
  int v8; // r13d
  int v9; // r15d
  __int64 v10; // rdi
  int v11; // r12d
  const WCHAR *v12; // r15
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  unsigned int (__fastcall *v16)(__int64, _QWORD, struct tagDRVENABLEDATA *); // rax
  unsigned int (__fastcall *v17)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  struct _LDEV *result; // rax
  struct _ERESOURCE *v19; // rdx
  PVOID Buffer[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+40h] [rbp-30h] BYREF
  int v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+4Ch] [rbp-24h]
  struct tagDRVENABLEDATA v24; // [rsp+50h] [rbp-20h] BYREF
  PVOID v25; // [rsp+60h] [rbp-10h]
  BOOL v26; // [rsp+68h] [rbp-8h]
  int v27; // [rsp+6Ch] [rbp-4h]
  int v28; // [rsp+B0h] [rbp+40h] BYREF
  int v29; // [rsp+B8h] [rbp+48h]
  __int64 v30; // [rsp+C8h] [rbp+58h]

  v29 = a2;
  LODWORD(v30) = a3;
  v3 = 0LL;
  v28 = 0;
  v4 = a3;
  v5 = a2;
  WdLogSingleEntry1(4LL, Source);
  WdLogGlobalForLineNumber = 1666;
  if ( !Source || !*Source )
    return 0LL;
  v8 = 0;
  *(_OWORD *)Buffer = 0LL;
  v9 = 0;
  v10 = *(_QWORD *)(W32GetSessionState(v7) + 88);
  if ( v5 != 1 )
    goto LABEL_4;
  if ( wcsicmp(Source, L"WORKERDD") && wcsicmp(Source, L"TSDDD") )
  {
    if ( (unsigned int)IsCddCddRemoteSessionFilteringAllowed() && (unsigned int)(v4 - 2) <= 1 )
    {
      v8 = 1;
      v4 = 3;
      if ( !*(_DWORD *)(v10 + 1052) )
        v4 = v30;
      if ( !(unsigned int)MakeSystemRelativePath(Source, (PUNICODE_STRING)Buffer) )
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 1719;
        return 0LL;
      }
    }
  }
  else
  {
    v9 = 1;
  }
LABEL_4:
  GreAcquireSemaphore<19,>((struct _ERESOURCE **)v10);
  if ( v9 )
  {
    v3 = ldevBindDisplayStub();
    v14 = 1;
    v28 = 1;
  }
  else
  {
    v22 = v5;
    v11 = 1;
    v21 = (__int64)Source;
    v12 = L"CDD";
    v23 = v4;
    if ( !wcsicmp(Source, L"CDD") )
    {
      v30 = (unsigned int)Feature_CddInSystemSpace__private_featureState;
      if ( (Feature_CddInSystemSpace__private_featureState & 0x10) == 0 )
      {
        LODWORD(v30) = Feature_CddInSystemSpace__private_featureState | 1;
        wil_details_FeatureReporting_ReportUsageToService(&Feature_CddInSystemSpace__private_descriptor, v30, 3LL);
        wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
          v30,
          3LL,
          &Feature_CddInSystemSpace__private_descriptor);
      }
      v11 = 0;
    }
    v30 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
    if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
    {
      LODWORD(v30) = Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1;
      wil_details_FeatureReporting_ReportUsageToService(
        &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
        v30,
        3LL);
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
        v30,
        3LL,
        &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
    }
    if ( wcsicmp(Source, L"CDD") && wcsicmp(Source, L"RDPUDD") )
    {
      WdLogSingleEntry0(2LL);
      v19 = *(struct _ERESOURCE **)v10;
      WdLogGlobalForLineNumber = 1742;
      GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
        (__int64)v19);
      goto LABEL_23;
    }
    if ( !v8 )
      v12 = Source;
    v13 = ldevLoadImage(v12, 0, &v28, v11, v8, (__int64)&v21);
    v5 = v29;
    v3 = (struct _LDEV *)v13;
    v14 = v28;
  }
  if ( !v3 )
    goto LABEL_40;
  if ( v14 )
  {
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1778;
LABEL_40:
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v10);
    goto LABEL_23;
  }
  v25 = Buffer[1];
  *(_QWORD *)&v24.iDriverVersion = 0LL;
  v26 = v4 == 3;
  v27 = 0;
  v15 = *((_QWORD *)v3 + 2);
  v24.pdrvfn = 0LL;
  v16 = *(unsigned int (__fastcall **)(__int64, _QWORD, struct tagDRVENABLEDATA *))(v15 + 32);
  if ( v16
    && v16(196865LL, (unsigned int)(16 * (v8 + 1)), &v24)
    && v24.iDriverVersion - 0x20000 <= 0x10101
    && (unsigned int)ldevFillTable(v3, &v24) )
  {
    *((_DWORD *)v3 + 8) = v5;
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v10);
    v17 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*((_QWORD *)v3 + 113) + 616LL);
    if ( v17 )
    {
      if ( !v17(*(_QWORD *)(v10 + 2880), *(_QWORD *)(v10 + 2872), *(_QWORD *)(v10 + 2864), *(_QWORD *)(v10 + 2888)) )
      {
        ldevUnloadImage(v3);
        v3 = 0LL;
        WdLogSingleEntry0(5LL);
        WdLogGlobalForLineNumber = 1850;
        goto LABEL_23;
      }
      *((_DWORD *)v3 + 17) = 1;
    }
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1860;
  }
  else
  {
    GreReleaseSemaphoreCommon<19,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      *(_QWORD *)v10);
    ldevUnloadImage(v3);
    v3 = 0LL;
    WdLogSingleEntry0(5LL);
    WdLogGlobalForLineNumber = 1875;
  }
LABEL_23:
  if ( v8 )
  {
    if ( Buffer[1] )
      GreDeleteFastMutex((char *)Buffer[1]);
    LODWORD(Buffer[0]) = 0;
    Buffer[1] = 0LL;
  }
  WdLogSingleEntry1(5LL, v3);
  result = v3;
  WdLogGlobalForLineNumber = 1891;
  return result;
}
