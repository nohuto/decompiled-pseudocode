/*
 * XREFs of KeSuspendThread @ 0x14047E25C
 * Callers:
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     PsSuspendThread @ 0x140A0CF10 (PsSuspendThread.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiSuspendThread @ 0x1402DE060 (KiSuspendThread.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSuspendThread(__int64 a1)
{
  __int64 v1; // rdi
  unsigned __int8 CurrentIrql; // bl
  struct _KPRCB *CurrentPrcb; // r14
  volatile signed __int32 *v4; // rsi
  __int64 v5; // rdx
  unsigned int v6; // ebp

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = (volatile signed __int32 *)(v1 + 736);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v1 + 736));
  v6 = *(char *)(v1 + 644);
  if ( v6 == 127 )
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
  if ( !KiSuspendThread(v1, (__int64)CurrentPrcb) )
    --*(_BYTE *)(v1 + 644);
  _InterlockedAnd(v4, 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v6;
}
