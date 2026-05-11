/*
 * XREFs of ExitIrpThreadAndQueue @ 0x14000BCF8
 * Callers:
 *     DeviceStop @ 0x14002EE30 (DeviceStop.c)
 *     DeviceSurpriseRemoval @ 0x1400409F0 (DeviceSurpriseRemoval.c)
 * Callees:
 *     CleanupPendingIrpQ @ 0x14002E5E8 (CleanupPendingIrpQ.c)
 */

LONG_PTR __fastcall ExitIrpThreadAndQueue(__int64 a1)
{
  LONG_PTR result; // rax

  result = CleanupPendingIrpQ();
  if ( *(_QWORD *)(a1 + 704) )
  {
    *(_BYTE *)(a1 + 712) = 1;
    KeReleaseSemaphore((PRKSEMAPHORE)(a1 + 672), 0, 1, 1u);
    KeWaitForSingleObject(*(PVOID *)(a1 + 704), Executive, 0, 0, 0LL);
    result = ObfDereferenceObject(*(PVOID *)(a1 + 704));
    *(_QWORD *)(a1 + 704) = 0LL;
  }
  return result;
}
