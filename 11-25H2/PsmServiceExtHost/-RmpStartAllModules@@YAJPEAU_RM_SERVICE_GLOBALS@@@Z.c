/*
 * XREFs of ?RmpStartAllModules@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180085B48
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180056184 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     ?RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z @ 0x180077EC4 (-RmpRpExtStart@@YAJPEAU_RM_RESOURCE_POLICY_CONTEXT@@@Z.c)
 *     ?HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x1800813D8 (-HampManagerStart@@YAJPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008D948 (-RmpSystemNotificationContextStart@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

__int64 __fastcall RmpStartAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v2; // rbx
  int v3; // ebx
  int v4; // ebx
  DWORD TickCount; // eax

  v2 = (char *)a1 + 680;
  RmpAcquireGlobalLock();
  v3 = RtlSubscribeWnfStateChangeNotification(
         v2 + 1384,
         WNF_AUDC_CPUSET_ID_SYSTEM,
         0LL,
         RmpCpuSetManagerAudioCpuWnfCallback,
         v2,
         0LL,
         0,
         0);
  RmpReleaseGlobalLock();
  if ( v3 >= 0 )
  {
    v3 = RmpSystemNotificationContextStart(a1);
    if ( v3 >= 0 )
    {
      RmpAcquireGlobalLock();
      v4 = *((_DWORD *)a1 + 164);
      *((_DWORD *)a1 + 142) = GetTickCount();
      TickCount = GetTickCount();
      RmpTelemetrySetTimer(a1, (v4 & 1) != 0 ? 3600000 : 900000, TickCount);
      RmpReleaseGlobalLock();
      v3 = RmpRpExtStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 664));
      if ( v3 >= 0 )
      {
        v3 = HampManagerStart((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248));
        if ( v3 >= 0 )
          return 0;
      }
    }
  }
  return (unsigned int)v3;
}
