/*
 * XREFs of ?HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z @ 0x1800800F8
 * Callers:
 *     HamRpcSrvRemoveHostDependency @ 0x180081800 (HamRpcSrvRemoveHostDependency.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180002094 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DCEC (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x180082B58 (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvRemoveHostDependency(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int Pid; // [rsp+40h] [rbp-D8h] BYREF
  unsigned int v13; // [rsp+44h] [rbp-D4h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-D0h] BYREF
  unsigned __int64 v15; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v16[144]; // [rsp+60h] [rbp-B8h] BYREF

  memset_0(v16, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D3968);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v6 = HampDepGroupRemoveDynamicDependency(
         (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                         - 48LL * *((unsigned __int8 *)a1 + 164)
                                         - 16),
         a2,
         a3);
  v7 = 0;
  if ( v6 < 0 )
    v7 = v6;
  if ( (unsigned int)dword_1800E72B0 > 4 && tlgKeywordOn((__int64)&dword_1800E72B0, 8LL) )
  {
    v14 = a3;
    v15 = a2;
    Pid = HampClientGetPid(a1);
    v13 = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v8,
      (__int64)&unk_1800D460D,
      v9,
      v10,
      (__int64)&v13,
      (__int64)&Pid,
      (__int64)&v15,
      (__int64)&v14);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  return v7;
}
