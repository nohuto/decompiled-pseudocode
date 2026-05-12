/*
 * XREFs of RaidAdapterCancelWaitWakeIrp @ 0x1400777E4
 * Callers:
 *     StorPortAdapterPoFxD0Completion @ 0x140038A30 (StorPortAdapterPoFxD0Completion.c)
 *     StorPortAdapterDirectedPowerUpCompletion @ 0x140079D00 (StorPortAdapterDirectedPowerUpCompletion.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall RaidAdapterCancelWaitWakeIrp(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v3; // rcx
  IRP *v4; // rcx

  result = 1;
  v3 = *(_QWORD *)(a1 + 4960);
  if ( v3 )
  {
    v4 = *(IRP **)(v3 + 72);
    if ( v4 )
    {
      result = IoCancelIrp(v4);
      *(_QWORD *)(*(_QWORD *)(a1 + 4960) + 72LL) = 0LL;
    }
  }
  return result;
}
