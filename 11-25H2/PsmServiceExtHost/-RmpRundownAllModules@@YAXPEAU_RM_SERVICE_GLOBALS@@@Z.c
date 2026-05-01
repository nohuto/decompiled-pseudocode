/*
 * XREFs of ?RmpRundownAllModules@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x1800859E4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x1800778B0 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     CempLockAcquireExclusive @ 0x18002B8B0 (CempLockAcquireExclusive.c)
 *     CempLockSleepConditionVariableExclusive @ 0x1800463B0 (CempLockSleepConditionVariableExclusive.c)
 *     ?RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180060830 (-RmpGameModeAcquireLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x180081150 (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?Rundown@ResourceManager@ExecutionModel@@QEAAXXZ @ 0x180086DE4 (-Rundown@ResourceManager@ExecutionModel@@QEAAXXZ.c)
 *     ?RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180088F84 (-RmpEnforcerContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18008D11C (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18008D8A0 (-RmpSystemNotificationContextRundown@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 */

void __fastcall RmpRundownAllModules(struct _RM_SERVICE_GLOBALS *a1)
{
  struct _RM_GAME_MODE_CONTEXT *v1; // rdi
  ExecutionModel::ResourceManager *v3; // rcx
  char *v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2096);
  RmpGameModeAcquireLock((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2096));
  RmpAcquireGlobalLock();
  *((_DWORD *)a1 + 882) |= 1u;
  RmpReleaseGlobalLock();
  *((_DWORD *)a1 + 544) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 2168);
  HampManagerRundown((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 2248));
  v3 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 442);
  if ( v3 )
    ExecutionModel::ResourceManager::Rundown(v3);
  if ( *((_QWORD *)a1 + 258) )
  {
    RtlUnsubscribeWnfNotificationWaitForCompletion();
    *((_QWORD *)a1 + 258) = 0LL;
  }
  RmpEnforcerContextRundown(a1);
  RmpGameModeRundown(v1);
  CempLockAcquireExclusive((__int64)a1 + 312);
  *((_DWORD *)a1 + 88) |= 1u;
  while ( 1 )
  {
    v4 = (char *)a1 + 312;
    if ( !*((_DWORD *)a1 + 97) )
      break;
    CempLockSleepConditionVariableExclusive((__int64)v4, (__int64)a1 + 344, 0LL);
  }
  *((_DWORD *)a1 + 80) = 0;
  RtlReleaseSRWLockExclusive(v4);
  while ( 1 )
  {
    v5 = *((_DWORD *)a1 + 99);
    if ( !v5 )
      break;
    RtlWaitOnAddress((char *)a1 + 396, &v5, 4LL);
  }
  RmpSystemNotificationContextRundown(a1);
  if ( *((_QWORD *)a1 + 70) )
  {
    RmpAcquireGlobalLock();
    TpSetTimer(*((_QWORD *)a1 + 70), 0LL, 0LL, 0LL);
    RmpReleaseGlobalLock();
    TpWaitForTimer(*((_QWORD *)a1 + 70), 1LL);
  }
}
