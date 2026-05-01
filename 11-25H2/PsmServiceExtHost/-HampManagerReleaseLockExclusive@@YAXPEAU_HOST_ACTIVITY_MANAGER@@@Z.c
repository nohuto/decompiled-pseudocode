/*
 * XREFs of ?HampManagerReleaseLockExclusive@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18000C0B0
 * Callers:
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BC20 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000BEF8 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C10C (-HampHostEndInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x18000D578 (-HampPdcSignalWorker@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z @ 0x18001BBD0 (-HampActEndStateChange@@YAXPEAU_HAM_ACTIVITY@@K@Z.c)
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180026E70 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800277F0 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C258 (-HampPdcResetWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18003C280 (-HampPdcSetCurrentThreadWorker@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x1800541C8 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z @ 0x180054290 (-HampPdcPlmPhaseNotificationCallback@@YAJPEAXK@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054D94 (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18006B888 (-HampDepGroupCleanup@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x18006C53C (-HampPdcEndBoostForPhaseExit@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180070770 (-HampPdcExitPlmPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x1800709D0 (-HampManagerAddDependencyGroup@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerReleaseLockExclusive(struct _HOST_ACTIVITY_MANAGER *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 0x400) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[11]-- == 1 )
      *Value = v3 & 0xFFFFFFFFFFFFFBFFuLL;
  }
  *((_DWORD *)a1 + 2) = 0;
  RtlReleaseSRWLockExclusive(a1);
}
