/*
 * XREFs of ?ArManagerAcquireLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180005AA8
 * Callers:
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005988 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800059D8 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x1800558B0 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180068050 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180078220 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ArManagerAcquireLockExclusive(struct _ACTIVITY_RESTARTER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = ArLockTrackerId;
  if ( ArLockTrackerId != -1 )
  {
    Value = TlsGetValue(ArLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 48);
  *((_DWORD *)a1 + 14) = GetCurrentThreadId();
}
