/*
 * XREFs of RmgrSrv_RmAccessCheck @ 0x18005C520
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F220 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029E90 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?GetCallerPID@@YAKPEAX@Z @ 0x18005C7A0 (-GetCallerPID@@YAKPEAX@Z.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C818 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmAccessCheck(void *a1, unsigned int a2, unsigned int a3)
{
  unsigned int CallerPID; // edx
  ExecutionModel::ResourceManager *v6; // rbx
  __int64 v7; // r9
  unsigned int v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v12; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v15; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]
  unsigned int *v21; // [rsp+110h] [rbp+10h]
  __int64 v22; // [rsp+118h] [rbp+18h]
  int *v23; // [rsp+120h] [rbp+20h]
  __int64 v24; // [rsp+128h] [rbp+28h]
  int *v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]

  CallerPID = GetCallerPID(a1);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 2) != 0 && (qword_1800E8290 & 2) == qword_1800E8290 )
  {
    v10 = CallerPID;
    v25 = (int *)&v12;
    v12 = a2;
    v23 = (int *)&v13;
    v13 = a3;
    v21 = &v10;
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v26 = 4LL;
    v24 = 4LL;
    v22 = 4LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v18 = &unk_1800D1D3F;
    UserData.Reserved = 2;
    v19 = 66;
    v20 = 1;
    v11 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  v6 = g_pResourceManager;
  memset_0(v16, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  RmpAcquireGlobalLock();
  LOBYTE(v7) = 1;
  v8 = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(v6, a2, a3, v7);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E8278 > 4 && (byte_1800E8288 & 2) != 0 && (qword_1800E8290 & 2) == qword_1800E8290 )
  {
    v21 = &v11;
    *(_DWORD *)&v15.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E8280;
    v11 = v8;
    v22 = 4LL;
    *(_DWORD *)&v15.Id = 184549376;
    v15.Keyword = 2LL;
    UserData.Size = *(unsigned __int16 *)off_1800E8280;
    v18 = &unk_1800D19CD;
    UserData.Reserved = 2;
    v19 = 35;
    v20 = 1;
    v10 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800E8298, &v15, 0LL, 0LL, 3u, &UserData);
  }
  return v8;
}
