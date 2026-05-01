/*
 * XREFs of ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BBA0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800253A0 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x180003AF4 (-RmpActivityHostSetCommitSavings@@YAXPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800090C0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@K@Z @ 0x180009164 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BE78 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C030 (-HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C08C (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C108 (-HampHostIsForegroundBoostedOrPending@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z @ 0x18000C174 (-RmpEnforcementUpdateSwapState@@YAJPEAU_RM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D550 (-HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AF80 (-RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B028 (-RmAcquireEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003AA04 (-HampHostReleaseLockExclusive@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z @ 0x180055244 (-RmpPowerBoostEnableDisable@@YAJPEAU_RM_SERVICE_GLOBALS@@K@Z.c)
 *     ?RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z @ 0x18005E7BC (-RmpSystemChangePsmApplicationState@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_STATE@@K@Z.c)
 *     ?HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x180060AF4 (-HampUtilIsImportanceUserImpactful@@YAKT_RM_ACTIVITY_IMPORTANCE@@@Z.c)
 *     ?RmpSystemPriorityBoostThreadBegin@@YAJXZ @ 0x18006B2DC (-RmpSystemPriorityBoostThreadBegin@@YAJXZ.c)
 *     ?RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x180090FDC (-RmpSystemFreezeHostJob@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgs @ 0x180091A10 (MicrosoftTelemetryAssertTriggeredNoArgs.c)
 */

void __fastcall RmpEnforcementUnoptimizeHost(__int64 a1, char a2)
{
  __int64 v2; // rdi
  unsigned int IsForegroundBoostedOrPending; // r14d
  BOOL v6; // r15d
  BOOL v7; // ebp
  int v8; // r15d
  int v9; // ecx
  unsigned __int64 v10; // r14
  struct _HOST_ACTIVITY_MANAGER *v11; // rcx
  int ThreadInformation; // [rsp+58h] [rbp+10h] BYREF

  v2 = a1 + 64;
  if ( (a2 & 0x10) != 0 )
  {
    HampHostReleaseLockExclusive((struct _RM_HAM_ACTIVITY_HOST *)v2);
    RmpActivityHostSetCommitSavings((struct _RM_ACTIVITY_HOST *)a1, 0);
    HampHostAcquireLockExclusiveEx((struct _RM_HAM_ACTIVITY_HOST *)v2, 0);
  }
  if ( (a2 & 0x27) != 0 )
    *(_DWORD *)(a1 + 1268) &= ~(a2 & 0x27);
  if ( (a2 & 8) != 0 )
  {
    HampHostWaitForInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
    if ( (*(_QWORD *)(v2 + 664) & 0x200000000000LL) == 0 )
    {
      *(_DWORD *)(a1 + 1272) |= 8u;
      IsForegroundBoostedOrPending = HampHostIsForegroundBoostedOrPending((struct _RM_HAM_ACTIVITY_HOST *)v2);
      v6 = IsForegroundBoostedOrPending || (unsigned int)HampUtilIsImportanceUserImpactful(*(unsigned int *)(v2 + 680));
      RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      v7 = 0;
      if ( v6 )
        v7 = RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 1u) >= 0;
      if ( IsForegroundBoostedOrPending )
        v8 = RmpSystemPriorityBoostThreadBegin();
      else
        v8 = 0;
      RmpEnforcementUpdateSwapState((struct _RM_ACTIVITY_HOST *)a1, 0);
      if ( IsForegroundBoostedOrPending )
      {
        ThreadInformation = v8;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadBasePriority, &ThreadInformation, 4u);
      }
      if ( v7 )
        RmpPowerBoostEnableDisable(*(struct _RM_SERVICE_GLOBALS **)(a1 + 48), 0);
      RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
      *(_DWORD *)(a1 + 1272) &= ~8u;
    }
    *(_DWORD *)(a1 + 1268) &= ~8u;
    *(_QWORD *)(v2 + 664) &= ~0x200000000000uLL;
    HampHostEndInSwapTurn((struct _RM_HAM_ACTIVITY_HOST *)v2);
  }
  if ( a2 < 0 )
  {
    *(_QWORD *)(v2 + 672) |= 3uLL;
    v9 = *(_DWORD *)(a1 + 1272) | 0x80;
    *(_DWORD *)(a1 + 1272) = v9;
    *(_DWORD *)(a1 + 1272) = v9 ^ (*(_DWORD *)(a1 + 1268) ^ v9) & 0x100;
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    if ( (int)RmpSystemChangePsmApplicationState(a1, 0LL, 0LL) < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgs();
    HampHostChangeApplicationExecutionState(v2, 0, 1);
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    *(_DWORD *)(a1 + 1272) &= 0xFFFFFE7F;
    *(_DWORD *)(a1 + 1268) &= 0xFFFFFE7F;
    *(_QWORD *)(v2 + 664) &= 0xFFFFFFFF1FFFFFFFuLL;
    if ( (*(_BYTE *)(v2 + 672) & 0x20) != 0 )
    {
      v10 = (*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 792) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                                   + 120)
                       + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
          + 168;
      HampManagerAcquireLockExclusive(*(struct _HOST_ACTIVITY_MANAGER **)v10);
      v11 = *(struct _HOST_ACTIVITY_MANAGER **)v10;
      if ( *(_DWORD *)(v10 + 108) )
      {
        ++*(_QWORD *)(v10 + 120);
        HampManagerReleaseLockExclusive(v11);
        RtlWakeAddressAll(v10 + 120);
      }
      else
      {
        HampManagerReleaseLockExclusive(v11);
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
  {
    *(_DWORD *)(a1 + 1272) |= 0x40u;
    RmReleaseEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    RmpSystemFreezeHostJob((struct _RM_ACTIVITY_HOST *)a1, 0);
    RmAcquireEnforcementLocks((struct _RM_ACTIVITY_HOST *)a1);
    *(_DWORD *)(a1 + 1272) &= ~0x40u;
    *(_DWORD *)(a1 + 1268) &= ~0x40u;
  }
}
