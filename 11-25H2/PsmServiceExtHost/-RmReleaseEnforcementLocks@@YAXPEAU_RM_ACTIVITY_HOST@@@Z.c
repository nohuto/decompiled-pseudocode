/*
 * XREFs of ?RmReleaseEnforcementLocks@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002B000
 * Callers:
 *     ?HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180006E4C (-HamReleaseEnforcementLocks@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000B2C4 (-RmpEnforcementOptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z @ 0x18000BC20 (-RmpEnforcementUnoptimizeHost@@YAXPEAU_RM_ACTIVITY_HOST@@T_RM_OPTIMIZATION_STATE@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180025420 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180025E50 (-HampAppCheckQueueLicenseUpgradeForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180026410 (-HampAppCheckDowngradeLicense@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A5E0 (-HampAppCheckWaitForLicenseForHost@@YAKPEAU_HAM_APPLICATION@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180036E80 (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 *     ?RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180056E34 (-RmpEmptyWorkerWaitForCompleteOrAbort@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE@@@Z @ 0x180084C9C (-RmHamHostStateWorkerWaitForQuiesce@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1_KW4_HAM_HOST_WAIT_TYPE.c)
 * Callees:
 *     <none>
 */

void __fastcall RmReleaseEnforcementLocks(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 *Value; // rax
  __int64 v3; // rdx
  bool v4; // zf
  __int64 *v5; // rax
  __int64 v6; // rcx

  if ( HampLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(HampLockTrackerId);
    v3 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v4 = Value[2]-- == 1;
    if ( v4 )
      *Value = v3 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *((_DWORD *)a1 + 18) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 64);
  dword_1800E9388 = 0;
  RtlReleaseSRWLockExclusive(&RmpGlobalLock);
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v4 = v5[1]-- == 1;
    if ( v4 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFFEuLL;
  }
}
