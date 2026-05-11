/*
 * XREFs of USBParseGetAudioStreamingDataranges @ 0x14003B974
 * Callers:
 *     USBParseGetDatarangesAndModes @ 0x140037850 (USBParseGetDatarangesAndModes.c)
 * Callees:
 *     memset @ 0x14001BF00 (memset.c)
 *     IsSupportedFormat @ 0x1400368EC (IsSupportedFormat.c)
 *     USBParseConvertInterfaceToDataRange @ 0x140036AD8 (USBParseConvertInterfaceToDataRange.c)
 *     USBHwSelectStreamingAudioInterface @ 0x14003BBEC (USBHwSelectStreamingAudioInterface.c)
 *     IsZeroBWInterface @ 0x14003BFE8 (IsZeroBWInterface.c)
 *     USBParseGetNextAudioInterface @ 0x14003C28C (USBParseGetNextAudioInterface.c)
 */

__int64 __fastcall USBParseGetAudioStreamingDataranges(
        __int64 a1,
        struct _USB_CONFIGURATION_DESCRIPTOR *a2,
        LONG a3,
        _QWORD *a4,
        __int64 a5)
{
  PUSB_INTERFACE_DESCRIPTOR i; // rax
  PUSB_INTERFACE_DESCRIPTOR v10; // rbp
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // esi
  PUSB_INTERFACE_DESCRIPTOR NextAudioInterface; // r14
  __int64 v15; // rbx
  __int64 v16; // r8
  int v17; // eax
  __int64 (__fastcall **v18)(PVOID *); // rax
  __int64 v19; // rcx
  _QWORD v21[18]; // [rsp+40h] [rbp-168h] BYREF
  _QWORD v22[22]; // [rsp+D0h] [rbp-D8h] BYREF

  for ( i = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
        ;
        i = (PUSB_INTERFACE_DESCRIPTOR)USBParseGetNextAudioInterface(a2, v10) )
  {
    v10 = i;
    if ( !i || (unsigned __int8)IsZeroBWInterface(a2, i) )
      break;
  }
  if ( v10 )
  {
    memset(v21, 0, 0x88uLL);
    memset(v22, 0, sizeof(v22));
    v22[2] = a1;
    v21[2] = v22;
    v13 = USBHwSelectStreamingAudioInterface(v21, v10, v11, v12);
  }
  else
  {
    v13 = -1073741438;
  }
  NextAudioInterface = USBD_ParseConfigurationDescriptorEx(a2, a2, a3, -1, 1, 2, -1);
  if ( NextAudioInterface )
  {
    v15 = a5 + 128;
    while ( 1 )
    {
      if ( v13 < 0 )
        return (unsigned int)v13;
      if ( !(unsigned __int8)IsZeroBWInterface(a2, NextAudioInterface) )
      {
        if ( IsSupportedFormat((__int64)a2, (__int64)NextAudioInterface, v16) )
        {
          *(_QWORD *)(v15 + 16) = v10;
          v13 = USBParseConvertInterfaceToDataRange((__int64)a2, (__int64)NextAudioInterface, v15 - 128);
          if ( v13 >= 0 )
            break;
        }
      }
LABEL_29:
      NextAudioInterface = (PUSB_INTERFACE_DESCRIPTOR)USBParseGetNextAudioInterface(a2, NextAudioInterface);
      if ( !NextAudioInterface )
        return (unsigned int)v13;
    }
    v17 = *(_DWORD *)(v15 + 88) & 0xF000;
    if ( v17 )
    {
      if ( v17 == 4096 )
      {
        v18 = (__int64 (__fastcall **)(PVOID *))USBType2PinDispatch;
        *(_DWORD *)(v15 - 16) = 912;
LABEL_23:
        *(_QWORD *)v15 = v18;
LABEL_24:
        if ( *(_DWORD *)(v15 - 20) )
        {
          v13 = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), *(PVOID *)(v15 - 8), ExFreePool);
          if ( v13 < 0 )
            ExFreePool(*(PVOID *)(v15 - 8));
        }
        if ( a4 )
        {
          *a4 = v15 - 128;
          *(_DWORD *)(v15 - 124) |= 2u;
          a4[1] = &unk_1400273A8;
          a4 += 2;
          v15 += 232LL;
        }
        goto LABEL_29;
      }
      if ( v17 != 0x2000 )
        goto LABEL_24;
      v18 = &USBType3PinDispatch;
    }
    else
    {
      if ( *(char *)(*(_QWORD *)(v15 + 40) + 2LL) < 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
        *(_QWORD *)v15 = &USBCapturePinDispatch;
        *(_DWORD *)(v15 - 16) = 12 * *(_DWORD *)(v19 + 208) * (*(_DWORD *)(v15 + 92) + 12) + 2800;
        goto LABEL_24;
      }
      v18 = &USBType1PinDispatch;
    }
    *(_DWORD *)(v15 - 16) = 1000;
    goto LABEL_23;
  }
  return (unsigned int)v13;
}
