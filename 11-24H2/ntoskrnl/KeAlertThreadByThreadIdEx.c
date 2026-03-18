/*
 * XREFs of KeAlertThreadByThreadIdEx @ 0x140338518
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 *     KeAlertThreadByThreadId @ 0x1404B8BB0 (KeAlertThreadByThreadId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A5CD0 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiAlertSingleThreadByThreadId @ 0x140337FDC (KiAlertSingleThreadByThreadId.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  v6 = KiAlertSingleThreadByThreadId((__int64)CurrentPrcb, v3, a2);
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
  return v6;
}
