/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x140372714
 * Callers:
 *     HalpInterruptSetLineState @ 0x1402B4E20 (HalpInterruptSetLineState.c)
 *     HalpMaskInterrupt @ 0x1403723C0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403724F0 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x140373848 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140373A20 (HalpInterruptEnablePerformanceEvents.c)
 *     HalDisableInterrupt @ 0x140373FF0 (HalDisableInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403747D8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRestoreController @ 0x1404976C4 (HalpInterruptRestoreController.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FEA0 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRestoreClock @ 0x140540210 (HalpInterruptRestoreClock.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054198C (HalpInterruptServiceActiveBoth.c)
 *     HalpConnectThermalInterrupt @ 0x140553810 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x140553A10 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553AC0 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14055FB90 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140B6DFB8 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x14037537C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // eax
  unsigned int v5; // eax
  int v6; // r8d
  bool v8; // bl
  __int64 v9; // rdx

  v3 = *(_DWORD *)(a3 + 12);
  if ( (v3 & 0x10) == 0 || (v3 & 0x20) != 0 )
    v5 = v3 & 0xFFFFFFFE;
  else
    v5 = v3 | 1;
  *(_DWORD *)(a3 + 12) = v5;
  if ( (*(_DWORD *)(a1 + 244) & 0x200) != 0 )
  {
    v8 = HalpDisableInterrupts();
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v9);
    if ( v8 )
      _enable();
  }
  else
  {
    v6 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2);
  }
  if ( v6 < 0 )
    HalpInterruptSetProblemEx(a1, 7, v6, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3196);
  return (unsigned int)v6;
}
