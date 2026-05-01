/*
 * XREFs of ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180080D84
 * Callers:
 *     HamRpcSrvTerminateIfSuspendedByProcess @ 0x180081C50 (HamRpcSrvTerminateIfSuspendedByProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180002000 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     CempLockTrackerClearForThread @ 0x18001B730 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D2E0 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180039470 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@W4_HOST_GROUP@@PEAE@Z @ 0x18003BDB8 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateIfSuspendedByProcess(struct _HAM_CLIENT_CONTEXT *a1, void *a2, unsigned __int8 *a3)
{
  char v6; // si
  DWORD ProcessId; // edi
  signed int ProcessFullIdentity; // ebx
  __int64 v9; // r8
  __int64 v10; // r8
  __int64 v11; // r9
  int v13; // [rsp+20h] [rbp-E0h]
  _BYTE v14[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh] BYREF
  signed int v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[560]; // [rsp+E0h] [rbp-20h] BYREF

  memset_0(v17, 0, 0x88uLL);
  memset_0(v18, 0, 0x228uLL);
  v6 = 0;
  v14[0] = 0;
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 64LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E82B0,
      byte_1800D554E);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  ProcessId = GetProcessId(a2);
  if ( ProcessId )
  {
    ProcessFullIdentity = HampSystemGetProcessFullIdentity(a2, 0LL, (struct _RM_PSM_HOST_INFO *)v18);
    if ( ProcessFullIdentity >= 0 )
    {
      HampManagerTerminateHostIfSuspended(
        (*((_QWORD *)a1 + 4) & 0xFFFFFFFFFFFFFFFCuLL) - 48LL * *((unsigned __int8 *)a1 + 164) - 16,
        ProcessId,
        v9,
        0x1200u,
        v13,
        v14);
      v6 = v14[0];
      ProcessFullIdentity = 0;
      *a3 = v14[0];
    }
  }
  else if ( (int)GetLastError() > 0 )
  {
    ProcessFullIdentity = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    ProcessFullIdentity = GetLastError();
  }
  CempLockTrackerClearForThread(HampLockTrackerId);
  if ( (unsigned int)dword_1800E82B0 > 4 && tlgKeywordOn((__int64)&dword_1800E82B0, 8LL) )
  {
    v15 = *((_DWORD *)a1 + 42);
    v14[0] = v6;
    v16 = ProcessFullIdentity;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      (__int64)&dword_1800E82B0,
      (__int64)&unk_1800D4BD5,
      v10,
      v11,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)v14);
  }
  return (unsigned int)ProcessFullIdentity;
}
