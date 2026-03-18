/*
 * XREFs of MicrosoftTelemetryAssertTriggeredNoArgs @ 0x18023B330
 * Callers:
 *     ?NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z @ 0x1801393AC (-NotifyMidManipulationUpdate@CVisual@@AEAAXW4MidManipulationUpdateType@@PEAV1@@Z.c)
 *     ?FinalRelease@CVisual@@MEAAXXZ @ 0x180139580 (-FinalRelease@CVisual@@MEAAXXZ.c)
 *     ??1CInteraction@@MEAA@XZ @ 0x18013A3D8 (--1CInteraction@@MEAA@XZ.c)
 *     ??8EffectDescriptionKey@@QEBA_NAEBU0@@Z @ 0x18013BE98 (--8EffectDescriptionKey@@QEBA_NAEBU0@@Z.c)
 *     ?TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devices@Windows@@W4DisplaySourceStatus@3456@PEA_N@Z @ 0x18020A9E4 (-TranslateExecutePresentResult@CDDisplaySwapChain@@IEAAJW4DisplayPresentStatus@Core@Display@Devi.c)
 *     PubSebRegisterRpc @ 0x180221740 (PubSebRegisterRpc.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int MicrosoftTelemetryAssertTriggeredNoArgs()
{
  FARPROC ProcAddress; // rax
  _QWORD v2[2]; // [rsp+20h] [rbp-40h] BYREF
  __int128 v3; // [rsp+30h] [rbp-30h]
  __int64 v4; // [rsp+40h] [rbp-20h]
  __int64 v5; // [rsp+48h] [rbp-18h]
  int v6; // [rsp+50h] [rbp-10h]
  unsigned __int64 retaddr; // [rsp+68h] [rbp+8h]
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
        v6 = 1;
        v2[1] = &_ImageBase;
        v4 = 0LL;
        v3 = retaddr;
        v5 = -1LL;
        v2[0] = 11LL;
        LODWORD(ProcAddress) = ((__int64 (__fastcall *)(_QWORD *))ProcAddress)(v2);
      }
    }
  }
  return (int)ProcAddress;
}
