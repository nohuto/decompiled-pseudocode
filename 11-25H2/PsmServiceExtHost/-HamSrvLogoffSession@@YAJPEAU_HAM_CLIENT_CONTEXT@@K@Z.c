/*
 * XREFs of ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x180045F8C
 * Callers:
 *     HamRpcSrvSessionStateLogoffSession @ 0x180071E00 (HamRpcSrvSessionStateLogoffSession.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180013C9C (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     CemRcObjectDereference @ 0x180014F60 (CemRcObjectDereference.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x1800460F0 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvLogoffSession(struct _HAM_CLIENT_CONTEXT *a1, unsigned int a2)
{
  struct _HAM_SESSION *v4; // rax
  struct _HAM_SESSION *v5; // rdi
  int v6; // ebx
  unsigned int v7; // edi
  int v9; // r8d
  int v10; // r9d
  int v11; // [rsp+30h] [rbp-B8h] BYREF
  unsigned int v12[3]; // [rsp+34h] [rbp-B4h] BYREF
  _BYTE v13[144]; // [rsp+40h] [rbp-A8h] BYREF

  memset_0(v13, 0, 0x88uLL);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D4275);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v4 = HampSessionFindInManager(
         (struct _HOST_ACTIVITY_MANAGER *)((*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL)
                                         - 48LL * *((unsigned __int8 *)a1 + 164)
                                         - 16),
         *((_DWORD *)a1 + 42));
  v5 = v4;
  if ( v4 )
  {
    v6 = HampSessionLogoff(v4, a1, a2);
    CemRcObjectDereference(v5);
    v7 = 0;
    if ( v6 < 0 )
      v7 = v6;
  }
  else
  {
    v7 = -1073741275;
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E72B0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800E72B0, 8LL) )
  {
    v11 = *((_DWORD *)a1 + 42);
    v12[0] = v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_1800E72B0,
      (unsigned int)&unk_1800D3990,
      v9,
      v10,
      (__int64)v12,
      (__int64)&v11);
  }
  return v7;
}
