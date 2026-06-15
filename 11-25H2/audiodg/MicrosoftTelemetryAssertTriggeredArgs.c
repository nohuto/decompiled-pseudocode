/*
 * XREFs of MicrosoftTelemetryAssertTriggeredArgs @ 0x140057DC8
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x1400306A0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?RunMessageLoop@CAudioDGModule@@QEAAJXZ @ 0x140049200 (-RunMessageLoop@CAudioDGModule@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140099010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall MicrosoftTelemetryAssertTriggeredArgs(__int64 a1, int a2, int a3)
{
  FARPROC ProcAddress; // rax
  HMODULE phModule; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v9[5]; // [rsp+28h] [rbp-38h] BYREF
  int v10; // [rsp+50h] [rbp-10h]
  int v11; // [rsp+54h] [rbp-Ch]
  int v12; // [rsp+58h] [rbp-8h]
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
        v12 = 1;
        v9[1] = &_ImageBase;
        v9[3] = 1LL;
        v9[2] = retaddr;
        v9[0] = 11LL;
        v9[4] = a1;
        v10 = a2;
        v11 = a3;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v9);
      }
    }
  }
  return (int)ProcAddress;
}
