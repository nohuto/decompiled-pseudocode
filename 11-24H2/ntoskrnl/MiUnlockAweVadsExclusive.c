/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x14026783C
 * Callers:
 *     MiCloneVads @ 0x140268194 (MiCloneVads.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140683FF8 (MiRemoveUserPhysicalPagesView.c)
 *     MmSetGraphicsPtes @ 0x1407EBEE0 (MmSetGraphicsPtes.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9CD0 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14028F9A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140362C10 (KiCheckForKernelApcDelivery.c)
 */

_QWORD *__fastcall MiUnlockAweVadsExclusive(__int64 a1)
{
  _QWORD *result; // rax

  result = (_QWORD *)ExReleaseAutoExpandPushLockExclusive(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 1040LL) + 1112LL, 0LL);
  if ( (*(_WORD *)(a1 + 486))++ == 0xFFFF )
  {
    result = (_QWORD *)(a1 + 152);
    if ( (_QWORD *)*result != result )
      return (_QWORD *)KiCheckForKernelApcDelivery();
  }
  return result;
}
