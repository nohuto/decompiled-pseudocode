/*
 * XREFs of ?HampManagerAcquireLockShared@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002B260
 * Callers:
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B2D8 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003ADF0 (-HampPdcDamEnterWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18003B170 (-HampPdcDamExitWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x1800541C8 (-HampPdcExitDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z @ 0x180054D94 (-HampPdcEnterDamPhase@@YAXPEAU_HAM_PDC_CONTEXT@@@Z.c)
 *     ?HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z @ 0x180055894 (-HampPdcNotifyCsState@@YAXPEAU_HAM_PDC_CONTEXT@@K@Z.c)
 *     ?HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18006F9E0 (-HampPdcPlmWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU1@@Z @ 0x180080DC0 (-HampManagerEnumerateDependencyGroups@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HOST_ACTIVITY_MANAGER@@.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HampManagerAcquireLockShared(struct _HOST_ACTIVITY_MANAGER *a1)
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
  RtlAcquireSRWLockShared(a1);
}
