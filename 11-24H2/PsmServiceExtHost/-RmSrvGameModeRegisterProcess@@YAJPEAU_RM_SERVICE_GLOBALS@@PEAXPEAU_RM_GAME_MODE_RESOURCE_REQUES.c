/*
 * XREFs of ?RmSrvGameModeRegisterProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@K@Z @ 0x180088294
 * Callers:
 *     RmGameModeRSrvRegisterProcess @ 0x1800897F0 (RmGameModeRSrvRegisterProcess.c)
 *     RmGameModeSrvRegisterProcess @ 0x180089910 (RmGameModeSrvRegisterProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U?$_tlgWrapSz@G@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@333AEBU?$_tlgWrapperByVal@$00@@33AEBU?$_tlgWrapSz@G@@4@Z @ 0x180002BF8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U-$_tlgWrapperByVal@$0.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180006DD0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D8A4 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _tlgKeywordOn @ 0x1800574C0 (_tlgKeywordOn.c)
 *     ?RmpUtilCheckStopLockTracking@@YAXK@Z @ 0x1800657B8 (-RmpUtilCheckStopLockTracking@@YAXK@Z.c)
 *     ?RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008CE94 (-RmpGameModeIsResourceRequestValid@@YAEPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_GAME_MODE_RESOURCE_REQUE.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008D41C (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvGameModeRegisterProcess(
        struct _RM_SERVICE_GLOBALS *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        int a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  int v8; // ebx
  const wchar_t *FileNameW; // r14
  DWORD ProcessId; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE v15[4]; // [rsp+80h] [rbp-80h] BYREF
  ULONG ReturnLength; // [rsp+84h] [rbp-7Ch] BYREF
  unsigned int v17; // [rsp+88h] [rbp-78h] BYREF
  int v18; // [rsp+8Ch] [rbp-74h] BYREF
  int v19; // [rsp+90h] [rbp-70h] BYREF
  int v20; // [rsp+94h] [rbp-6Ch] BYREF
  int v21; // [rsp+98h] [rbp-68h] BYREF
  int v22; // [rsp+9Ch] [rbp-64h] BYREF
  DWORD v23; // [rsp+A0h] [rbp-60h] BYREF
  int v24; // [rsp+A4h] [rbp-5Ch] BYREF
  __int64 v25; // [rsp+A8h] [rbp-58h] BYREF
  const wchar_t *v26; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v28[144]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE ProcessInformation[8]; // [rsp+150h] [rbp+50h] BYREF
  LPCWSTR pszPath; // [rsp+158h] [rbp+58h]

  v4 = RmSvcGlobals;
  memset_0(v28, 0, 0x88uLL);
  v17 = 0;
  RmpUtilCheckStartLockTracking(&v17, (struct _CEM_LOCK_TRACKER *)v28);
  if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 1LL) )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)&dword_1800E8278,
      byte_1800D82D8);
  if ( a4 )
  {
    v8 = -1073741583;
  }
  else if ( RmpGameModeIsResourceRequestValid(v4, a3) )
  {
    v8 = RmpGameModeRegisterProcess((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 2096), a2, a3);
    if ( v8 >= 0 )
      v8 = 0;
  }
  else
  {
    v8 = -1073741584;
  }
  if ( dword_1800E8278 )
  {
    ReturnLength = 0;
    FileNameW = 0LL;
    if ( NtQueryInformationProcess(a2, ProcessImageFileNameWin32, ProcessInformation, 0x228u, &ReturnLength) >= 0 )
      FileNameW = PathFindFileNameW(pszPath);
    if ( (unsigned int)dword_1800E8278 > 4 && tlgKeywordOn((__int64)&dword_1800E8278, 0x400000000001LL) )
    {
      ReturnLength = *((_DWORD *)a3 + 7);
      v18 = *((_DWORD *)a3 + 8);
      v15[0] = *((_BYTE *)a3 + 36);
      v19 = *((_DWORD *)a3 + 6);
      v20 = *((_DWORD *)a3 + 5);
      v21 = *((_DWORD *)a3 + 4);
      v27 = *((_QWORD *)a3 + 1);
      v22 = *((_DWORD *)a3 + 1);
      v25 = 0x1000000LL;
      v26 = FileNameW;
      ProcessId = GetProcessId(a2);
      v24 = v8;
      v23 = ProcessId;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
        v11,
        (__int64)&unk_1800D7D5E,
        v12,
        v13,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v27,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)v15,
        (__int64)&v18,
        (__int64)&ReturnLength,
        &v26,
        (__int64)&v25);
    }
  }
  RmpUtilCheckStopLockTracking(v17);
  return (unsigned int)v8;
}
