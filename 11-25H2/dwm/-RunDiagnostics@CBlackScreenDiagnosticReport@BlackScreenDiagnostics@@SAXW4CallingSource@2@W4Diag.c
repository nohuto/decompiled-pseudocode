/*
 * XREFs of ?RunDiagnostics@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@SAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000FD74
 * Callers:
 *     ?RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ @ 0x14000FED8 (-RunDiagnosticsFromHotkey@BlackScreenDiagnostics@@YAXXZ.c)
 *     ?RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z @ 0x14000FFA0 (-RunDiagnosticsFromLongPowerButtonHold@BlackScreenDiagnostics@@YAXAEBU_GUID@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x140001B7C (_tlgKeywordOn.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x140001CD8 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x140001D94 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x140004EE0 (__security_check_cookie.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000F898 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 */

void __fastcall BlackScreenDiagnostics::CBlackScreenDiagnosticReport::RunDiagnostics(
        int a1,
        int a2,
        const struct _GUID *a3)
{
  BlackScreenDiagnostics::CBlackScreenDiagnosticReport *v6; // rcx
  REGHANDLE v7; // rcx
  int v8; // [rsp+38h] [rbp-29h] BYREF
  int v9; // [rsp+3Ch] [rbp-25h] BYREF
  __int64 v10; // [rsp+40h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v11; // [rsp+48h] [rbp-19h] BYREF
  __int64 *v12; // [rsp+68h] [rbp+7h]
  int v13; // [rsp+70h] [rbp+Fh]
  int v14; // [rsp+74h] [rbp+13h]
  const struct _GUID *v15; // [rsp+78h] [rbp+17h]
  int v16; // [rsp+80h] [rbp+1Fh]
  int v17; // [rsp+84h] [rbp+23h]
  int *v18; // [rsp+88h] [rbp+27h]
  int v19; // [rsp+90h] [rbp+2Fh]
  int v20; // [rsp+94h] [rbp+33h]
  int *v21; // [rsp+98h] [rbp+37h]
  int v22; // [rsp+A0h] [rbp+3Fh]
  int v23; // [rsp+A4h] [rbp+43h]

  if ( TryAcquireSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock) )
  {
    TraceLoggingRegisterEx_EventRegister_EventSetInformation();
    if ( (unsigned int)dword_1400190D8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1400190D8, 0x800000000000LL) )
      {
        v23 = 0;
        v20 = 0;
        v17 = 0;
        v14 = 0;
        v21 = &v8;
        v22 = 4;
        v18 = &v9;
        v12 = &v10;
        v19 = 4;
        v8 = a2;
        v9 = a1;
        v10 = 50331648LL;
        v15 = a3;
        v16 = 16;
        v13 = 8;
        tlgWriteTransfer_EventWriteTransfer((__int64)&dword_1400190D8, byte_140014E18, 0LL, 0LL, 6u, &v11);
      }
    }
    BlackScreenDiagnostics::CBlackScreenDiagnosticReport::Run(v6, a1, a2, a3);
    v7 = RegHandle;
    RegHandle = 0LL;
    dword_1400190D8 = 0;
    EventUnregister(v7);
    ReleaseSRWLockExclusive(&BlackScreenDiagnostics::CBlackScreenDiagnosticReport::s_srwLock);
  }
}
