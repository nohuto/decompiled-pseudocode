/*
 * XREFs of KdEnableDebuggerWithLock @ 0x1405AFA7C
 * Callers:
 *     KdEnableDebugger @ 0x1405AFA40 (KdEnableDebugger.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     KdPowerTransitionEx @ 0x1404CF5B0 (KdPowerTransitionEx.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     KdInitSystem @ 0x140B75E30 (KdInitSystem.c)
 *     KdpRestoreAllBreakpoints @ 0x140B79C58 (KdpRestoreAllBreakpoints.c)
 */

__int64 __fastcall KdEnableDebuggerWithLock(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  int v4; // eax

  CurrentIrql = 0;
  if ( KdPitchDebugger )
    return 3221226324LL;
  if ( KdBlockEnable )
    return 3221225506LL;
  if ( a1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    KxAcquireSpinLock(&KdDebuggerLock);
  }
  v4 = KdDisableCount;
  if ( KdDisableCount )
  {
    --KdDisableCount;
    if ( v4 == 1 && KdPreviouslyEnabled )
    {
      if ( !a1 )
      {
        KdDisableTimerReset = 1;
        KdInitSystem(0LL, 0LL);
        KdpRestoreAllBreakpoints();
        KdDisableTimerReset = 0;
        return 0LL;
      }
      KdPowerTransitionEx(1073741825, 0);
      KdpDebugRoutineSelect = 1;
      LOBYTE(KdDebuggerEnabled) = 1;
      *(_BYTE *)(MmWriteableSharedUserData + 724) = 1;
      KdpRestoreAllBreakpoints();
    }
    else if ( !a1 )
    {
      return 0LL;
    }
    KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  if ( !a1 )
  {
    KdInitSystem(0LL, 0LL);
    return 0LL;
  }
  KxReleaseSpinLock((volatile signed __int64 *)&KdDebuggerLock);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return 3221225485LL;
}
