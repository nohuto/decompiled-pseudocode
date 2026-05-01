/*
 * XREFs of ?RmSrvGameModeDisableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x1800877B4
 * Callers:
 *     RmGameModeRSrvDisableForRegisteredProcess @ 0x180089220 (RmGameModeRSrvDisableForRegisteredProcess.c)
 *     RmGameModeSrvDisableForRegisteredProcess @ 0x180089470 (RmGameModeSrvDisableForRegisteredProcess.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006D90 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D924 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x18005627C (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     _tlgKeywordOn @ 0x180057540 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x180065838 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C560 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvGameModeDisableForRegisteredProcess(struct _RM_SERVICE_GLOBALS *a1, void *a2)
{
  struct _RM_SERVICE_GLOBALS *v2; // rbx
  unsigned int v4; // ebx
  DWORD ProcessId; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v9; // [rsp+30h] [rbp-B8h] BYREF
  DWORD v10; // [rsp+34h] [rbp-B4h] BYREF
  unsigned int v11; // [rsp+38h] [rbp-B0h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-A8h] BYREF

  v2 = RmSvcGlobals;
  memset_0(v12, 0, 0x88uLL);
  v9 = 0;
  RmpUtilCheckStartLockTracking(&v9, (struct _CEM_LOCK_TRACKER *)v12);
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E7278,
      byte_1800D6BEC);
  v4 = RmpGameModeDisableForRegisteredProcess((struct _RM_SERVICE_GLOBALS *)((char *)v2 + 2096), a2);
  if ( (unsigned int)dword_1800E7278 > 4 && tlgKeywordOn((__int64)&dword_1800E7278, 9LL) )
  {
    ProcessId = GetProcessId(a2);
    v11 = v4;
    v10 = ProcessId;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)&dword_1800E7278,
      byte_1800D6B83,
      v6,
      v7,
      (__int64)&v11,
      (__int64)&v10);
  }
  RmpUtilCheckStopLockTracking(v9);
  return v4;
}
