/*
 * XREFs of MiLockAweVadsExclusive @ 0x14026788C
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140683FF8 (MiRemoveUserPhysicalPagesView.c)
 *     MmSetGraphicsPtes @ 0x1407EBEE0 (MmSetGraphicsPtes.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9CD0 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14031D9A0 (ExAcquireAutoExpandPushLockExclusive.c)
 */

__int64 __fastcall MiLockAweVadsExclusive(__int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL);
  --*(_WORD *)(a1 + 486);
  return ExAcquireAutoExpandPushLockExclusive(v2 + 1112, 0LL);
}
