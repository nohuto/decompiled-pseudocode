/*
 * XREFs of RIMAbandonPointerDeviceFrame @ 0x1C019F6B0
 * Callers:
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMSuppressAllActiveContacts @ 0x1C018C27C (RIMSuppressAllActiveContacts.c)
 *     rimEndAllActiveContactsWorker @ 0x1C018E454 (rimEndAllActiveContactsWorker.c)
 *     rimEndPointerDeviceStaleContacts @ 0x1C01A890C (rimEndPointerDeviceStaleContacts.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01A9134 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimFindHoldingFrame @ 0x1C00E1B8A (rimFindHoldingFrame.c)
 *     rimReclaimHoldingFrame @ 0x1C01A1140 (rimReclaimHoldingFrame.c)
 *     RIMUpdatePointerDeviceStateAfterFrameCompleted @ 0x1C01A7560 (RIMUpdatePointerDeviceStateAfterFrameCompleted.c)
 */

__int64 __fastcall RIMAbandonPointerDeviceFrame(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  char v4; // r8
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r8

  v2 = a2;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v4 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v4 = 0;
  }
  if ( (_BYTE)a2 || v4 )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      v4,
      WPP_GLOBAL_Control->DeviceExtension,
      5,
      1,
      50,
      (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
  result = (__int64)rimFindHoldingFrame(a1, v2);
  if ( result && *(_DWORD *)(result + 16) )
  {
    rimReclaimHoldingFrame(v7, v6, result);
    result = RIMUpdatePointerDeviceStateAfterFrameCompleted(a1, v2, 0LL, 1LL);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (result = HIDWORD(WPP_GLOBAL_Control->Timer), (result & 1) == 0)
    || (LOBYTE(v6) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
  {
    LOBYTE(v6) = 0;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    || (v8 = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
  {
    v8 = 0;
  }
  if ( (_BYTE)v6 || v8 )
    return WPP_RECORDER_AND_TRACE_SF_(
             WPP_GLOBAL_Control->AttachedDevice,
             v6,
             v8,
             WPP_GLOBAL_Control->DeviceExtension,
             5,
             1,
             51,
             (__int64)&WPP_fa356a5d835a35169fe137386a876b0b_Traceguids);
  return result;
}
