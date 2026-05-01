/*
 * XREFs of ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DBAC
 * Callers:
 *     ?RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PSM_HOST_INFO@@PEAU_HAM_APPLICATION@@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000DA1C (-RmpActivityHostAllocateAndInitialize@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PARTITION@@PEAU_RM_PS.c)
 * Callees:
 *     ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180063A3C (-RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 */

__int64 __fastcall RmpEnforcementInfoInitializeCommon(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // r9
  NTSTATUS Event; // ebx
  __int128 v4; // xmm1
  __int128 v6; // [rsp+30h] [rbp-28h] BYREF
  void *v7[2]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *((_QWORD *)a1 + 6) + 3384LL;
  v6 = 0LL;
  *(_OWORD *)v7 = 0LL;
  Event = TpAllocWork(&v6, RmpEmptyWorkerCallback, a1, v2);
  if ( Event < 0
    || (Event = NtCreateEvent((PHANDLE)&v6 + 1, 0x1F0003u, 0LL, NotificationEvent, 0), Event < 0)
    || (Event = NtCreateEvent(v7, 0x1F0003u, 0LL, NotificationEvent, 0), Event < 0) )
  {
    RmpEmptyWorkerCleanup((struct _RM_EMPTY_WORKER_CONTEXT *)&v6);
  }
  else
  {
    Event = 0;
    memset_0((char *)a1 + 1224, 0, 0x80uLL);
    *(_OWORD *)((char *)a1 + 1192) = 0LL;
    *(_OWORD *)((char *)a1 + 1208) = 0LL;
    *((_DWORD *)a1 + 304) = 1;
    RtlInitializeConditionVariable((char *)a1 + 1256);
    v4 = *(_OWORD *)v7;
    *(_OWORD *)((char *)a1 + 1320) = v6;
    *(_OWORD *)((char *)a1 + 1336) = v4;
  }
  return (unsigned int)Event;
}
