/*
 * XREFs of ?ArReleaseGlobalLockShared@@YAXXZ @ 0x180005ED4
 * Callers:
 *     ?ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEAT_HAM_RESTART_PROPERTIES@@KK@Z @ 0x180005B20 (-ArSrvCheckCreateActivityForHost@@YAJPEA_KPEAU_RM_PSM_HOST_INFO@@PEAXPEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     ?ArSrvCloseActivity@@YAJ_K0@Z @ 0x18007829C (-ArSrvCloseActivity@@YAJ_K0@Z.c)
 * Callees:
 *     <none>
 */

void ArReleaseGlobalLockShared(void)
{
  __int64 *Value; // rax
  __int64 v1; // rcx

  RtlReleaseSRWLockShared(&ArGlobalLock);
  if ( ArLockTrackerId != -1 )
  {
    Value = (__int64 *)TlsGetValue(ArLockTrackerId);
    v1 = *Value;
    if ( (*Value & 1) == 0 )
      NT_ASSERT("(Tracker->Bitmap & LevelMask) != 0");
    if ( Value[1]-- == 1 )
      *Value = v1 & 0xFFFFFFFFFFFFFFFEuLL;
  }
}
