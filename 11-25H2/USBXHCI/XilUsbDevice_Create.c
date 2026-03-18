/*
 * XREFs of XilUsbDevice_Create @ 0x140003A4C
 * Callers:
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1400817A0 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     XilCoreUsbDevice_Create @ 0x140003B48 (XilCoreUsbDevice_Create.c)
 *     XilUsbDevice_CreateSecureObject @ 0x140003C7C (XilUsbDevice_CreateSecureObject.c)
 *     XilUsbDevice_FreeResources @ 0x140003DEC (XilUsbDevice_FreeResources.c)
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 */

__int64 __fastcall XilUsbDevice_Create(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rbx
  __int64 v3; // rax
  __int64 v5; // rsi
  _BYTE *v6; // r8
  int SecureObject; // edi
  int v9; // ecx
  int v10; // ecx

  v2 = (_BYTE *)(a1 + 608);
  v3 = a2;
  *(_QWORD *)(a1 + 664) = a1;
  v5 = *(_QWORD *)(a1 + 8);
  LOBYTE(a2) = *(_BYTE *)(v5 + 1001);
  *(_BYTE *)(a1 + 657) = a2;
  if ( (_BYTE)a2 )
  {
    SecureObject = XilUsbDevice_CreateSecureObject(a1 + 608, v3);
    if ( SecureObject < 0 )
      goto LABEL_6;
    v9 = *(_DWORD *)(v5 + 1012);
    if ( v9 )
    {
      v10 = v9 - 1;
      if ( v10 )
      {
        if ( v10 == 1 )
          v2[50] = v2[48] == 0;
        else
          Debug_FreAssertMsg(
            "Unexpected DMA Mode",
            0LL,
            "onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\xilusbdevice.c",
            264LL);
      }
      else
      {
        v2[50] = 0;
      }
    }
    else
    {
      v2[50] = 1;
    }
    LOBYTE(a2) = v2[49];
    v6 = v2 + 8;
  }
  else
  {
    v6 = (_BYTE *)(a1 + 608);
    *(_BYTE *)(a1 + 658) = 1;
  }
  SecureObject = XilCoreUsbDevice_Create(a1, a2, v6);
  if ( SecureObject < 0 )
LABEL_6:
    XilUsbDevice_FreeResources(v2);
  return (unsigned int)SecureObject;
}
