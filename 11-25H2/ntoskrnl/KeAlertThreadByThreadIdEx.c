/*
 * XREFs of KeAlertThreadByThreadIdEx @ 0x1402807E0
 * Callers:
 *     PsDispatchIumService @ 0x14048F2F0 (PsDispatchIumService.c)
 *     KeAlertThreadByThreadId @ 0x1404B9534 (KeAlertThreadByThreadId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     KiAlertSingleThreadByThreadId @ 0x14028086C (KiAlertSingleThreadByThreadId.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeAlertThreadByThreadIdEx(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  char CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  char v6; // bl

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = KiAlertSingleThreadByThreadId(CurrentPrcb, v3, a2);
  KiExitDispatcher((_DWORD)CurrentPrcb, 0, 1, 1, CurrentIrql);
  return v6;
}
