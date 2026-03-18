/*
 * XREFs of rimFindHoldingFrame @ 0x1400563E0
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x140056208 (RIMAbandonPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1400563A0 (rimFindAndReclaimHoldingFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1400574B8 (RIMStartPointerDeviceFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1400577FC (RIMStoreRawDataInPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x140151764 (RIMRemoveHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x14017EEEC (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x14017F21C (rimStorePointersInHoldingFrame.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall rimFindHoldingFrame(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rcx
  _QWORD *result; // rax
  __int64 v4; // rdx

  v2 = (_QWORD *)(a1 + 728);
  result = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 == v2 )
    return 0LL;
  v4 = *(_QWORD *)(a2 + 16);
  while ( result[3] != v4 )
  {
    result = (_QWORD *)*result;
    if ( result == v2 )
      return 0LL;
  }
  return result;
}
