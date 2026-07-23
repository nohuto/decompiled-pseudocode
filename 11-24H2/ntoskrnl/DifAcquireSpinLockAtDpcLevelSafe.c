/*
 * XREFs of DifAcquireSpinLockAtDpcLevelSafe @ 0x1406183A4
 * Callers:
 *     DifObjTrkInsertItem @ 0x1406162B0 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x140616450 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x140616780 (DifObjTrkRemoveItem.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140339480 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall DifAcquireSpinLockAtDpcLevelSafe(__int64 a1)
{
  PEX_SPIN_LOCK v1; // rdi
  struct _KTHREAD *CurrentThread; // rbp
  char v4; // cl
  unsigned __int8 CurrentIrql; // si

  v1 = DifObjTrkContext;
  CurrentThread = KeGetCurrentThread();
  *(_WORD *)a1 = 0;
  *(_BYTE *)(a1 + 1) = 4;
  v4 = 4;
  if ( KeGetCurrentIrql() < 2u )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    *(_BYTE *)(a1 + 1) |= 1u;
    v4 = *(_BYTE *)(a1 + 1);
    *(_BYTE *)a1 = CurrentIrql;
  }
  if ( *((struct _KTHREAD **)v1 + 1) != CurrentThread && (v4 & 2) == 0 )
  {
    if ( (v4 & 4) != 0 )
    {
      ExAcquireSpinLockExclusiveAtDpcLevel(v1);
      *((_QWORD *)v1 + 1) = CurrentThread;
    }
    else
    {
      ExAcquireSpinLockSharedAtDpcLevel(v1);
    }
    *(_BYTE *)(a1 + 1) |= 2u;
  }
}
