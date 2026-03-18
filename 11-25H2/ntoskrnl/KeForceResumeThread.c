/*
 * XREFs of KeForceResumeThread @ 0x14047D350
 * Callers:
 *     KeRequestTerminationThread @ 0x14047D128 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1408F1D7C (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x1408F56FC (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x140A6C390 (NtTerminateProcess.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140287200 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiResumeThread @ 0x1402F2268 (KiResumeThread.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeForceResumeThread(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // r14
  int v4; // r15d
  int v5; // esi

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v1 + 736));
  v4 = *(char *)(v1 + 644);
  v5 = (*(_DWORD *)(v1 + 120) >> 14) & 1;
  if ( v4 | v5 )
  {
    *(_BYTE *)(v1 + 794) &= 0xF9u;
    *(_BYTE *)(v1 + 644) = 0;
    _interlockedbittestandreset((volatile signed __int32 *)(v1 + 120), 0xEu);
  }
  KiResumeThread(v1, (__int64)CurrentPrcb, 1);
  _InterlockedAnd((volatile signed __int32 *)(v1 + 736), 0xFFFFFF7F);
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return (unsigned int)(v5 + v4);
}
