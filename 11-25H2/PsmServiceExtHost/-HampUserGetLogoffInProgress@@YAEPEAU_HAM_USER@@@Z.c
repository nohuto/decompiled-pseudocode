/*
 * XREFs of ?HampUserGetLogoffInProgress@@YAEPEAU_HAM_USER@@@Z @ 0x18002AE60
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180029420 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A900 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B2D8 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUserGetLogoffInProgress(struct _HAM_USER *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  unsigned __int8 v4; // bl
  __int64 *v5; // rax
  __int64 v6; // rdx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x80uLL;
    ++Value[8];
  }
  RtlAcquireSRWLockShared((char *)a1 + 168);
  v4 = *((_BYTE *)a1 + 192) & 1;
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 0x80u) == 0LL )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v5[8]-- == 1 )
      *v5 = v6 & 0xFFFFFFFFFFFFFF7FuLL;
  }
  RtlReleaseSRWLockShared((char *)a1 + 168);
  return v4;
}
