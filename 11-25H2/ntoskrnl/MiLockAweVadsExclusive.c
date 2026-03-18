/*
 * XREFs of MiLockAweVadsExclusive @ 0x1404B43C0
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1406775E8 (MiRemoveUserPhysicalPagesView.c)
 *     MmSetGraphicsPtes @ 0x1407DBA70 (MmSetGraphicsPtes.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407E96D0 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1402BD440 (ExAcquireAutoExpandPushLockExclusive.c)
 */

void __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL);
  --*(_WORD *)(a1 + 486);
  ExAcquireAutoExpandPushLockExclusive(v2 + 1112, 0LL);
}
