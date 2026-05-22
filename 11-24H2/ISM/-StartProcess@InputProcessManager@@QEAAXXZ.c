/*
 * XREFs of ?StartProcess@InputProcessManager@@QEAAXXZ @ 0x18019BF04
 * Callers:
 *     ?ISMShutDown@InputProcessManager@@AEAAXXZ @ 0x18019B560 (-ISMShutDown@InputProcessManager@@AEAAXXZ.c)
 *     ?UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z @ 0x18019C2C0 (-UnregisterInputProcess@InputProcessManager@@QEAAXPEAVBamoInputProcessProxy@@@Z.c)
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801B9188 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444@Z @ 0x180008A0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@@-$_tlgWriteTemplate@$$A6.c)
 *     ?GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ @ 0x18002F540 (-GetSession@BaseBamoConnection@Bamo@Microsoft@@QEBAPEAUIMessageSession@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E71C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x1800D1308 (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?value@?$optional@K@std@@QEGAAAEAKXZ @ 0x18010B99C (-value@-$optional@K@std@@QEGAAAEAKXZ.c)
 *     ?StartProcess@InputProcessManager@InputTraceLogging@@SAXXZ @ 0x18019C150 (-StartProcess@InputProcessManager@InputTraceLogging@@SAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InputProcessManager::StartProcess(InputProcessManager *this)
{
  int SystemMetrics; // edi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // eax
  bool v7; // zf
  BOOL v8; // eax
  __int64 v9; // rcx
  Microsoft::Bamo::BaseBamoConnection *v10; // rcx
  struct IMessageSession *Session; // rax
  int v12; // eax
  DWORD LastError; // edi
  unsigned int bInheritHandles; // [rsp+20h] [rbp-99h]
  BOOL v15; // [rsp+50h] [rbp-69h] BYREF
  __int64 v16; // [rsp+58h] [rbp-61h] BYREF
  struct _PROCESS_INFORMATION ProcessInformation; // [rsp+60h] [rbp-59h] BYREF
  struct _STARTUPINFOW StartupInfo; // [rsp+80h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]
  int v20; // [rsp+120h] [rbp+67h] BYREF
  BOOL v21; // [rsp+128h] [rbp+6Fh] BYREF
  BOOL v22; // [rsp+130h] [rbp+77h] BYREF
  BOOL v23; // [rsp+138h] [rbp+7Fh] BYREF

  InputTraceLogging::InputProcessManager::StartProcess();
  *((_BYTE *)this + 64) = 1;
  SystemMetrics = GetSystemMetrics(0x2000);
  if ( (unsigned int)dword_18024E248 > 5 && tlgKeywordOn((__int64)&dword_18024E248, 0x400000000000LL) )
  {
    if ( *((_BYTE *)this + 72) )
      v6 = *((_DWORD *)this + 17);
    else
      v6 = 0;
    v20 = v6;
    v16 = 0x1000000LL;
    v7 = *((_QWORD *)this + 10) == 0LL;
    v21 = SystemMetrics != 0;
    v8 = !v7;
    v7 = *((_QWORD *)this + 7) == 0LL;
    v22 = v8;
    v23 = v8;
    v15 = !v7;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v3,
      (__int64)&unk_1802260A0,
      v4,
      v5,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20);
  }
  if ( !*((_QWORD *)this + 10)
    && !*((_QWORD *)this + 7)
    && (!SystemMetrics
     || !*((_BYTE *)this + 72)
     || *(_DWORD *)std::optional<unsigned long>::value((__int64)this + 68) != 1073807364) )
  {
    memset_0(&StartupInfo.cb + 1, 0, 0x64uLL);
    StartupInfo.cb = 104;
    memset(&ProcessInformation, 0, sizeof(ProcessInformation));
    if ( !CreateProcessW(L"ISM.exe", 0LL, 0LL, 0LL, 0, 0x8000088u, 0LL, 0LL, &StartupInfo, &ProcessInformation) )
    {
      LastError = GetLastError();
      if ( LastError == 5 )
      {
        if ( *((_BYTE *)this + 72) && *(_DWORD *)std::optional<unsigned long>::value((__int64)this + 68) == 1073807364 )
          return;
      }
      else if ( !LastError )
      {
        return;
      }
      wil::details::in1diag3::_FailFast_Win32(
        retaddr,
        104LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
        (const char *)LastError,
        bInheritHandles);
    }
    v9 = *(_QWORD *)(*((_QWORD *)this + 4) + 32LL);
    if ( *(int *)(v9 + 8) <= 0 )
      v10 = 0LL;
    else
      v10 = *(Microsoft::Bamo::BaseBamoConnection **)(v9 + 16);
    Session = Microsoft::Bamo::BaseBamoConnection::GetSession(v10);
    v12 = (*(__int64 (__fastcall **)(struct IMessageSession *, HANDLE, __int64 (__fastcall *)(InputProcessManager *, int, void *), InputProcessManager *))(*(_QWORD *)Session + 272LL))(
            Session,
            ProcessInformation.hProcess,
            InputProcessManager::ISMShutDownStatic,
            this);
    if ( v12 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x54,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessmanager\\lib\\inputprocessmanager.cpp",
        (const char *)(unsigned int)v12,
        bInheritHandles);
    CloseHandle(ProcessInformation.hThread);
    *((_QWORD *)this + 10) = ProcessInformation.hProcess;
    *((_BYTE *)this + 72) = 0;
  }
}
