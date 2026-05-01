/*
 * XREFs of ?ArAcquireGlobalLockShared@@YAXXZ @ 0x180005F28
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B20 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18007829C (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     CempLockTrackerAreLocksHeldAtLevelOrHigher @ 0x1800041D0 (CempLockTrackerAreLocksHeldAtLevelOrHigher.c)
 */

void ArAcquireGlobalLockShared(void)
{
  DWORD v0; // edi
  _QWORD *Value; // rbx

  v0 = ArLockTrackerId;
  if ( ArLockTrackerId != -1 )
  {
    Value = TlsGetValue(ArLockTrackerId);
    if ( CempLockTrackerAreLocksHeldAtLevelOrHigher(v0, 0) )
      NT_ASSERT("!CempLockTrackerAreLocksHeldAtLevelOrHigher( TrackerId, MinDisallowedLevel)");
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockShared(&ArGlobalLock);
}
