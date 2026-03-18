/*
 * XREFs of HalPerformEndOfInterrupt @ 0x14041A4A0
 * Callers:
 *     KiChainedDispatch @ 0x1406A14D0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1406A1B80 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1406A1F60 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1406A2340 (KiInterruptDispatchNoLockNoEtw.c)
 *     KxIsrLinkage @ 0x1406A36D0 (KxIsrLinkage.c)
 *     KiApcInterrupt @ 0x1406A3E70 (KiApcInterrupt.c)
 *     KiHvInterruptDispatch @ 0x1406A57A0 (KiHvInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1406A60C0 (KiSwInterrupt.c)
 *     KiDpcInterrupt @ 0x1406A6810 (KiDpcInterrupt.c)
 *     KiIpiInterrupt @ 0x1406A6F70 (KiIpiInterrupt.c)
 * Callees:
 *     HalpInterruptPerformDirectedEndOfInterrupt @ 0x140541798 (HalpInterruptPerformDirectedEndOfInterrupt.c)
 *     HalpInterruptServiceActiveBoth @ 0x14054180C (HalpInterruptServiceActiveBoth.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalPerformEndOfInterrupt(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( a1 && *(_BYTE *)(a1 + 101) )
    HalpInterruptServiceActiveBoth();
  result = guard_dispatch_icall_no_overrides(a1, a2);
  if ( HalpInterruptDirectedEoiModeEnabled )
    return HalpInterruptPerformDirectedEndOfInterrupt(a1);
  return result;
}
