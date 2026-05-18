/*
 * XREFs of DwmpCreateSessionProcess @ 0x18000DDB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@54@Z @ 0x18000114C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U3@U2@@-$_.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x18000B030 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     ?DoStackCaptureDirect@@YAXJI@Z @ 0x18000EEE8 (-DoStackCaptureDirect@@YAXJI@Z.c)
 */

__int64 __fastcall DwmpCreateSessionProcess(PVOID Parameter)
{
  unsigned __int64 v1; // r14
  signed int v2; // ebx
  HANDLE Thread; // rdi
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  signed int LastError; // eax
  GUID *v9; // [rsp+50h] [rbp-10h] BYREF
  __int64 v10; // [rsp+58h] [rbp-8h] BYREF
  int pvData; // [rsp+98h] [rbp+38h] BYREF
  DWORD pcbData; // [rsp+A0h] [rbp+40h] BYREF
  GUID *v13; // [rsp+A8h] [rbp+48h] BYREF

  v1 = (unsigned int)Parameter;
  v2 = 0;
  Thread = 0LL;
  if ( GetModuleHandleW(L"wininit.exe")
    && (pvData = 0,
        pcbData = 4,
        RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\DWM",
          L"OneCoreNoBootDWM",
          0x20000010u,
          0LL,
          &pvData,
          &pcbData),
        pvData) )
  {
    v2 = 1;
  }
  else if ( gDwmFirstLaunch )
  {
    SetLastError(0);
    Thread = CreateThread(0LL, 0LL, (LPTHREAD_START_ROUTINE)DwmpCreateSessionProcessWorker, (LPVOID)v1, 0, 0LL);
    if ( !Thread )
    {
      LastError = GetLastError();
      v2 = LastError;
      if ( LastError > 0 )
        v2 = (unsigned __int16)LastError | 0x80070000;
      if ( v2 >= 0 )
        v2 = -2003304445;
      DoStackCaptureDirect(v2, 0x62Au);
    }
  }
  else
  {
    DwmpCreateSessionProcessWorker((PVOID)v1);
  }
  if ( (unsigned int)dword_18001A000 > 5
    && (qword_18001A010 & 0x400000000000LL) != 0
    && (qword_18001A018 & 0x400000000000LL) == qword_18001A018 )
  {
    pvData = v1;
    v13 = &gDwmInitTargetAppSessionGuid;
    pcbData = v2;
    v9 = &gDwmInitTelemetryActivityId;
    v10 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
      v4,
      (__int64)&unk_180015667,
      v5,
      v6,
      (__int64)&v10,
      (__int64 *)&v9,
      (__int64)&pcbData,
      (__int64)&pvData,
      (__int64 *)&v13);
  }
  if ( Thread )
    CloseHandle(Thread);
  return (unsigned int)v2;
}
