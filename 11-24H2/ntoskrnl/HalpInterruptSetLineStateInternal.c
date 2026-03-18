/*
 * XREFs of HalpInterruptSetLineStateInternal @ 0x1403B9D44
 * Callers:
 *     HalDisableInterrupt @ 0x1403B8EA0 (HalDisableInterrupt.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1403B90F8 (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptSetRemappedDestinationHv @ 0x1403B9368 (HalpInterruptSetRemappedDestinationHv.c)
 *     HalpMaskInterrupt @ 0x1403B99F0 (HalpMaskInterrupt.c)
 *     HalpUnmaskInterrupt @ 0x1403B9B20 (HalpUnmaskInterrupt.c)
 *     HalpInterruptSetDestinationInternal @ 0x1403BB048 (HalpInterruptSetDestinationInternal.c)
 *     HalpInterruptSetLineState @ 0x1403BBB90 (HalpInterruptSetLineState.c)
 *     HalpInterruptRestoreController @ 0x14049CA1C (HalpInterruptRestoreController.c)
 *     HalpInterruptRemapFixedLines @ 0x140542550 (HalpInterruptRemapFixedLines.c)
 *     HalpInterruptRestoreClock @ 0x1405428C0 (HalpInterruptRestoreClock.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054403C (HalpInterruptServiceActiveBoth.c)
 *     HalpConnectThermalInterrupt @ 0x140555ED0 (HalpConnectThermalInterrupt.c)
 *     HalpInitializeCmciVector @ 0x1405560D0 (HalpInitializeCmciVector.c)
 *     HalpInitializeDeferredErrorVector @ 0x140556180 (HalpInitializeDeferredErrorVector.c)
 *     HalpInterruptMaskLevelTriggeredLines @ 0x140561F60 (HalpInterruptMaskLevelTriggeredLines.c)
 *     HalpInterruptMaskAcpi @ 0x140B6C718 (HalpInterruptMaskAcpi.c)
 * Callees:
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     HalpInterruptSetProblemEx @ 0x1403BC82C (HalpInterruptSetProblemEx.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpInterruptSetLineStateInternal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  unsigned int v6; // eax
  int v7; // r8d
  bool v9; // bl
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  v4 = *(_DWORD *)(a3 + 12);
  if ( (v4 & 0x10) == 0 || (v4 & 0x20) != 0 )
    v6 = v4 & 0xFFFFFFFE;
  else
    v6 = v4 | 1;
  *(_DWORD *)(a3 + 12) = v6;
  if ( (*(_DWORD *)(a1 + 244) & 0x200) != 0 )
  {
    v9 = HalpDisableInterrupts();
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), v10, v11, v12);
    if ( v9 )
      _enable();
  }
  else
  {
    v7 = guard_dispatch_icall_no_overrides(*(_QWORD *)(a1 + 16), a2, a3, a4);
  }
  if ( v7 < 0 )
    HalpInterruptSetProblemEx(a1, 7, v7, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intsup.c", 3196);
  return (unsigned int)v7;
}
