/*
 * XREFs of KeResumeThread @ 0x140460900
 * Callers:
 *     PsMultiResumeProcess @ 0x140460798 (PsMultiResumeProcess.c)
 *     PsMultiResumeThread @ 0x14046086C (PsMultiResumeThread.c)
 *     KeAlertResumeThread @ 0x1405B7BA8 (KeAlertResumeThread.c)
 * Callees:
 *     KiResumeThread @ 0x14029646C (KiResumeThread.c)
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeResumeThread(__int64 a1, unsigned int a2)
{
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v6; // eax
  unsigned int v7; // esi
  char v8; // al

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe((volatile signed __int32 *)(v3 + 736));
  v6 = *(char *)(v3 + 644);
  v7 = v6;
  if ( a2 > v6 )
    a2 = *(char *)(v3 + 644);
  if ( a2 )
  {
    if ( (_BYTE)v6 )
    {
      v8 = v6 - a2;
      *(_BYTE *)(v3 + 644) = v8;
      if ( !v8 && (*(_DWORD *)(v3 + 120) & 0x4000) == 0 )
        KiResumeThread(v3, (__int64)CurrentPrcb, 0LL);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(v3 + 736), 0xFFFFFF7F);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v7;
}
