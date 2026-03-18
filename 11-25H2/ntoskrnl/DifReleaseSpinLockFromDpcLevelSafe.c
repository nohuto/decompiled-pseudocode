/*
 * XREFs of DifReleaseSpinLockFromDpcLevelSafe @ 0x14060DEDC
 * Callers:
 *     DifObjTrkInsertItem @ 0x14060BD30 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x14060C200 (DifObjTrkRemoveItem.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1402B5440 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
