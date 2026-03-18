/*
 * XREFs of KeEnterKernelDebugger @ 0x1405AEEA0
 * Callers:
 *     <none>
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiBugCheckDebugBreak @ 0x1405AF3E0 (KiBugCheckDebugBreak.c)
 *     KdInitSystem @ 0x140B65E30 (KdInitSystem.c)
 */

__int64 KeEnterKernelDebugger()
{
  unsigned __int8 CurrentIrql; // cl

  _InterlockedExchange(&KiHardwareTrigger, 1);
  _disable();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  if ( !(_BYTE)KdDebuggerEnabled && !KdPitchDebugger && !_InterlockedExchange(&dword_140E663B0, 1) )
    KdInitSystem(0LL, 0LL);
  return KiBugCheckDebugBreak(5u);
}
