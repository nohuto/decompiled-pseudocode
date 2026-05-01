/*
 * XREFs of ?HamSrvRetrieveDynamicIdForHostId@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAEKK_KPEAU_GUID@@@Z @ 0x1800548FC
 * Callers:
 *     HamRpcSrvRetrieveDynamicIdForHostId @ 0x18006DFE0 (HamRpcSrvRetrieveDynamicIdForHostId.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     CempUtilValidateSid @ 0x18001C8B4 (CempUtilValidateSid.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM_KEY@@P6AKPEAU_HAM_HOSTID_ENTRY@@PEAX@Z5@Z @ 0x180041EFC (-HampHostIdStoreEnumerateMatchingEntries@@YAXPEAU_HAM_HOSTID_STORE@@PEAKPEAT_RM_SID@@PEAU_RM_PSM.c)
 *     ?HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x180043090 (-HampHostIdStoreReleaseLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ?HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z @ 0x1800430E8 (-HampHostIdStoreAcquireLockShared@@YAXPEAU_HAM_HOSTID_STORE@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSid@U_SID@@@@U1@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSid@U_SID@@@@3AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180054B2C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSid@U_SID@@@@U1@U-$_tlgWra.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRetrieveDynamicIdForHostId(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned __int8 *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        struct _GUID *a6)
{
  unsigned int v10; // edi
  struct _HAM_HOSTID_STORE *v11; // rbx
  char *v12; // rsi
  int v13; // ecx
  int v14; // r8d
  int v15; // r9d
  __int64 v17; // rcx
  unsigned int v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+58h] [rbp-A8h] BYREF
  struct _GUID *v20; // [rsp+60h] [rbp-A0h] BYREF
  char *v21; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v23[2]; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+88h] [rbp-78h]
  struct _GUID v25; // [rsp+90h] [rbp-70h] BYREF
  _BYTE DestinationSid[80]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v27[144]; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(DestinationSid, 0, 0x44uLL);
  memset_0(v27, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v27);
  v10 = 0;
  if ( (unsigned int)dword_1800E82B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      v17,
      byte_1800D5C49);
  v25 = 0LL;
  if ( (int)CempUtilValidateSid(a2, a3) < 0 || RtlCopySid(0x44u, DestinationSid, a2) < 0 )
  {
    v10 = -1073741585;
    v12 = (char *)a1 + 1212;
  }
  else
  {
    v18 = a4;
    v11 = (struct _HOST_ACTIVITY_MANAGER *)((char *)a1 + 800);
    v24 = 0LL;
    v23[0] = a5;
    v12 = DestinationSid;
    v23[1] = &v25;
    HampHostIdStoreAcquireLockShared(v11);
    HampHostIdStoreEnumerateMatchingEntries(
      v11,
      &v18,
      (union _RM_SID *)DestinationSid,
      0LL,
      (unsigned int (*)(struct _HAM_HOSTID_ENTRY *, void *))HampHostIdStoreRetrieveDynamicIdCallback,
      v23);
    HampHostIdStoreReleaseLockShared(v11);
    if ( (_DWORD)v24 )
      *a6 = v25;
    else
      v10 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && (qword_1800E82C0 & 8) != 0 && (qword_1800E82C8 & 8) == qword_1800E82C8 )
  {
    v18 = a4;
    v20 = &v25;
    v21 = v12;
    v22 = a5;
    v19 = v10;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapSid<_SID>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v13,
      (unsigned int)&unk_1800D4D3D,
      v14,
      v15,
      (__int64)&v19,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v18,
      (__int64)&v20);
  }
  return v10;
}
