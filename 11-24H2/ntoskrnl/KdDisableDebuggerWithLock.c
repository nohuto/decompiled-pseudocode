/*
 * XREFs of KdDisableDebuggerWithLock @ 0x1405AF918
 * Callers:
 *     KdDisableDebugger @ 0x1405AF900 (KdDisableDebugger.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KdPowerTransitionEx @ 0x1404CF5B0 (KdPowerTransitionEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KdpAllowDisable @ 0x140B795A0 (KdpAllowDisable.c)
 *     KdpSuspendAllBreakpoints @ 0x140B79CA0 (KdpSuspendAllBreakpoints.c)
 */

__int64 KdDisableDebuggerWithLock()
{
  unsigned __int8 CurrentIrql; // bl
  int v2; // edi

  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KxAcquireSpinLock(&KdDebuggerLock);
  if ( KdDisableCount )
    goto LABEL_14;
  KdPreviouslyEnabled = (char)KdDebuggerEnabled;
  if ( !(_BYTE)KdDebuggerEnabled )
    goto LABEL_14;
  v2 = KdpAllowDisable();
  if ( v2 >= 0 )
  {
    if ( (_BYTE)KdDebuggerEnabled )
    {
      KdpSuspendAllBreakpoints();
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 0;
      KdpDebugRoutineSelect = 0;
      LOBYTE(KdDebuggerNotPresent) = 1;
      LOBYTE(KdDebuggerEnabled) = 0;
      KdPowerTransitionEx(1073741828, 0);
    }
LABEL_14:
    ++KdDisableCount;
    KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    v2 = 0;
    goto LABEL_17;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
LABEL_17:
  __writecr8(CurrentIrql);
  return (unsigned int)v2;
}
