/*
 * XREFs of ?HampHostGetImportance@@YA?AT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18002A520
 * Callers:
 *     ?RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180029F90 (-RmpActivityHostResourceSetsChanged@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostGetImportance(__int64 a1)
{
  DWORD v1; // esi
  _QWORD *Value; // rbx
  unsigned int v4; // ebx
  __int64 *v5; // rax
  __int64 v6; // rcx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockShared(a1);
  v4 = *(_DWORD *)(a1 + 680);
  if ( HampLockTrackerId != -1 )
  {
    v5 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v6 = *v5;
    if ( (*v5 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( v5[2]-- == 1 )
      *v5 = v6 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(a1);
  return v4;
}
