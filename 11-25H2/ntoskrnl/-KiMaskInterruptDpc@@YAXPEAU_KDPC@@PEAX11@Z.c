/*
 * XREFs of ?KiMaskInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405B9260
 * Callers:
 *     <none>
 * Callees:
 *     KiMaskInterruptInternal @ 0x14049F3B0 (KiMaskInterruptInternal.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall KiMaskInterruptDpc(struct _KDPC *a1, void *a2, void *a3, void *a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // bl

  v4 = (unsigned int)a4;
  v5 = (unsigned int)a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KiMaskInterruptInternal(v5, v4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
