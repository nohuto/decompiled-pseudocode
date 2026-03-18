/*
 * XREFs of PopInitializeWorkItem @ 0x14073D3C8
 * Callers:
 *     PopInitializeIRTimer @ 0x1405C8930 (PopInitializeIRTimer.c)
 *     PopPowerRequestInitialize @ 0x140C1CD8C (PopPowerRequestInitialize.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140C1CF9C (PopDirectedDripsInitializePhase0.c)
 *     PopInitializeWin32kActivator @ 0x140C1D2A4 (PopInitializeWin32kActivator.c)
 *     PopThermalInit @ 0x140C1DC0C (PopThermalInit.c)
 *     PopInitializePowerButtonHold @ 0x140C20FEC (PopInitializePowerButtonHold.c)
 *     PoInitSystem @ 0x140C50674 (PoInitSystem.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopInitializeWorkItem(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 32), 0);
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 24) = a3;
  return result;
}
