/*
 * XREFs of ?RmpActivityHostApplyExecutionSpeed@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@@Z @ 0x180004FFC
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180004960 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     ?RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z @ 0x180005190 (-RmHamHostActOnProcesses@@YAJPEAU_RM_ACTIVITY_HOST@@KKP6AJ0PEAXK1@Z1@Z.c)
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x1800056D0 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 *     CempLockAcquireExclusive @ 0x18002B830 (CempLockAcquireExclusive.c)
 */

__int64 __fastcall RmpActivityHostApplyExecutionSpeed(
        struct _RM_ACTIVITY_HOST *a1,
        struct _RM_ENFORCEMENT_SETTINGS *a2)
{
  int v2; // edi
  int v4; // esi
  unsigned __int8 v6; // al
  char v7; // cl
  DWORD v8; // ebp
  _QWORD *Value; // rdi
  __int64 *v10; // rax
  __int64 v11; // rdx
  __int64 result; // rax

  v2 = *((_DWORD *)a2 + 6);
  v4 = *((_DWORD *)a1 + 304);
  if ( v4 < 1 == v2 < 1 || (result = RmpSystemApplyPsmPriorityToHost(), (int)result >= 0) )
  {
    v6 = v2 >= 2 && (*((_BYTE *)a2 + 28) & 2) != 0;
    v7 = v4 >= 2 && (*((_BYTE *)a1 + 1220) & 2) != 0;
    if ( v6 != v7 )
      RmHamHostActOnProcesses(a1, 0x2000u, 1u, RmpEnforcementApplyForegroundBoost, (void *)v6);
    v8 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v8) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    CempLockAcquireExclusive((char *)a1 + 64);
    *((_DWORD *)a1 + 304) = *((_DWORD *)a2 + 6);
    *((_BYTE *)a1 + 1220) ^= (*((_BYTE *)a2 + 28) ^ *((_BYTE *)a1 + 1220)) & 2;
    if ( HampLockTrackerId != -1 )
    {
      v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v11 = *v10;
      if ( (*v10 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      if ( v10[2]-- == 1 )
        *v10 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    *((_DWORD *)a1 + 18) = 0;
    RtlReleaseSRWLockExclusive((char *)a1 + 64);
    return 0LL;
  }
  return result;
}
