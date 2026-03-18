/*
 * XREFs of XilEndpoint_GetRemoteHandle @ 0x140046A34
 * Callers:
 *     TR_CreateSecureObject @ 0x14004B7A0 (TR_CreateSecureObject.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 */

__int64 __fastcall XilEndpoint_GetRemoteHandle(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 1344) )
    return *(_QWORD *)(a1 + 1320);
  Debug_FreAssertMsg(
    (__int64)"Unexpected code path hit",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
    32);
  return 0LL;
}
