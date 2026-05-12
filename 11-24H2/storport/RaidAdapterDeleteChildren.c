/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1400531A0
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1401BB770 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x140027258 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1400531D4 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, (__int64 (__fastcall *)(_QWORD *))RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
