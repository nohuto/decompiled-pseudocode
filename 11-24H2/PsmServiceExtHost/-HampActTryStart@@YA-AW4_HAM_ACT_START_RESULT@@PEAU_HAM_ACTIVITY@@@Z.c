/*
 * XREFs of ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A880
 * Callers:
 *     ?HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025210 (-HampHostCheckStartPendingActivities@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActNotifyResourcesAcquired@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18005D71C (-HampActNotifyResourcesAcquired@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     ?RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x18000606C (-RmpPowerBoostStartTimedBoost@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029210 (-HampHostNeedsEnforcementUpdate@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18002ACF0 (-HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z.c)
 *     ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18002ADE0 (-HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z.c)
 *     ?HampAppGetLicenseState@@YA?AW4_HAM_LICENSE_TYPE@@PEAU_HAM_APPLICATION@@@Z @ 0x18002AEB0 (-HampAppGetLicenseState@@YA-AW4_HAM_LICENSE_TYPE@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampActGetExecutionSpeed@@YA?AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B120 (-HampActGetExecutionSpeed@@YA-AW4_RM_EXECUTION_SPEED@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18002BF7C (-HampActStart@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003BB68 (-HampHostIsResumed@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z @ 0x180056D2C (-HampActInvalidateAndNotify@@YAXPEAU_HAM_ACTIVITY@@W4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE@@PEBGKPEAPEAXPEAW4_PDC_ACTIVATOR_ERROR_DETAIL@@@Z @ 0x180062AE4 (-HampSystemActivationClientActivate@@YAJPEAXPEBU_PDC_ACTIVATION_PARAMETERS@@0W4PDC_ACTIVITY_TYPE.c)
 *     ?RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z @ 0x1800850F8 (-RmHamHostGetCurrentState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAT_RM_OPTIMIZATION_STATE@@1@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180091A10 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

__int64 __fastcall HampActTryStart(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  struct _RM_HAM_ACTIVITY_HOST *v4; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v5; // rcx
  struct _RM_SERVICE_GLOBALS *v6; // rcx
  char v7; // al
  struct _RM_HAM_ACTIVITY_HOST *v8; // rcx
  struct _RM_HAM_ACTIVITY_HOST *v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  unsigned __int64 v15; // rax
  _OWORD v16[3]; // [rsp+40h] [rbp-38h] BYREF
  int v17; // [rsp+A0h] [rbp+28h] BYREF
  int v18; // [rsp+A8h] [rbp+30h] BYREF
  int v19; // [rsp+B0h] [rbp+38h]
  __int64 v20; // [rsp+B8h] [rbp+40h]

  v1 = *(_QWORD *)(a1 + 80);
  v2 = 0;
  v18 = 0;
  v17 = 0;
  memset(v16, 0, 40);
  v19 = 0;
  v20 = 0LL;
  if ( (*(_QWORD *)(v1 + 664) & 0x10000000000000LL) != 0 && (*(_DWORD *)(a1 + 112) & 0x400) != 0 )
    return 15;
  if ( HampSessionGetLogoffInProgress(*(struct _HAM_SESSION **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL)
                                                                          + 88LL)
                                                              + 160LL))
    || HampUserGetLogoffInProgress(*(struct _HAM_USER **)(*(_QWORD *)(*(_QWORD *)(v1 + 792) + 88LL) + 88LL)) )
  {
    return 7;
  }
  if ( (*(_DWORD *)(a1 + 552) & 8) != 0 )
    return 6;
  if ( (*(_DWORD *)(a1 + 552) & 0x300u) >= 0x100 )
    return 5LL;
  RmHamHostGetCurrentState(
    (struct _RM_HAM_ACTIVITY_HOST *)v1,
    (union _RM_OPTIMIZATION_STATE *)&v18,
    (union _RM_OPTIMIZATION_STATE *)&v17);
  if ( ((v18 & 8) != 0 || (v17 & 8) != 0) && (*(_QWORD *)(v1 + 664) & 0x80000000000LL) != 0 )
    return 9LL;
  if ( *(_BYTE *)(a1 + 563) < 2u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 16LL);
    v4 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 2;
    HampHostUpdateActivityState(v4);
  }
  if ( (int)HampAppGetLicenseState(*(_QWORD *)(v1 + 792)) < ((*(_DWORD *)(a1 + 112) >> 23) & 3) )
    return 10;
  if ( *(_BYTE *)(a1 + 563) < 3u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 24LL);
    v5 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 3;
    HampHostUpdateActivityState(v5);
  }
  if ( (*(_BYTE *)(a1 + 552) & 0x20) == 0 && (int)HampActGetExecutionSpeed(a1) >= 2 )
  {
    if ( (*(_QWORD *)(v1 + 664) & 0x2000000000000LL) != 0 )
    {
      if ( HampHostIsResumed((struct _RM_HAM_ACTIVITY_HOST *)v1) )
        goto LABEL_15;
      v14 = 500;
    }
    else
    {
      v14 = 2000;
    }
    *(_DWORD *)(a1 + 552) |= 0x20u;
    if ( (int)RmpPowerBoostStartTimedBoost(v6, v14) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
  }
LABEL_15:
  v7 = v17;
  if ( (*(_DWORD *)(a1 + 112) & 0x400) != 0 && (v17 & 0x80u) != 0 && (v18 & 0x80u) == 0 )
    return 12LL;
  if ( *(_BYTE *)(a1 + 563) < 4u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 32LL);
    v8 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 4;
    HampHostUpdateActivityState(v8);
    v7 = v17;
  }
  if ( (*(_DWORD *)(a1 + 112) & 0x1800) == 0 )
  {
    if ( (*(_DWORD *)(v1 + 664) & 0x30000) != 0 )
      return 11;
    if ( v7 < 0 )
      return 12LL;
  }
  if ( *(_BYTE *)(a1 + 563) < 5u )
  {
    RtlQueryPerformanceCounter(*(_QWORD *)(a1 + 528) + 40LL);
    v9 = *(struct _RM_HAM_ACTIVITY_HOST **)(a1 + 80);
    *(_BYTE *)(a1 + 563) = 5;
    HampHostUpdateActivityState(v9);
  }
  v10 = *(_QWORD *)(a1 + 512);
  if ( v10 && v10 != *(_QWORD *)(v1 + 816) )
  {
    HampActInvalidateAndNotify(a1, 0LL);
    return 8LL;
  }
  v11 = *(_DWORD *)(a1 + 112);
  if ( (v11 & 0x400) == 0 )
  {
    if ( (v11 & 0x800) != 0 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 664LL) & 0xE0000000LL;
      if ( v13 == 0x80000000LL || v13 == 2684354560LL )
      {
        HampActInvalidateAndNotify(a1, 6912LL);
        return 3;
      }
    }
    goto LABEL_26;
  }
  if ( (v18 & 0x80u) == 0 )
  {
LABEL_26:
    if ( (unsigned int)HampHostNeedsEnforcementUpdate((struct _RM_HAM_ACTIVITY_HOST *)v1)
      && (*(_DWORD *)(a1 + 112) & 0x1000) == 0 )
    {
      return 14LL;
    }
    if ( *(_DWORD *)(a1 + 380) != 5 )
    {
      DWORD1(v16[0]) = *(_DWORD *)(a1 + 384);
      *(_QWORD *)&v16[1] = a1 + 124;
      v15 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
      *((_QWORD *)&v16[0] + 1) = 0LL;
      *(_OWORD *)((char *)&v16[1] + 8) = 0LL;
      LODWORD(v16[0]) = 1;
      if ( (int)HampSystemActivationClientActivate(*(_QWORD *)(v15 + 144), v16, a1) < 0 )
      {
        HampActInvalidateAndNotify(a1, 6912LL);
        return 2;
      }
      *(_QWORD *)(a1 + 504) = v20;
    }
    HampActStart((struct _HAM_ACTIVITY *)a1);
    return v2;
  }
  return 13LL;
}
