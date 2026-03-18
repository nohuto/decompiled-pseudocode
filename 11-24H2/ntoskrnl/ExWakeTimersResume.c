/*
 * XREFs of ExWakeTimersResume @ 0x140657334
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     ExpTimerResume @ 0x1403E4104 (ExpTimerResume.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char ExWakeTimersResume()
{
  unsigned __int8 CurrentIrql; // di
  __int64 v1; // r14
  __int64 *v2; // rbx
  __int64 *v3; // rsi
  __int64 v4; // rax
  char result; // al

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v1 = MEMORY[0xFFFFF78000000008];
  v2 = (__int64 *)ExpWakeTimerList;
  while ( v2 != &ExpWakeTimerList )
  {
    v3 = v2 - 33;
    v2 = (__int64 *)*v2;
    KxAcquireSpinLock((PKSPIN_LOCK)v3 + 8);
    if ( v3[32] )
    {
      v4 = v3[35];
      if ( !v4 || (*(_DWORD *)(v4 + 136) & 8) == 0 )
        ExpTimerResume((PKTIMER)v3, v1);
    }
    KxReleaseSpinLock(v3 + 8);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpWakeTimerLock, 0xFFFFFFFFFFFFFFFFuLL) & 6;
  if ( result == 2 )
    return ExfTryToWakePushLock((volatile signed __int64 *)&ExpWakeTimerLock);
  return result;
}
