/*
 * XREFs of RaidAdapterMarkChildrenMissing @ 0x14005C5F4
 * Callers:
 *     RaidAdapterSurpriseRemovalIrp @ 0x1401BB518 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x140027258 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1400531D4 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterMarkChildrenMissing(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, (__int64 (__fastcall *)(_QWORD *))RaUnitAdapterSurpriseRemove);
  return RaidAdapterRemoveZombieChildren(a1, (__int64 (__fastcall *)(_QWORD *))RaUnitAdapterSurpriseRemove);
}
