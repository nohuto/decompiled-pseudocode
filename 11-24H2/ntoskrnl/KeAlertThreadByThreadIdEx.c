/*
 * XREFs of KeAlertThreadByThreadIdEx @ 0x1402DE598
 * Callers:
 *     KeAlertThreadByThreadId @ 0x1404B3500 (KeAlertThreadByThreadId.c)
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiAlertSingleThreadByThreadId @ 0x1402DE880 (KiAlertSingleThreadByThreadId.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeAlertThreadByThreadIdEx(__int64 a1, __int64 a2)
{
  __int64 v3; // rbp
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // rdi
  char v6; // bl

  v3 = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = KiAlertSingleThreadByThreadId(CurrentPrcb, v3, a2);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  return v6;
}
