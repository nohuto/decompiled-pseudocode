/*
 * XREFs of ?HampPkgAcquireLockShared@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x18005A0AC
 * Callers:
 *     ?HampHostComputeWaitType@@YA?AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000C3C4 (-HampHostComputeWaitType@@YA-AW4_HAM_HOST_WAIT_TYPE@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z @ 0x180045DC0 (-HampPkgIsPpleApplication@@YAEPEAU_HAM_APPLICATION@@@Z.c)
 *     ?HampPkgGetStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18005A004 (-HampPkgGetStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z @ 0x18005A074 (-HampPkgIsServicingEnabled@@YAEPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18006CC48 (-HamSrvQueryPackageStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKPEAT_HAM_EXTERNAL_STATE_SU.c)
 *     ?HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180083AD4 (-HampPkgSuspend@@YAJPEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_CONTEXT@@PEAW4_HAM_APPLICATION_EXECUTION_S.c)
 * Callees:
 *     <none>
 */

void __fastcall HampPkgAcquireLockShared(struct _HAM_PACKAGE *a1)
{
  DWORD v1; // edi
  _QWORD *Value; // rbx

  v1 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v1) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 0x40uLL;
    ++Value[7];
  }
  RtlAcquireSRWLockShared((char *)a1 + 304);
}
