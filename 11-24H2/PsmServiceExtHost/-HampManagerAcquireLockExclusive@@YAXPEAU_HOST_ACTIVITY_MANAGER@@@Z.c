/*
 * XREFs of ?HampManagerAcquireLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000D550
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BBA0 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BE78 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C08C (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18000D4F8 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BB50 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026DF0 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027770 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C1D8 (-HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C200 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x1800540A8 (-HampPdcBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180054148 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x180054210 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054D14 (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B668 (-HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C30C (-HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180070574 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800707D0 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerAcquireLockExclusive(struct _HOST_ACTIVITY_MANAGER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x400uLL;
    ++Value[11];
  }
  CempLockAcquireExclusive(a1);
}
