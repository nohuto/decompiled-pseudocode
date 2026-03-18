/*
 * XREFs of KeAlertMultipleThreadByThreadId @ 0x1405B7AE8
 * Callers:
 *     PspIumAlertMultipleThreadByThreadId @ 0x1405E6164 (PspIumAlertMultipleThreadByThreadId.c)
 *     NtAlertMultipleThreadByThreadId @ 0x14077C170 (NtAlertMultipleThreadByThreadId.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x1402DA180 (KeShouldYieldProcessor.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiAlertSingleThreadByThreadId @ 0x140337FDC (KiAlertSingleThreadByThreadId.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
      KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 1u, CurrentIrql);
    }
    while ( (unsigned int)v3 < v5 );
  }
}
