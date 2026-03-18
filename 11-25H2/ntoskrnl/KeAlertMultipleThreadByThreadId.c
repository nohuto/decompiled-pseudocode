/*
 * XREFs of KeAlertMultipleThreadByThreadId @ 0x1405B3BF8
 * Callers:
 *     PspIumAlertMultipleThreadByThreadId @ 0x1405D9FE4 (PspIumAlertMultipleThreadByThreadId.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14076C5D0 (NtAlertMultipleThreadByThreadId.c)
 * Callees:
 *     KiAlertSingleThreadByThreadId @ 0x14028086C (KiAlertSingleThreadByThreadId.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KeShouldYieldProcessor @ 0x1402B0440 (KeShouldYieldProcessor.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeAlertMultipleThreadByThreadId(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // di
  struct _KPRCB *CurrentPrcb; // rbp

  if ( a2 )
  {
    v3 = 0LL;
    v5 = a2;
    do
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(a2) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
      }
      CurrentPrcb = KeGetCurrentPrcb();
      while ( (unsigned int)v3 < v5 )
      {
        KiAlertSingleThreadByThreadId((__int64)CurrentPrcb, *(_QWORD *)(a1 + 8 * v3), a3);
        v3 = (unsigned int)(v3 + 1);
        if ( (v3 & 0x3F) == 0 && CurrentIrql < 2u && KeShouldYieldProcessor() )
          break;
      }
      KiExitDispatcher(CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
    }
    while ( (unsigned int)v3 < v5 );
  }
}
