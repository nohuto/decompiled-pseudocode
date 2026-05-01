/*
 * XREFs of ?HampSessionGetLogoffInProgress@@YAEPEAU_HAM_SESSION@@@Z @ 0x18002ACF0
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x1800293A0 (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 *     ?HampActTryStart@@YA?AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002A880 (-HampActTryStart@@YA-AW4_HAM_ACT_START_RESULT@@PEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActCanBeStarted@@YA?AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z @ 0x18002B258 (-HampActCanBeStarted@@YA-AW4_HAM_ACTIVITY_START_DENY_REASON@@PEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall HampSessionGetLogoffInProgress(struct _HAM_SESSION *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v5; // ecx
  bool v6; // di
  __int64 *v7; // rax
  __int64 v8; // rdx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x100uLL;
    ++Value[9];
  }
  RtlAcquireSRWLockExclusive((char *)a1 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v5 = HampLockTrackerId;
  *((_DWORD *)a1 + 26) = CurrentThreadId;
  v6 = (*((_DWORD *)a1 + 36) & 2) != 0;
  if ( v5 != -1 )
  {
    v7 = (__int64 *)TlsGetValue(v5);
    v8 = *v7;
    if ( (*v7 & 0x100) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v7[9]-- == 1 )
      *v7 = v8 & 0xFFFFFFFFFFFFFEFFuLL;
  }
  *((_DWORD *)a1 + 26) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 96);
  return v6;
}
