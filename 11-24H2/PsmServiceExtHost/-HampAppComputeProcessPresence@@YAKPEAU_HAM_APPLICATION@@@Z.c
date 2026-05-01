/*
 * XREFs of ?HampAppComputeProcessPresence@@YAKPEAU_HAM_APPLICATION@@@Z @ 0x1800171FC
 * Callers:
 *     ?HampPkgComputeStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x1800163E4 (-HampPkgComputeStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 * Callees:
 *     ?HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z @ 0x180017344 (-HampAppGetFirstHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_APPLICATION@@@Z.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180026B24 (-HampAppGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 */

__int64 __fastcall HampAppComputeProcessPresence(struct _HAM_APPLICATION *a1)
{
  struct _RM_HAM_ACTIVITY_HOST *FirstHost; // rax
  unsigned int v2; // esi
  struct _RM_HAM_ACTIVITY_HOST *v3; // rbx
  DWORD v4; // ebp
  _QWORD *Value; // rdi
  __int64 *v6; // rax
  __int64 v7; // rcx
  bool v8; // zf
  __int64 *v10; // rax
  __int64 v11; // rcx

  FirstHost = HampAppGetFirstHost(a1);
  v2 = 1;
  while ( 1 )
  {
    v3 = FirstHost;
    if ( !FirstHost )
      return 0;
    v4 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      Value = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
      *Value |= 2uLL;
      ++Value[2];
    }
    RtlAcquireSRWLockShared(v3);
    if ( (*((_QWORD *)v3 + 83) & 0x2000000000000LL) != 0 )
      break;
    if ( HampLockTrackerId != -1 )
    {
      v10 = (__int64 *)TlsGetValue(HampLockTrackerId);
      v11 = *v10;
      if ( (*v10 & 2) == 0 )
        NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
      v8 = v10[2]-- == 1;
      if ( v8 )
        *v10 = v11 & 0xFFFFFFFFFFFFFFFDuLL;
    }
    RtlReleaseSRWLockShared(v3);
    FirstHost = HampAppGetNextHost(v3);
  }
  if ( HampLockTrackerId != -1 )
  {
    v6 = (__int64 *)TlsGetValue(HampLockTrackerId);
    v7 = *v6;
    if ( (*v6 & 2) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    v8 = v6[2]-- == 1;
    if ( v8 )
      *v6 = v7 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  RtlReleaseSRWLockShared(v3);
  RmHamHostDereference(v3);
  return v2;
}
