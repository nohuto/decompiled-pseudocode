/*
 * XREFs of DifReleaseSpinLockFromDpcLevelSafe @ 0x140619E9C
 * Callers:
 *     DifObjTrkInsertItem @ 0x140617CF0 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140617E90 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x1406181C0 (DifObjTrkRemoveItem.c)
 * Callees:
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140210C80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
