/*
 * XREFs of ?HamSrvTerminatePackageForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEBGPEAXKW4_HAM_TERMINATE_REASON@@@Z @ 0x18004354C
 * Callers:
 *     PsmHamTerminatePackage @ 0x180043AE0 (PsmHamTerminatePackage.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z @ 0x180013DE4 (-HampPkgFindInManager@@YAPEAU_HAM_PACKAGE@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     CemRcObjectDereference @ 0x180014EE0 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x180041644 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@KK@Z @ 0x180043770 (-HampHostSnapshotTerminate@@YAXPEAU_HAM_HOST_SNAPSHOT@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_R.c)
 *     ?HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z @ 0x1800439E0 (-HampPkgInfoInitialize@@YAXPEBGPEAXKPEAU_HAM_PACKAGE_INFO@@@Z.c)
 *     ?HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z @ 0x180043A8C (-HampHostSnapshotCleanup@@YAXPEAU_HAM_HOST_SNAPSHOT@@@Z.c)
 *     ?HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180046B18 (-HampHostSnapshotAppend@@YAJPEAU_HAM_HOST_SNAPSHOT@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180053C54 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapSid@U_SID@@@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapSid@U_SID@@@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180065B74 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapSid@U_SID@@@@U-$_tlgWrapperByVa.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminatePackageForBi(
        struct _HOST_ACTIVITY_MANAGER *a1,
        const unsigned __int16 *a2,
        void *a3,
        unsigned int a4,
        unsigned int a5)
{
  void *v5; // rdi
  struct _HAM_PACKAGE *v9; // rax
  unsigned int v10; // ebx
  struct _HAM_PACKAGE *v11; // r14
  struct _RM_HAM_ACTIVITY_HOST *i; // rax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rdi
  int v14; // esi
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  _BYTE v19[4]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v20; // [rsp+54h] [rbp-ACh] BYREF
  void *v21; // [rsp+58h] [rbp-A8h] BYREF
  void *v22; // [rsp+60h] [rbp-A0h] BYREF
  const unsigned __int16 *v23; // [rsp+68h] [rbp-98h] BYREF
  __int128 v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  _BYTE v26[144]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[208]; // [rsp+120h] [rbp+20h] BYREF

  v5 = a3;
  v21 = a3;
  memset_0(v26, 0, 0x88uLL);
  memset_0(v27, 0, 0xCCuLL);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 0x40) != 0 && (qword_1800E82C8 & 0x40) == qword_1800E82C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D5B0D);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  HampPkgInfoInitialize(a2, v5, a4, (struct _HAM_PACKAGE_INFO *)v27);
  v9 = HampPkgFindInManager(a1, (struct _HAM_PACKAGE_INFO *)v27);
  v10 = 0;
  v11 = v9;
  if ( v9 )
  {
    v25 = 0LL;
    v24 = 0LL;
    for ( i = HampHostEnumerateHostsInNode(v9, 3, 0LL); ; i = HampPkgGetNextHost(v13) )
    {
      v13 = i;
      if ( !i )
        break;
      v14 = HampHostSnapshotAppend((struct _HAM_HOST_SNAPSHOT *)&v24, i);
      if ( v14 < 0 )
        goto LABEL_9;
    }
    HampHostSnapshotTerminate(&v24, 3LL, a5, 0LL, 4000, 0);
    v14 = 0;
LABEL_9:
    HampHostSnapshotCleanup((struct _HAM_HOST_SNAPSHOT *)&v24);
    CemRcObjectDereference(v11);
    v5 = v21;
    if ( v14 < 0 )
      v10 = v14;
  }
  else
  {
    v10 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v19[0] = a5;
    v22 = v5;
    v20 = a4;
    v23 = a2;
    LODWORD(v21) = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSid<_SID>,_tlgWrapperByVal<1>>(
      v15,
      (unsigned int)&unk_1800D5130,
      v16,
      v17,
      (__int64)&v21,
      (__int64)&v23,
      (__int64)&v20,
      (__int64)&v22,
      (__int64)v19);
  }
  return v10;
}
