/*
 * XREFs of PopInitializeWorkItem @ 0x1407493D8
 * Callers:
 *     PopInitializeIRTimer @ 0x1405CCE3C (PopInitializeIRTimer.c)
 *     PopPowerRequestInitialize @ 0x140C2DE8C (PopPowerRequestInitialize.c)
 *     PopDirectedDripsInitializePhase0 @ 0x140C2E09C (PopDirectedDripsInitializePhase0.c)
 *     PopInitializeWin32kActivator @ 0x140C2E3A4 (PopInitializeWin32kActivator.c)
 *     PopThermalInit @ 0x140C2ED08 (PopThermalInit.c)
 *     PopInitializePowerButtonHold @ 0x140C320F0 (PopInitializePowerButtonHold.c)
 *     PoInitSystem @ 0x140C61990 (PoInitSystem.c)
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
