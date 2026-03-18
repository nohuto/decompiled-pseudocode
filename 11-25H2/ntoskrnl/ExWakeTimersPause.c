/*
 * XREFs of ExWakeTimersPause @ 0x1404BCF7C
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     ExpTimerPause @ 0x1402F45E8 (ExpTimerPause.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 ExWakeTimersPause()
{
  ULONG_PTR *v0; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rdx
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 *v6; // rdi
  __int64 v7; // rsi
  __int64 result; // rax

  v0 = &ExpWakeTimerLock;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpWakeTimerLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&ExpWakeTimerLock, 0LL, (__int64)&ExpWakeTimerLock);
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v0);
  }
  v4 = MEMORY[0xFFFFF78000000008];
  v5 = MEMORY[0xFFFFF78000000014];
  v6 = (__int64 *)ExpWakeTimerList;
  while ( v6 != &ExpWakeTimerList )
  {
    v7 = (__int64)(v6 - 33);
    v6 = (__int64 *)*v6;
    KxAcquireSpinLock((PKSPIN_LOCK)(v7 + 64));
    if ( *(_QWORD *)(v7 + 256) )
      ExpTimerPause(v7, v5, v4, 1);
    KxReleaseSpinLock((volatile signed __int64 *)(v7 + 64));
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
