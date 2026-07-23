/*
 * XREFs of DifReleaseSpinLockFromDpcLevelSafe @ 0x14061845C
 * Callers:
 *     DifObjTrkInsertItem @ 0x1406162B0 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x140616780 (DifObjTrkRemoveItem.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140339FE0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall DifReleaseSpinLockFromDpcLevelSafe(unsigned __int8 *a1)
{
  volatile LONG *v2; // rcx
  unsigned __int8 result; // al
  unsigned __int64 v4; // rdi

  v2 = DifObjTrkContext;
  result = a1[1];
  if ( (result & 2) != 0 )
  {
    if ( (result & 4) != 0 )
    {
      *((_QWORD *)DifObjTrkContext + 1) = 0LL;
      ExReleaseSpinLockExclusiveFromDpcLevel(v2);
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(DifObjTrkContext);
    }
    a1[1] &= ~2u;
    result = a1[1];
  }
  if ( (result & 1) != 0 )
  {
    v4 = *a1;
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), *a1);
    __writecr8(v4);
    a1[1] &= ~1u;
    *a1 = 0;
  }
  return result;
}
