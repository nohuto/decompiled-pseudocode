/*
 * XREFs of KeForceResumeThread @ 0x140479A40
 * Callers:
 *     KeRequestTerminationThread @ 0x140479818 (KeRequestTerminationThread.c)
 *     PspInsertThread @ 0x1408A59BC (PspInsertThread.c)
 *     KeRundownApcQueues @ 0x1408A7A74 (KeRundownApcQueues.c)
 *     NtTerminateProcess @ 0x14093B030 (NtTerminateProcess.c)
 * Callees:
 *     KiResumeThread @ 0x14029646C (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
