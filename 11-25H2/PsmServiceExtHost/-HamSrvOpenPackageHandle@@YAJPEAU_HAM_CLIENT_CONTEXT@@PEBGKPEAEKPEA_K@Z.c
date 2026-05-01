/*
 * XREFs of ?HamSrvOpenPackageHandle@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAEKPEA_K@Z @ 0x18003EF3C
 * Callers:
 *     HamRpcSrvDebugOpenPackageHandle @ 0x18003D650 (HamRpcSrvDebugOpenPackageHandle.c)
 *     HamRpcSrvServicingOpenPackageHandle @ 0x18006E380 (HamRpcSrvServicingOpenPackageHandle.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempUtilValidateAndCapturePackageInfo @ 0x18003F2D4 (CempUtilValidateAndCapturePackageInfo.c)
 *     ?HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@@@Z @ 0x180040788 (-HampPkgFindOrCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAPEAU_HAM_PACKAGE@.c)
 *     ?HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x180069310 (-HampClientPkgInsert@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z.c)
 *     ?HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_CONTEXT@@@Z @ 0x18006993C (-HampClientPkgInitialize@@YAXPEAU_HAM_CLIENT_CONTEXT@@PEAU_HAM_PACKAGE@@PEAU_HAM_CLIENT_PACKAGE_.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvOpenPackageHandle(
        struct _HAM_CLIENT_CONTEXT *a1,
        PCWSTR packageFullName,
        int a3,
        unsigned __int8 *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  int v6; // edi
  unsigned __int64 v9; // r13
  char *v10; // r12
  int v11; // ebx
  __int64 v12; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v13; // rdi
  int v14; // eax
  struct _HAM_PACKAGE *v15; // r14
  int v16; // eax
  __int64 v17; // rax
  int v18; // eax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *Heap; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v21; // r8
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  struct _HAM_PACKAGE *v23; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 *v24; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v27[16]; // [rsp+60h] [rbp-A0h] BYREF
  char v28; // [rsp+E4h] [rbp-1Ch] BYREF
  _BYTE v29[144]; // [rsp+130h] [rbp+30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1C0h] [rbp+C0h] BYREF
  void *v31; // [rsp+1D0h] [rbp+D0h]
  int v32; // [rsp+1D8h] [rbp+D8h]
  int v33; // [rsp+1DCh] [rbp+DCh]
  unsigned __int64 **v34; // [rsp+1E0h] [rbp+E0h]
  __int64 v35; // [rsp+1E8h] [rbp+E8h]
  unsigned __int64 *v36; // [rsp+1F0h] [rbp+F0h]
  __int64 v37; // [rsp+1F8h] [rbp+F8h]
  PCWSTR v38; // [rsp+200h] [rbp+100h]
  int v39; // [rsp+208h] [rbp+108h]
  int v40; // [rsp+20Ch] [rbp+10Ch]
  int *v41; // [rsp+210h] [rbp+110h]
  __int64 v42; // [rsp+218h] [rbp+118h]
  char *v43; // [rsp+220h] [rbp+120h]
  int v44; // [rsp+228h] [rbp+128h]
  int v45; // [rsp+22Ch] [rbp+12Ch]

  v6 = a3;
  v22 = a3;
  v24 = a6;
  memset_0(v27, 0, 0xCCuLL);
  memset_0(v29, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D4B80);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  v9 = 0LL;
  v10 = (char *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) + 1196);
  v11 = CempUtilValidateAndCapturePackageInfo(packageFullName, (__int64)v27);
  if ( v11 >= 0 )
  {
    v12 = *((unsigned __int8 *)a1 + 164);
    v23 = 0LL;
    v10 = &v28;
    v13 = 0LL;
    v14 = HampPkgFindOrCreate(
            (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48 * v12 - 16),
            (struct _HAM_PACKAGE_INFO *)v27,
            &v23);
    v15 = v23;
    v11 = v14;
    if ( v14 >= 0 )
    {
      Heap = (struct _HAM_CLIENT_PACKAGE_CONTEXT *)HampAllocateHeap(0x48uLL);
      v13 = Heap;
      if ( Heap )
      {
        HampClientPkgInitialize(a1, v15, Heap);
        HampClientPkgInsert(a1, v21);
        v9 = *((_QWORD *)v13 + 6);
        v11 = 0;
      }
      else
      {
        v11 = -1073741801;
      }
    }
    if ( v15 )
      CemRcObjectDereference(v15);
    if ( v13 )
      CemRcObjectDereference(v13);
    v6 = v22;
    if ( v11 >= 0 )
    {
      v11 = 0;
      *v24 = v9;
    }
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
  {
    v22 = v6;
    v25 = v9;
    LODWORD(v24) = v11;
    v16 = (unsigned __int8)v10[1];
    v43 = v10;
    v45 = 0;
    v42 = 4LL;
    v44 = 4 * v16 + 8;
    v41 = &v22;
    if ( packageFullName )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( packageFullName[v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      packageFullName = &word_1800C10AC;
      v18 = 2;
    }
    v39 = v18;
    v35 = 4LL;
    v36 = &v25;
    v38 = packageFullName;
    v34 = &v24;
    *(_DWORD *)&EventDescriptor.Level = 516;
    UserData.Ptr = (ULONGLONG)off_1800E72B8;
    v40 = 0;
    v37 = 8LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 64LL;
    UserData.Size = *(unsigned __int16 *)off_1800E72B8;
    v31 = &unk_1800D39D9;
    UserData.Reserved = 2;
    v32 = 79;
    v33 = 1;
    LODWORD(v23) = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 7u, &UserData);
  }
  return (unsigned int)v11;
}
