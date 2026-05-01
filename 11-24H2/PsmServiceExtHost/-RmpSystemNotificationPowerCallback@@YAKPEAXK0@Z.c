/*
 * XREFs of ?RmpSystemNotificationPowerCallback@@YAKPEAXK0@Z @ 0x180055B40
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEAX@Z2@Z @ 0x180055F50 (-RmpPartitionTableActOnActivePartitions@@YAJPEAU_RM_PARTITION_TABLE@@KP6AJPEAU_RM_PARTITION@@PEA.c)
 *     ?RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z @ 0x180056104 (-RmpTelemetrySetTimer@@YAXPEAU_RM_SERVICE_GLOBALS@@KK@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x1800561FC (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z @ 0x180086E60 (-RemoveIoCountersFromCirculation@ResourceManager@ExecutionModel@@QEAAX_KPEAVBaseResourceSet@2@@Z.c)
 *     ?ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z @ 0x180086F44 (-ReplenishIoCounterPool@ResourceManager@ExecutionModel@@QEAAX_K@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemNotificationPowerCallback(struct _RM_SERVICE_GLOBALS *a1, __int64 a2, _QWORD *a3)
{
  unsigned int v5; // edx
  __int64 v6; // rcx
  bool v7; // zf
  int v8; // ecx
  unsigned int v9; // ebx
  DWORD TickCount; // eax
  int v11; // r9d
  unsigned __int64 v12; // r8
  ExecutionModel::ResourceManager *v13; // rcx
  int v15; // edx
  __int64 v16; // rax
  unsigned int v17; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v18; // [rsp+34h] [rbp-B4h]
  unsigned int v19; // [rsp+38h] [rbp-B0h] BYREF
  int v20; // [rsp+3Ch] [rbp-ACh] BYREF
  _BYTE v21[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v21, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v21);
  RmpAcquireGlobalLock();
  v5 = *((_DWORD *)a1 + 164);
  v6 = *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 - *a3;
  if ( *(_QWORD *)&GUID_LOW_POWER_EPOCH.Data1 == *a3 )
    v6 = *(_QWORD *)GUID_LOW_POWER_EPOCH.Data4 - a3[1];
  v7 = v6 == 0;
  v8 = *((_DWORD *)a3 + 5);
  if ( v7 )
  {
    v9 = v5 | 1;
    if ( !v8 )
      v9 = *((_DWORD *)a1 + 164) & 0xFFFFFFFE;
  }
  else if ( v8 )
  {
    v9 = v5 & 0xFFFFFFFD;
  }
  else
  {
    v9 = v5 | 2;
  }
  v17 = *((_DWORD *)a1 + 164);
  v18 = v9;
  RmpPartitionTableActOnActivePartitions(
    (struct _RM_SERVICE_GLOBALS *)((char *)a1 + 312),
    v5,
    (int (*)(struct _RM_PARTITION *, void *))RmpMemoryMonitorInstanceOnSystemStateChanged,
    &v17);
  TickCount = GetTickCount();
  RmpTelemetrySetTimer(a1, (v9 & 1) != 0 ? 3600000 : 900000, TickCount);
  v12 = *((unsigned int *)a1 + 131);
  v13 = (ExecutionModel::ResourceManager *)*((_QWORD *)a1 + 442);
  if ( (_DWORD)v12 )
  {
    v15 = (v18 >> 1) & 1;
    if ( ((v17 >> 1) & 1) != v15 )
    {
      if ( v15 )
      {
        ExecutionModel::ResourceManager::RemoveIoCountersFromCirculation(
          v13,
          *((unsigned int *)a1 + 131),
          (struct ExecutionModel::BaseResourceSet *)v12);
      }
      else
      {
        v16 = *((_QWORD *)v13 + 4);
        *((_QWORD *)v13 + 6) -= v12;
        if ( (*(_BYTE *)(v16 + 1272) & 4) == 0 )
          ExecutionModel::ResourceManager::ReplenishIoCounterPool(v13, v12);
      }
    }
  }
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 1) != 0 && (qword_1800E8290 & 1) == qword_1800E8290 )
  {
    v20 = *((_DWORD *)a1 + 164);
    v19 = v9;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E8278,
      (unsigned int)&unk_1800D955D,
      v12,
      v11,
      (__int64)&v20,
      (__int64)&v19);
  }
  *((_DWORD *)a1 + 164) = v9;
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return 0LL;
}
