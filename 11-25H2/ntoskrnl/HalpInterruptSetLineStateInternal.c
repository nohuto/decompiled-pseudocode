/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x140445BA4
 * Callers:
 *     HalpInterruptRestoreController @ 0x140443B00 (HalpInterruptRestoreController.c)
 *     HalpInterruptSetLineState @ 0x140443F50 (HalpInterruptSetLineState.c)
 *     HalDisableInterrupt @ 0x140444D30 (HalDisableInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x140444F88 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1404451F8 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpMaskInterrupt @ 0x140445850 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x140445980 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x140446EB8 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptRemapFixedLines @ 0x14053FD20 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRestoreClock @ 0x140540090 (HalpInterruptRestoreClock.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054180C (HalpInterruptServiceActiveBoth.c)
 *     HalpConnectThermalInterrupt @ 0x1405535D0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x1405537D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140553880 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x14055F660 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140B5D638 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x1404443B8 (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // r9d
  unsigned int v5; // r10d
  int v6; // r8d
  bool v8; // bl
  __int64 v9; // rdx

  v4 = *(_DWORD *)(a3 + 12);
  v5 = v4 | 1;
  if ( (v4 & 0x30) != 0x10 )
    v5 = *(_DWORD *)(a3 + 12) & 0xFFFFFFFE;
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
    HalpInterruptSetProblemEx(a1, 7, v6, (__int64)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 0xC7Cu);
  return (unsigned int)v6;
}
