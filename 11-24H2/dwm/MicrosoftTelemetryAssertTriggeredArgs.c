/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x14000EB1C
 * Callers:
 *     BlackScreenDiagnostics::IsSectionAllBlackPixels @ 0x140003730 (BlackScreenDiagnostics--IsSectionAllBlackPixels.c)
 *     ?DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z @ 0x14000D714 (-DoDisplayModeReset@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXAEBU_GUID@@@Z.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000D848 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     BlackScreenDiagnostics::GetDwmFrontBufferBitsColor @ 0x14000DB00 (BlackScreenDiagnostics--GetDwmFrontBufferBitsColor.c)
 *     ?Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFlags@2@AEBU_GUID@@@Z @ 0x14000DEB8 (-Run@CBlackScreenDiagnosticReport@BlackScreenDiagnostics@@AEAAXW4CallingSource@2@W4DiagnosticFla.c)
 *     BlackScreenDiagnostics::TriggerGraphicsCollection @ 0x14000E5D8 (BlackScreenDiagnostics--TriggerGraphicsCollection.c)
 *     ?SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z @ 0x14000E9B4 (-SetReportParameter@CWatsonErrorReporting@BlackScreenDiagnostics@@QEAAXKPEBG@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  _QWORD v7[5]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+48h] [rbp-18h]
  int v9; // [rsp+4Ch] [rbp-14h]
  int v10; // [rsp+50h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]
  HMODULE phModule; // [rsp+70h] [rbp+10h] BYREF

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v10 = 1;
        v7[1] = &_ImageBase;
        v7[3] = 1LL;
        v7[2] = retaddr;
        v7[4] = "dwm.exe";
        v7[0] = 11LL;
        v8 = a2;
        v9 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v7);
      }
    }
  }
  return (int)ProcAddress;
}
