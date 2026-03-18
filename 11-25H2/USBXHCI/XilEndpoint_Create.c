/*
 * XREFs of XilEndpoint_Create @ 0x140032E00
 * Callers:
 *     Endpoint_Create @ 0x140080B84 (Endpoint_Create.c)
 * Callees:
 *     XilEndpoint_FreeResources @ 0x140002654 (XilEndpoint_FreeResources.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     XilEndpoint_CreateSecureObject @ 0x1400467C4 (XilEndpoint_CreateSecureObject.c)
 */

__int64 __fastcall XilEndpoint_Create(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // r8d
  int SecureObject; // edi

  v1 = a1 + 1320;
  *(_QWORD *)(a1 + 1352) = a1;
  v3 = *(_DWORD *)(*(_QWORD *)a1 + 1012LL);
  if ( v3 )
  {
    if ( (unsigned int)(v3 - 1) < 2 )
      *(_BYTE *)(a1 + 1344) = 1;
    else
      Debug_FreAssertMsg(
        (__int64)"Unknown DMA Mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        300);
  }
  else
  {
    *(_BYTE *)(a1 + 1344) = 0;
  }
  if ( *(_BYTE *)(v1 + 24) )
  {
    SecureObject = XilEndpoint_CreateSecureObject(v1);
    if ( SecureObject < 0 )
    {
      Debug_FreAssertMsg(
        (__int64)"XilEndpoint_CreateSecureObject failed",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilendpoint.c",
        314);
      XilEndpoint_FreeResources(v1);
      return (unsigned int)SecureObject;
    }
    *(_BYTE *)(v1 + 16) = *(_BYTE *)(v1 + 24);
    *(_QWORD *)(v1 + 8) = a1;
  }
  else
  {
    *(_QWORD *)v1 = a1;
    *(_BYTE *)(v1 + 8) = 0;
  }
  return 0;
}
