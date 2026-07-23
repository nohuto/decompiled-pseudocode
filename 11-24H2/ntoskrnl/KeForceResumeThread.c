/*
 * XREFs of KeForceResumeThread @ 0x1404752D0
 * Callers:
 *     KeRequestTerminationThread @ 0x1404750A8 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1408FBFD4 (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x1408FDCCC (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x140ACF260 (NtTerminateProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1402DD2DC (KiResumeThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  __int64 v4; // r8
  int v5; // r15d
  int v6; // esi

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v1 + 736));
  v5 = *(char *)(v1 + 644);
  v6 = (*(_DWORD *)(v1 + 120) >> 14) & 1;
  if ( v5 | v6 )
  {
    *(_BYTE *)(v1 + 794) &= 0xF9u;
    *(_BYTE *)(v1 + 644) = 0;
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 120), 0xEu);
  }
  LOBYTE(v4) = 1;
  KiResumeThread(v1, (__int64)CurrentPrcb, v4);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 736), 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return (unsigned int)(v6 + v5);
}
