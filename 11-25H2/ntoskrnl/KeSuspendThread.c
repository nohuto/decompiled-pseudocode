/*
 * XREFs of KeSuspendThread @ 0x1404875A0
 * Callers:
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     PsSuspendThread @ 0x1409BA290 (PsSuspendThread.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14025AB10 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiSuspendThread @ 0x1402F15AC (KiSuspendThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // r8
  unsigned int v7; // ebp

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(v1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v1 + 736));
  v7 = *(char *)(v1 + 644);
  if ( v7 == 127 )
  {
    _InterlockedAnd(v4, 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      LOBYTE(v5) = CurrentIrql;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
    }
    __writecr8(CurrentIrql);
    RtlRaiseStatus(-1073741750);
  }
  ++*(_BYTE *)(v1 + 644);
  if ( !KiSuspendThread(v1, (__int64)CurrentPrcb, v6) )
    --*(_BYTE *)(v1 + 644);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v7;
}
