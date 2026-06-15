/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x180165600
 * Callers:
 *     ?DisconnectStreamList@CAudioSession@@AEAAJXZ @ 0x18001DD6C (-DisconnectStreamList@CAudioSession@@AEAAJXZ.c)
 *     ?StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z @ 0x180025490 (-StartStream@CAudioSession@@UEAAJPEAVCAudioStream@@@Z.c)
 *     ?RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z @ 0x180026188 (-RemoveStream@CAudioSession@@QEAAJPEAVCAudioStream@@_N@Z.c)
 *     ??0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEBG@Z @ 0x1800597C0 (--0CAudioStreamStateChanged@@QEAA@PEAVCAudioSession@@W4_AudioStreamState@@1PEAVCAudioStream@@PEB.c)
 *     ?FinalRelease@CAudioSession@@MEAAXXZ @ 0x18005DEF0 (-FinalRelease@CAudioSession@@MEAAXXZ.c)
 *     ?PreADGTermination@CAudioSrv@@EEAAXXZ @ 0x180072D50 (-PreADGTermination@CAudioSrv@@EEAAXXZ.c)
 *     ?RefreshConnectorFormats@EffectPack@@QEAAJXZ @ 0x1801362F8 (-RefreshConnectorFormats@EffectPack@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3, unsigned __int8 a4)
{
  FARPROC ProcAddress; // rax
  HMODULE phModule; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[5]; // [rsp+28h] [rbp-38h] BYREF
  int v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+54h] [rbp-Ch]
  int v14; // [rsp+58h] [rbp-8h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+8h]

  phModule = 0LL;
  LODWORD(ProcAddress) = GetModuleHandleExA(2u, "ntdll.dll", &phModule);
  if ( (_DWORD)ProcAddress )
  {
    if ( phModule )
    {
      ProcAddress = GetProcAddress(phModule, "MicrosoftTelemetryAssertTriggeredUM");
      if ( ProcAddress )
      {
        v11[1] = &_ImageBase;
        v11[3] = 1LL;
        v11[2] = retaddr;
        v11[0] = 11LL;
        v14 = a4;
        v11[4] = a1;
        v12 = a2;
        v13 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v11);
      }
    }
  }
  return (int)ProcAddress;
}
