/*
 * XREFs of ?RmSrvResourceSetReleaseResources@@YAJPEAU_RM_SERVICE_GLOBALS@@_K@Z @ 0x18001E1E0
 * Callers:
 *     ?HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18001C26C (-HampActSystemResourceCleanup@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@@@Z @ 0x18001DFEC (-RmpResourceSetTableFindEmSetById@@YAJPEAU_RM_OBJECT_TABLE@@_KPEAPEAVResourceSet@ExecutionModel@.c)
 *     CempLockTrackerIsSetForThread @ 0x18001E4AC (CempLockTrackerIsSetForThread.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall RmSrvResourceSetReleaseResources(struct _RM_SERVICE_GLOBALS *a1, __int64 a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  int v4; // esi
  int EmSetById; // eax
  struct ExecutionModel::ResourceSet *v6; // rdi
  int v7; // ebx
  _DWORD v9[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct ExecutionModel::ResourceSet *v10; // [rsp+38h] [rbp-C8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v12; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v13[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]
  _DWORD *v18; // [rsp+110h] [rbp+10h]
  __int64 v19; // [rsp+118h] [rbp+18h]
  EVENT_DESCRIPTOR *p_EventDescriptor; // [rsp+120h] [rbp+20h]
  __int64 v21; // [rsp+128h] [rbp+28h]

  v2 = RmSvcGlobals;
  memset_0(v13, 0, 0x88uLL);
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v4 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
    v4 = 1;
  }
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 1) != 0 && (qword_1800E7290 & 1) == qword_1800E7290 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E7280;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800E7280;
    v15 = &unk_1800D724A;
    UserData.Reserved = 2;
    v16 = 32;
    v17 = 1;
    v9[0] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E7298, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v10 = 0LL;
  RmpAcquireGlobalLock();
  EmSetById = RmpResourceSetTableFindEmSetById((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 536), a2, &v10);
  v6 = v10;
  if ( EmSetById < 0 )
  {
    v7 = EmSetById | 0x10000000;
  }
  else
  {
    v7 = (*(__int64 (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v10 + 32LL))(v10);
    if ( v7 >= 0 )
      v7 = 0;
  }
  RmpReleaseGlobalLock();
  if ( (unsigned int)dword_1800E7278 > 4 && (byte_1800E7288 & 9) != 0 && (qword_1800E7290 & 9) == qword_1800E7290 )
  {
    v19 = 4LL;
    p_EventDescriptor = &EventDescriptor;
    *(_QWORD *)&EventDescriptor.Id = a2;
    v18 = v9;
    *(_DWORD *)&v12.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E7280;
    v9[0] = v7;
    v21 = 8LL;
    *(_DWORD *)&v12.Id = 184549376;
    v12.Keyword = 9LL;
    UserData.Size = *(unsigned __int16 *)off_1800E7280;
    v15 = &unk_1800D7276;
    UserData.Reserved = 2;
    v16 = 50;
    v17 = 1;
    v9[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E7298, &v12, 0LL, 0LL, 4u, &UserData);
    v6 = v10;
  }
  if ( v6 )
    (*(void (__fastcall **)(struct ExecutionModel::ResourceSet *))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v4 )
    CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)v7;
}
