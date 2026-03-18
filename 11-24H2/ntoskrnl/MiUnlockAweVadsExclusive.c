/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1404B3C74
 * Callers:
 *     MiCloneVads @ 0x1402C4DAC (MiCloneVads.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140682E08 (MiRemoveUserPhysicalPagesView.c)
 *     MmSetGraphicsPtes @ 0x1407EB910 (MmSetGraphicsPtes.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9560 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14025F390 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x1402BB4D0 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx

  result = (_QWORD *)ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL) + 1112LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery(v4, v3);
  }
  return result;
}
