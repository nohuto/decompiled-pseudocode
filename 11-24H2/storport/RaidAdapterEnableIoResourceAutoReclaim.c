/*
 * XREFs of RaidAdapterEnableIoResourceAutoReclaim @ 0x14005A21C
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x140037670 (StorPortAdapterPowerRequiredStep1.c)
 *     RaidAdapterCompleteInitialization @ 0x140037B0C (RaidAdapterCompleteInitialization.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterEnableIoResourceAutoReclaim(__int64 a1, char a2)
{
  struct _KDPC *Dpc; // rdi
  struct _KTIMER *v4; // rsi

  Dpc = (struct _KDPC *)(a1 + 5856);
  v4 = (struct _KTIMER *)(a1 + 5792);
  if ( !a2 )
  {
    KeInitializeTimer((PKTIMER)(a1 + 5792));
    KeInitializeDpc(Dpc, RaidAdapterReclaimIoResourceTimerDpcRoutine, *(PVOID *)(a1 + 8));
  }
  return KeSetCoalescableTimer(v4, (LARGE_INTEGER)-18000000000LL, 0x1B7740u, 0xEA60u, Dpc);
}
