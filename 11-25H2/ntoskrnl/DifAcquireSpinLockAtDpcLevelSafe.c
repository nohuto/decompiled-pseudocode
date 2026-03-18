/*
 * XREFs of DifAcquireSpinLockAtDpcLevelSafe @ 0x14060DE24
 * Callers:
 *     DifObjTrkInsertItem @ 0x14060BD30 (DifObjTrkInsertItem.c)
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14060BED0 (DifObjTrkQeuryInvokeDeleteRange.c)
 *     DifObjTrkRemoveItem @ 0x14060C200 (DifObjTrkRemoveItem.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14031F360 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
