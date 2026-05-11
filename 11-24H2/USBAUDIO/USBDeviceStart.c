/*
 * XREFs of USBDeviceStart @ 0x1400403C0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001BB10 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14001BB50 (_guard_dispatch_icall.c)
 *     USBHwGetDeviceIDString @ 0x14002D384 (USBHwGetDeviceIDString.c)
 *     USBHwGetCaptureRequestSize @ 0x14002D4FC (USBHwGetCaptureRequestSize.c)
 *     USBHwGetAudioDeviceDescriptor @ 0x14002D5E8 (USBHwGetAudioDeviceDescriptor.c)
 *     USBHwLogStartFailure @ 0x14002DBBC (USBHwLogStartFailure.c)
 *     USBHwGetUsbBusInterface @ 0x14002DD9C (USBHwGetUsbBusInterface.c)
 *     USBDeviceDescriptorHacks @ 0x140034D9C (USBDeviceDescriptorHacks.c)
 *     USBHwGetAudioConfigurationDescriptor @ 0x140035304 (USBHwGetAudioConfigurationDescriptor.c)
 *     USBHwSelectAudioConfiguration @ 0x140035968 (USBHwSelectAudioConfiguration.c)
 *     IsLegacyMIDIDevice @ 0x14003685C (IsLegacyMIDIDevice.c)
 *     USBParseGetAudioSpecificInterface @ 0x14003B61C (USBParseGetAudioSpecificInterface.c)
 */

__int64 __fastcall USBDeviceStart(__int64 a1)
{
  __int64 v1; // r13
  __int64 v3; // r15
  int UsbBusInterface; // eax
  int AudioDeviceDescriptor; // ebx
  PVOID v6; // r14
  struct _USB_CONFIGURATION_DESCRIPTOR *v7; // r12
  __int64 v8; // rdx
  struct _USB_CONFIGURATION_DESCRIPTOR *v9; // rsi
  PVOID v10; // rdx
  PUSB_INTERFACE_DESCRIPTOR v11; // rax
  unsigned __int8 *AudioSpecificInterface; // rax
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // r8
  unsigned int v16; // r9d
  __int128 v17; // xmm1
  int v18; // edx
  bool v19; // al
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int128 v22; // xmm0
  struct _USB_CONFIGURATION_DESCRIPTOR *v23; // rcx
  PVOID Item; // [rsp+48h] [rbp-29h] BYREF
  PVOID v26; // [rsp+50h] [rbp-21h] BYREF
  PVOID StartPosition; // [rsp+58h] [rbp-19h] BYREF
  _OWORD v28[4]; // [rsp+60h] [rbp-11h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v26 = 0LL;
  StartPosition = 0LL;
  Item = 0LL;
  v3 = *(_QWORD *)(v1 + 72);
  UsbBusInterface = USBHwGetUsbBusInterface(a1, &Item);
  AudioDeviceDescriptor = UsbBusInterface;
  if ( UsbBusInterface < 0 )
  {
    strcpy((char *)v28, "Could not acquire Bus Interface");
    USBHwLogStartFailure(a1, UsbBusInterface, v28, 0x20u);
    v6 = Item;
    goto LABEL_43;
  }
  v6 = Item;
  AudioDeviceDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), Item, ExFreePool);
  if ( AudioDeviceDescriptor < 0 )
  {
    ExFreePool(v6);
    v6 = 0LL;
  }
  else
  {
    *(_QWORD *)(v3 + 56) = v6;
  }
  if ( AudioDeviceDescriptor < 0 )
    goto LABEL_43;
  AudioDeviceDescriptor = USBHwGetAudioDeviceDescriptor(a1, &v26);
  if ( AudioDeviceDescriptor < 0 )
  {
    v22 = *(_OWORD *)"Could not acquire Device Descriptor";
    strcpy((char *)&v28[2], "tor");
    v16 = 36;
    v17 = *(_OWORD *)"e Device Descriptor";
LABEL_32:
    v28[0] = v22;
LABEL_33:
    v18 = AudioDeviceDescriptor;
    goto LABEL_18;
  }
  v7 = (struct _USB_CONFIGURATION_DESCRIPTOR *)v26;
  AudioDeviceDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), v26, ExFreePool);
  if ( AudioDeviceDescriptor < 0 )
  {
    v23 = v7;
    goto LABEL_38;
  }
  *(_QWORD *)(v3 + 32) = v7;
  AudioDeviceDescriptor = USBHwGetAudioConfigurationDescriptor(a1, v8, (unsigned __int16 **)&StartPosition);
  if ( AudioDeviceDescriptor < 0 )
  {
    v17 = *(_OWORD *)"e Configuration Descriptor";
    v16 = 43;
    v28[0] = *(_OWORD *)"Could not acquire Configuration Descriptor";
    strcpy((char *)&v28[2], "Descriptor");
    goto LABEL_33;
  }
  v9 = (struct _USB_CONFIGURATION_DESCRIPTOR *)StartPosition;
  AudioDeviceDescriptor = KsAddItemToObjectBag(*(KSOBJECT_BAG *)(a1 + 8), StartPosition, ExFreePool);
  if ( AudioDeviceDescriptor < 0 )
  {
    v23 = v9;
LABEL_38:
    ExFreePool(v23);
    goto LABEL_43;
  }
  *(_QWORD *)(v3 + 40) = v9;
  USBDeviceDescriptorHacks((__int64)v7, (__int64)v9);
  v11 = USBD_ParseConfigurationDescriptorEx(v9, v10, -1, -1, 1, 1, -1);
  if ( !v11 )
  {
    v19 = IsLegacyMIDIDevice(v9);
    *(_BYTE *)(v3 + 5) = v19;
    if ( v19 )
      goto LABEL_16;
    strcpy((char *)v28, "Could not find Control interface in Configuration Descriptor");
    USBHwLogStartFailure(a1, AudioDeviceDescriptor, v28, 0x3Du);
    AudioDeviceDescriptor = -1073741438;
LABEL_43:
    if ( v6 )
      (*((void (__fastcall **)(_QWORD))v6 + 3))(*((_QWORD *)v6 + 1));
    return (unsigned int)AudioDeviceDescriptor;
  }
  *(_QWORD *)(v3 + 48) = v11;
  AudioSpecificInterface = USBParseGetAudioSpecificInterface((__int64)v9, &v11->bLength);
  if ( AudioSpecificInterface )
  {
    v13 = *(unsigned __int16 *)(AudioSpecificInterface + 3);
    *(_DWORD *)(v3 + 8) = v13;
    if ( v13 >= 0x200 )
      AudioDeviceDescriptor = -1073741735;
  }
  else
  {
    AudioDeviceDescriptor = -1073741438;
  }
  *(_DWORD *)(v1 + 1008) = USBD_ParseConfigurationDescriptorEx(v9, v9, -1, -1, 1, 3, -1) != 0LL;
  if ( AudioDeviceDescriptor < 0 )
    goto LABEL_43;
