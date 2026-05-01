/*
 * XREFs of ?HamSrvQueryHostStateSummary@@YAJPEAU_HAM_CLIENT_CONTEXT@@_KPEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x180080028
 * Callers:
 *     HamRpcSrvQueryHostStateSummary @ 0x180081C30 (HamRpcSrvQueryHostStateSummary.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U1@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@334@Z @ 0x180002364 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U1@U1@U2@@-$_tlgWriteTemplate@$$A6AJP.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800182CC (-RmHamHostDereference@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001E800 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HOST_GROUP@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z @ 0x18007DC8C (-HampHostGetStateSummary@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_HOST_STATE_SUMMARY@@@Z.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvQueryHostStateSummary(
        struct _HAM_CLIENT_CONTEXT *a1,
        __int64 a2,
        struct _HAM_HOST_STATE_SUMMARY *a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  int Host; // ebx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _RM_HAM_ACTIVITY_HOST *v12; // [rsp+50h] [rbp-B0h] BYREF
  int v13; // [rsp+58h] [rbp-A8h] BYREF
  int v14; // [rsp+5Ch] [rbp-A4h] BYREF
  __int64 v15; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v16; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v17[144]; // [rsp+70h] [rbp-90h] BYREF

  memset_0(v17, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D5CAF);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v6 = *((unsigned __int8 *)a1 + 164);
  v7 = *((_QWORD *)a1 + 4);
  v12 = 0LL;
  Host = RmHamFindHost((v7 & 0xFFFFFFFFFFFFFFFCuLL) - 48 * v6 - 16, a2, 2, &v12);
  if ( Host >= 0 )
  {
    HampHostGetStateSummary(v12, a3);
    Host = 0;
  }
  if ( v12 )
    RmHamHostDereference(v12);
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 8LL) )
  {
    v15 = *(_QWORD *)a3;
    v13 = *((_DWORD *)a3 + 3);
    v14 = *((_DWORD *)a3 + 2);
    v16 = a2;
    LODWORD(v12) = Host;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)&dword_1800E82B0,
      (__int64)&unk_1800D58AA,
      v9,
      v10,
      (__int64)&v12,
      (__int64)&v16,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v15);
  }
  return (unsigned int)Host;
}
