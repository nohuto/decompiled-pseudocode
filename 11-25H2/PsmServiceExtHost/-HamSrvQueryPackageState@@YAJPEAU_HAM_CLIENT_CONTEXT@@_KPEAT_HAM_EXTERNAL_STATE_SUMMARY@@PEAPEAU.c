/*
 * XREFs of ?HamSrvQueryPackageState@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAT_HAM_EXTERNAL_STATE_SUMMARY@@PEAPEAU_HAM_HOST_STATE_SUMMARY@@PEAK@Z @ 0x180068D40
 * Callers:
 *     HamRpcSrvDebugQueryPackageState @ 0x180068D20 (HamRpcSrvDebugQueryPackageState.c)
 *     HamRpcSrvServicingQueryPackageStateEx @ 0x1800817A0 (HamRpcSrvServicingQueryPackageStateEx.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x18000EF80 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000F7E0 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERARCHY_DEPTH@@PEAU1@@Z @ 0x1800416C4 (-HampHostEnumerateHostsInNode@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_RC_TREE_NODE@@W4_HAM_HIERAR.c)
 *     ?HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x180044A38 (-HampClientPkgFindByPackageHandle@@YAPEAU_HAM_CLIENT_PACKAGE_CONTEXT@@PEAU_HAM_CLIENT_CONTEXT@@_.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180044B3C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ?HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z @ 0x180053CD4 (-HampPkgGetNextHost@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU1@@Z.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x180057660 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?HampPkgGetStateSummary@@YA?AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z @ 0x18005A084 (-HampPkgGetStateSummary@@YA-AT_HAM_EXTERNAL_STATE_SUMMARY@@PEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18007D904 (-HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryPackageState(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        union _HAM_EXTERNAL_STATE_SUMMARY *a3,
        struct _HAM_HOST_STATE_SUMMARY **a4,
        unsigned int *a5)
{
  __int64 v5; // r13
  int StateSummary; // ebx
  struct _HAM_HOST_STATE_SUMMARY *v9; // rsi
  unsigned int v10; // r14d
  int v11; // edi
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v12; // rax
  struct _HAM_CLIENT_PACKAGE_CONTEXT *v13; // r13
  struct _HAM_RC_TREE_NODE *v14; // r12
  unsigned int v15; // r15d
  struct _RM_HAM_ACTIVITY_HOST *NextHost; // rax
  struct _HAM_HOST_STATE_SUMMARY *Heap; // rax
  struct _RM_HAM_ACTIVITY_HOST *v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  size_t Size; // [rsp+48h] [rbp-B8h] BYREF
  union _HAM_EXTERNAL_STATE_SUMMARY *v25; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int *v26; // [rsp+58h] [rbp-A8h] BYREF
  struct _HAM_HOST_STATE_SUMMARY **v27; // [rsp+60h] [rbp-A0h]
  _BYTE v28[144]; // [rsp+70h] [rbp-90h] BYREF

  v5 = a2;
  v25 = a3;
  v23 = a2;
  v26 = a5;
  v27 = a4;
  memset_0(v28, 0, 0x88uLL);
  Size = 0LL;
  StateSummary = 0;
  v9 = 0LL;
  v10 = 0;
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D3F5A);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v28);
  if ( (a5 == 0LL) == (a4 == 0LL) )
  {
    v12 = HampClientPkgFindByPackageHandle(a1, v5);
    v13 = v12;
    if ( v12 )
    {
      v14 = (struct _HAM_RC_TREE_NODE *)*((_QWORD *)v12 + 7);
      StateSummary = HampPkgGetStateSummary((__int64)v14);
      if ( a4 )
      {
        while ( 1 )
        {
          if ( v10 )
          {
            v15 = v10;
          }
          else
          {
            v15 = 0;
            NextHost = HampHostEnumerateHostsInNode(v14, 3, 0LL);
            if ( !NextHost )
              goto LABEL_14;
            do
            {
              ++v15;
              NextHost = HampPkgGetNextHost(NextHost);
            }
            while ( NextHost );
            if ( !v15 )
            {
LABEL_14:
              v9 = 0LL;
LABEL_15:
              *v27 = v9;
              v9 = 0LL;
              *v26 = v10;
              goto LABEL_9;
            }
          }
          v11 = RtlULongLongMult(v15, 0x238uLL, &Size);
          if ( v11 < 0 )
            goto LABEL_28;
          if ( v9 )
            HampFreeHeap(v9);
          Heap = (struct _HAM_HOST_STATE_SUMMARY *)HampAllocateHeap(Size);
          v9 = Heap;
          if ( !Heap )
            break;
          v10 = 0;
          memset_0(Heap, 0, Size);
          v18 = HampHostEnumerateHostsInNode(v14, 3, 0LL);
          if ( v18 )
          {
            do
            {
              if ( v10 < v15 )
                HampHostGetStateSummary(v18, (struct _HAM_HOST_STATE_SUMMARY *)((char *)v9 + 568 * v10));
              ++v10;
              v18 = HampPkgGetNextHost(v18);
            }
            while ( v18 );
            if ( v10 > v15 )
              continue;
          }
          goto LABEL_15;
        }
        v11 = -1073741801;
      }
      else
      {
LABEL_9:
        v11 = 0;
        *(_DWORD *)v25 = StateSummary;
      }
LABEL_28:
      CemRcObjectDereference(v13);
      if ( v9 )
        HampFreeHeap(v9);
    }
    else
    {
      v11 = -1073741275;
    }
    v5 = v23;
  }
  else
  {
    v11 = -1073741776;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
  {
    LODWORD(v25) = v10;
    LODWORD(v23) = StateSummary;
    v26 = (unsigned int *)v5;
    LODWORD(Size) = v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_1800D3845,
      v20,
      v21,
      (__int64)&Size,
      (__int64)&v26,
      (__int64)&v23,
      (__int64)&v25);
  }
  return (unsigned int)v11;
}
