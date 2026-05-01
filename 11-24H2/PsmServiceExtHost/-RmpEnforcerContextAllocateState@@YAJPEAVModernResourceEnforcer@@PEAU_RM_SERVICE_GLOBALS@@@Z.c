/*
 * XREFs of ?RmpEnforcerContextAllocateState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008911C
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085754 (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A9010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmpEnforcerContextAllocateState(struct ModernResourceEnforcer *a1, struct _RM_SERVICE_GLOBALS *a2)
{
  char *v2; // rsi
  int v5; // r8d
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = (char *)a2 + 3224;
  v5 = TpAllocTimer((char *)a2 + 128, RmpPowerBoostWatchdogCallback, a2, (char *)a2 + 3224);
  if ( v5 >= 0 )
  {
    v5 = TpAllocTimer((char *)a2 + 160, RmpPowerBoostTimedBoostCallback, a2, v2);
    if ( v5 >= 0 )
    {
      v6 = TpAllocTimer((char *)a2 + 192, RmpQoSWatchdogCallback, (char *)a2 + 176, v2);
      v5 = 0;
      if ( v6 < 0 )
        v5 = v6;
      if ( v5 >= 0 )
      {
        v7 = TpAllocTimer((char *)a2 + 48, RmpGpuMonitorTimerCallback, a2, v2);
        v5 = 0;
        if ( v7 < 0 )
          v5 = v7;
        if ( v5 >= 0 )
        {
          v8 = TpAllocWork((char *)a2 + 216, RmpOfferLazyDecommitWorkerCallback, (char *)a2 + 216, v2);
          v5 = 0;
          if ( v8 < 0 )
            v5 = v8;
          if ( v5 >= 0 )
          {
            if ( a1 )
            {
              *((_QWORD *)a2 + 5) = a1;
              (*(void (__fastcall **)(struct ModernResourceEnforcer *))(*(_QWORD *)a1 + 8LL))(a1);
            }
            return 0;
          }
        }
      }
    }
  }
  return (unsigned int)v5;
}
