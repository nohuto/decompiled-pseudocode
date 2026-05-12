/*
 * XREFs of RaidAdapterPoFxActivateComponentFromMiniport @ 0x14001C0A0
 * Callers:
 *     StorPortExtendedFunction @ 0x140046040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x14001DA40 (RaidAdapterPoFxActivateComponent.c)
 */

__int64 __fastcall RaidAdapterPoFxActivateComponentFromMiniport(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // al

  v4 = RaidAdapterPoFxActivateComponent(a1, a2, a3);
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4960) + 80LL));
  _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(a1 + 4960) + 88LL));
  return v4 == 0 ? 0xC100000C : 0;
}
