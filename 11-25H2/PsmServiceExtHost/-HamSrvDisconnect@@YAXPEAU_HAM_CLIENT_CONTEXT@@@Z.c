/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001D9AC
 * Callers:
 *     HamRpcSrvConnectDebugging @ 0x18003CDC0 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x18003CF40 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectSessionState @ 0x18003D680 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectServicing @ 0x18003D7E0 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18003D900 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnect @ 0x18003DA80 (HamRpcSrvConnect.c)
 *     HamRpcSrvDisconnectServicing @ 0x18006DCB0 (HamRpcSrvDisconnectServicing.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18006E150 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectFullTrust @ 0x180081540 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DB38 (-HampClientDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001DCEC (-HampClientGetPid@@YAKPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@@Z @ 0x180063E94 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@_ea_180063E94.c)
 *     RtlStringCopyWorkerW @ 0x1800665AC (RtlStringCopyWorkerW.c)
 *     RtlStringValidateDestW @ 0x18007F0F8 (RtlStringValidateDestW.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  unsigned int Pid; // eax
  char v3; // si
  __int64 v4; // r14
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11[4]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v12; // [rsp+44h] [rbp-BCh] BYREF
  _WORD *v13; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v15[144]; // [rsp+60h] [rbp-A0h] BYREF
  _WORD v16[64]; // [rsp+F0h] [rbp-10h] BYREF

  memset_0(v15, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 0x40) != 0 && (qword_1800E72C8 & 0x40) == qword_1800E72C8 )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E72B0,
      byte_1800D4A57);
  Pid = HampClientGetPid(a1);
  v3 = *((_BYTE *)a1 + 164);
  v4 = *((_QWORD *)a1 + 19);
  v5 = Pid;
  if ( (int)RtlStringValidateDestW(v6, 64LL) < 0 )
    v16[0] = 0;
  else
    RtlStringCopyWorkerW(v16, 64LL, v7, (char *)a1 + 220);
  HampClientDisconnect(a1);
  if ( (unsigned int)dword_1800E72B0 > 4 && (qword_1800E72C0 & 8) != 0 && (qword_1800E72C8 & 8) == qword_1800E72C8 )
  {
    v14 = v4;
    v13 = v16;
    v11[0] = v3;
    v12 = v5;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>>(
      v8,
      (unsigned int)&unk_1800D3F14,
      v9,
      v10,
      (__int64)&v12,
      (__int64)v11,
      (__int64)&v14,
      (__int64)&v13);
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
}
