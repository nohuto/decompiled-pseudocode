/*
 * XREFs of ?ArManagerReleaseLockExclusive@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180005A40
 * Callers:
 *     ?ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x180005978 (-ArHostClearChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z @ 0x1800059C8 (-ArHostWaitForAndSetChangeInProgress@@YAXPEAU_AR_ACTIVITY_HOST@@@Z.c)
 *     ?ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z @ 0x180055930 (-ArManagerUpdateCsState@@YAXPEAT_HAM_PDC_STATE_UPDATE@@@Z.c)
 *     ?ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800681D0 (-ArCsStateChangeCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x1800781C0 (-ArManagerRundown@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ArManagerReleaseLockExclusive(struct _ACTIVITY_RESTARTER *a1)
{
  __int64 *Value; // rax
  __int64 v2; // rcx

  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
  if ( ArLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(ArLockTrackerId);
    v2 = *Value;
    if ( (*Value & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[2]-- == 1 )
      *Value = v2 & 0xFFFFFFFFFFFFFFFDuLL;
  }
}
