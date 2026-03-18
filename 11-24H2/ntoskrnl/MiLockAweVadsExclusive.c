/*
 * XREFs of MiLockAweVadsExclusive @ 0x1404B3CC4
 * Callers:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140682E08 (MiRemoveUserPhysicalPagesView.c)
 *     MmSetGraphicsPtes @ 0x1407EB910 (MmSetGraphicsPtes.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9560 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14033E4C0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL);
  --*(_WORD *)(a1 + 486);
  ExAcquireAutoExpandPushLockExclusive(v2 + 1112, 0LL);
}
