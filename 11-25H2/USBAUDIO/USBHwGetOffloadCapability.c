/*
 * XREFs of USBHwGetOffloadCapability @ 0x140035960
 * Callers:
 *     USBDeviceGetOffloadCapability @ 0x140035340 (USBDeviceGetOffloadCapability.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140005F60 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     USBD_CloseHandle @ 0x140019D7C (USBD_CloseHandle.c)
 *     USBD_CreateHandle @ 0x140019DFC (USBD_CreateHandle.c)
 *     USBD_QueryUsbCapability @ 0x14001A238 (USBD_QueryUsbCapability.c)
 */

__int64 __fastcall USBHwGetOffloadCapability(__int64 a1, int *a2, ULONG a3)
{
  int v3; // esi
  const GUID *v5; // rdx
  NTSTATUS v6; // edi
  ULONG v7; // r8d
  PDEVICE_OBJECT v8; // r10
  bool v9; // bl
  NTSTATUS v10; // eax
  int v11; // edx
  bool v12; // bl
  __int64 result; // rax
  int OutputBuffer; // [rsp+70h] [rbp+8h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+10h] BYREF
  USBD_HANDLE USBDHandle; // [rsp+80h] [rbp+18h] BYREF

  USBDHandle = 0LL;
  v3 = 0;
  OutputBuffer = 0;
  ResultLength = 0;
  v6 = USBD_CreateHandle(*(PDEVICE_OBJECT *)(a1 + 24), *(PDEVICE_OBJECT *)(a1 + 40), a3, 0x38627845u, &USBDHandle);
  if ( v6 >= 0 )
  {
    v10 = USBD_QueryUsbCapability(USBDHandle, v5, v7, (PUCHAR)&OutputBuffer, &ResultLength);
    v6 = v10;
    if ( v10 >= 0 )
    {
      LODWORD(v5) = ResultLength;
      if ( ResultLength == 4 )
      {
        LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                  && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
                  && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v5 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(
            WPP_GLOBAL_Control->AttachedDevice,
            (_DWORD)v5,
            v7,
            WPP_GLOBAL_Control->DeviceExtension);
        }
        if ( OutputBuffer )
        {
          if ( OutputBuffer == 1 )
          {
            v3 = 1;
          }
          else if ( OutputBuffer == 2 )
          {
            v3 = 2;
          }
        }
      }
      else
      {
        v6 = -1073741823;
        v8 = WPP_GLOBAL_Control;
        v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
          && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
        if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
          goto LABEL_9;
      }
    }
    else
    {
      if ( v10 != -1073741637 && v10 != -1073741822 )
      {
        v12 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
           && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
           && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
        if ( v12 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v11) = v12;
          LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_d(WPP_GLOBAL_Control->AttachedDevice, v11, v7, WPP_GLOBAL_Control->DeviceExtension);
        }
      }
      v6 = 0;
    }
  }
  else
  {
    v8 = WPP_GLOBAL_Control;
    v9 = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x100) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    LOBYTE(v7) = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v9 || *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
LABEL_9:
      LOBYTE(v5) = v9;
      WPP_RECORDER_AND_TRACE_SF_d(v8->AttachedDevice, (_DWORD)v5, v7, v8->DeviceExtension);
    }
  }
  if ( USBDHandle )
    USBD_CloseHandle(USBDHandle);
  result = (unsigned int)v6;
  *a2 = v3;
  return result;
}
