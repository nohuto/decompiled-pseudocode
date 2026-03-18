/*
 * XREFs of ?KiMaskInterruptDpc@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1405BD100
 * Callers:
 *     <none>
 * Callees:
 *     KiMaskInterruptInternal @ 0x14049C998 (KiMaskInterruptInternal.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiMaskInterruptDpc(struct _KDPC *a1, void *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v5; // esi
  unsigned __int8 CurrentIrql; // bl

  v4 = a4;
  v5 = a3;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  KiMaskInterruptInternal(v5, v4, a3, a4);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
}