LABEL_16:
  v14 = USBHwSelectAudioConfiguration(a1);
  AudioDeviceDescriptor = v14;
  if ( v14 < 0 )
  {
    v16 = 40;
    v17 = *(_OWORD *)" a device configuration";
    v18 = v14;
    v28[0] = *(_OWORD *)"Could not Select a device configuration";
    strcpy((char *)&v28[2], "uration");
LABEL_18:
    v28[1] = v17;
    USBHwLogStartFailure(a1, v18, v28, v16);
    goto LABEL_43;
  }
  if ( !v7[1].iConfiguration )
    goto LABEL_24;
  AudioDeviceDescriptor = USBHwGetDeviceIDString(a1, (_QWORD *)(v1 + 24), (_DWORD *)(v1 + 32));
  if ( AudioDeviceDescriptor != -1073741822 )
  {
    if ( AudioDeviceDescriptor >= 0 )
      goto LABEL_25;
    v22 = *(_OWORD *)"Could not acquire a device name string";
    strcpy((char *)&v28[2], "string");
    v16 = 39;
    v17 = *(_OWORD *)"e a device name string";
    goto LABEL_32;
  }
  AudioDeviceDescriptor = 0;
LABEL_24:
  *(_DWORD *)(v1 + 32) = 10;
  *(_QWORD *)(v1 + 24) = Default_Product_String;
LABEL_25:
  *(_DWORD *)(v3 + 208) = USBHwGetCaptureRequestSize(a1, (_BYTE *)(v3 + 212), v15);
  v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 56LL);
  *(_BYTE *)(v3 + 4) = (*(__int64 (__fastcall **)(_QWORD))(v20 + 64))(*(_QWORD *)(v20 + 8));
  v21 = 0LL;
  *(_QWORD *)(v3 + 200) = v3 + 192;
  *(_QWORD *)(v3 + 192) = v3 + 192;
  *(_DWORD *)(v1 + 40) = *(unsigned __int16 *)&v7->MaxPower;
  *(_DWORD *)(v1 + 44) = *(unsigned __int16 *)&v7[1].bDescriptorType;
  *(_DWORD *)(v1 + 48) = *(unsigned __int16 *)((char *)&v7[1].wTotalLength + 1);
  *(_QWORD *)(v1 + 56) = &KSCOMPONENTID_USBAUDIO;
  while ( (unsigned int)v21 < 0x18 )
  {
    if ( *(_WORD *)&v7->MaxPower == DeviceIDsForVolumeCurve[2 * v21]
      && *(_WORD *)&v7[1].bDescriptorType == DeviceIDsForVolumeCurve[2 * v21 + 1] )
    {
      *(_BYTE *)(v3 + 6) = 1;
      break;
    }
    v21 = (unsigned int)(v21 + 1);
  }
  if ( AudioDeviceDescriptor < 0 )
    goto LABEL_43;
  return (unsigned int)AudioDeviceDescriptor;
}
