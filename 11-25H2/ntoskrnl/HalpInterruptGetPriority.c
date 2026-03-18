/*
 * XREFs of HalpInterruptGetPriority @ 0x140446738
 * Callers:
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14053EAF8 (HalpInterruptSetRemappedLineStateInternal.c)
 *     HalpConnectThermalInterrupt @ 0x1405535D0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x1405537D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553880 (HalpInitializeDeferredErrorVector.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpInterruptGetPriority(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // ecx

  v2 = a2 >> 4;
  if ( v2 <= 2u )
    return 0LL;
  v3 = *(_DWORD *)(a1 + 252);
  if ( 15 - (unsigned int)v2 > v3 )
    return 0LL;
  else
    return v2 + v3 - 15;
}
