/*
 * XREFs of RIMGetPointerInputType @ 0x1C00E0FE4
 * Callers:
 *     rimAbIsPointerSuppressedByOtherDeviceContacts @ 0x1C017BBF8 (rimAbIsPointerSuppressedByOtherDeviceContacts.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C017C228 (rimAbShouldButtonContactBeSuppressed.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C017C400 (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMUpdatePrimaryDevice @ 0x1C018C46C (RIMUpdatePrimaryDevice.c)
 *     rimDoUpdateInputGlobalsWorkItem @ 0x1C01A0394 (rimDoUpdateInputGlobalsWorkItem.c)
 *     RIMUpdatePrimaryAndFinalizePointerFlags @ 0x1C01A78EC (RIMUpdatePrimaryAndFinalizePointerFlags.c)
 *     rimProcessPointerDeviceButtonContact @ 0x1C01AB8BC (rimProcessPointerDeviceButtonContact.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C01E2D60 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1C00591BC (WPP_RECORDER_AND_TRACE_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v1 - 1) <= 3 )
    return 2LL;
  if ( (unsigned int)(v1 - 5) <= 1 )
    return 3LL;
  if ( v1 == 7 )
    return 5LL;
  LOBYTE(v1) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
  if ( (_BYTE)v1 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_q(
      WPP_GLOBAL_Control->AttachedDevice,
      v1,
      WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
      (_DWORD)gRimLog,
      3,
      1,
      10,
      (__int64)&WPP_30f9ddf97da63da78d93eb777283153b_Traceguids,
      a1);
  return 1LL;
}
