/*
 * XREFs of MiUnlockAweVadsExclusive @ 0x1404B4370
 * Callers:
 *     MiCloneVads @ 0x1402CC944 (MiCloneVads.c)
 *     MiRemoveUserPhysicalPagesView @ 0x1406775E8 (MiRemoveUserPhysicalPagesView.c)
 *     MmSetGraphicsPtes @ 0x1407DBA70 (MmSetGraphicsPtes.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407E96D0 (MiCreateProcessDefaultAweInfo.c)
 * Callees:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1402BD2A0 (ExReleaseAutoExpandPushLockExclusive.c)
 *     KiCheckForKernelApcDelivery @ 0x140320950 (KiCheckForKernelApcDelivery.c)
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
