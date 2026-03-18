/*
 * XREFs of rimFindHoldingFrame @ 0x1C00E1B8A
 * Callers:
 *     RIMAbandonPointerDeviceFrame @ 0x1C019F6B0 (RIMAbandonPointerDeviceFrame.c)
 *     RIMRemoveHoldingFrame @ 0x1C019FFA4 (RIMRemoveHoldingFrame.c)
 *     RIMStoreRawDataInPointerDeviceFrame @ 0x1C01A030C (RIMStoreRawDataInPointerDeviceFrame.c)
 *     rimFindAndReclaimHoldingFrame @ 0x1C01A0438 (rimFindAndReclaimHoldingFrame.c)
 *     rimFindOrCreateHoldingFrame @ 0x1C01A0478 (rimFindOrCreateHoldingFrame.c)
 *     rimGetCompleteFrameAndReleaseHoldingFrame @ 0x1C01A06F8 (rimGetCompleteFrameAndReleaseHoldingFrame.c)
 *     rimStorePointersInHoldingFrame @ 0x1C01A11A0 (rimStorePointersInHoldingFrame.c)
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
