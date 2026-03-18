/*
 * XREFs of UsbDevice_GetEndpointOffloadInformation @ 0x14003A950
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x14003A070 (UsbDevice_EndpointsConfigureCompletion.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x14000D87C (Debug_FreAssertMsg.c)
 *     XilCoreUsbDevice_GetDeviceContextBufferVA @ 0x140015624 (XilCoreUsbDevice_GetDeviceContextBufferVA.c)
 *     Controller_IncrementNumberOfEndpointsOffloaded @ 0x140040954 (Controller_IncrementNumberOfEndpointsOffloaded.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_GetEndpointOffloadInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // rbp
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rdi
  int v11; // ecx
  __int64 v12; // rcx
  __int64 DeviceContextBufferVA; // rax
  int v14; // r9d
  int v15; // edx
  int v16; // ecx
  bool v17; // zf
  __int64 v18; // rdx

  result = *(_QWORD *)(a1 + 8);
  v4 = 0LL;
  v8 = *(_QWORD *)(result + 128);
  if ( *(_DWORD *)(result + 1044) == 1 )
  {
    result = *(_QWORD *)(v8 + 32);
    v4 = *(_QWORD *)(result + 8LL * *(unsigned int *)(v8 + 64));
  }
  v9 = 0LL;
  if ( *(_DWORD *)(a2 + 24) )
  {
    while ( 1 )
    {
      result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
                 WdfDriverGlobals,
                 *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8 * v9),
                 off_14006AFE8);
      v10 = result;
      if ( *(unsigned __int8 *)(result + 98) == *(_WORD *)(a3 + 4) )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(a2 + 24) )
        return result;
    }
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1044LL) == 1 )
    {
      v11 = *(_DWORD *)(result + 1360);
      if ( v11 == 2 )
      {
        Debug_FreAssertMsg(
          (__int64)"Endpoint is already offloaded",
          0,
          (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
          1288);
      }
      else
      {
        if ( *(_DWORD *)(*(_QWORD *)result + 1044LL) == 2 )
          Debug_FreAssertMsg(
            (__int64)"Invalid current offload state",
            v11 == 1,
            (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\endpoint.h",
            1295);
        v12 = *(_QWORD *)v10;
        *(_DWORD *)(v10 + 1360) = 2;
        Controller_IncrementNumberOfEndpointsOffloaded(v12);
      }
    }
    DeviceContextBufferVA = XilCoreUsbDevice_GetDeviceContextBufferVA(a1 + (*(_BYTE *)(a1 + 657) != 0 ? 616LL : 608LL));
    v14 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1044LL);
    *(_DWORD *)(a3 + 10) = v14;
    *(_BYTE *)(a3 + 14) = *(_BYTE *)(DeviceContextBufferVA + 6);
    v15 = *(_DWORD *)(a3 + 14) ^ (*(_DWORD *)(a3 + 14) ^ (*(_DWORD *)DeviceContextBufferVA << 8)) & 0xFFFFF00;
    *(_DWORD *)(a3 + 14) = v15;
    *(_DWORD *)(a3 + 14) = v15 & 0xFFFFFFF | ((*(_DWORD *)DeviceContextBufferVA & 0xFFF00000) << 8);
    *(_BYTE *)(a3 + 18) = *(_BYTE *)(DeviceContextBufferVA + 12);
    *(_BYTE *)(a3 + 19) = *(_BYTE *)(a1 + 135);
    v16 = *(_DWORD *)(a3 + 18) ^ (*(_DWORD *)(a3 + 18) ^ (*(_DWORD *)DeviceContextBufferVA >> 9)) & 0x10000;
    *(_DWORD *)(a3 + 18) = v16;
    result = v16 ^ (v16 ^ (*(unsigned __int8 *)(a1 + 137) << 17)) & 0x20000u;
    *(_DWORD *)(a3 + 18) = result;
    if ( v14 == 1 )
    {
      v17 = *(_QWORD *)(a3 + 98) == 0LL;
      v18 = *(_QWORD *)(v10 + 88);
      *(_QWORD *)(a3 + 22) = *(_QWORD *)(*(_QWORD *)(v18 + 176) + 24LL);
      *(_QWORD *)(a3 + 38) = *(unsigned int *)(*(_QWORD *)(v18 + 176) + 44LL);
      *(_QWORD *)(a3 + 30) = *(_QWORD *)(*(_QWORD *)(v18 + 176) + 16LL);
      *(_DWORD *)(a3 + 46) = *(_DWORD *)(v18 + 200);
      *(_DWORD *)(a3 + 50) = *(_DWORD *)(v8 + 64);
      *(_QWORD *)(a3 + 54) = *(_QWORD *)(*(_QWORD *)(v4 + 160) + 24LL);
      *(_QWORD *)(a3 + 70) = *(unsigned int *)(*(_QWORD *)(v4 + 160) + 44LL);
      *(_QWORD *)(a3 + 62) = *(_QWORD *)(*(_QWORD *)(v4 + 160) + 16LL);
      result = *(unsigned int *)(v4 + 136);
      *(_DWORD *)(a3 + 78) = result;
      if ( !v17 )
      {
        *(_QWORD *)(a3 + 114) = *(_QWORD *)(*(_QWORD *)(v18 + 240) + 24LL);
        result = *(_QWORD *)(v18 + 240);
        *(_QWORD *)(a3 + 122) = *(_QWORD *)(result + 16);
      }
    }
  }
  return result;
}
