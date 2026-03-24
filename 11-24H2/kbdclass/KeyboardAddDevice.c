/*
 * XREFs of KeyboardAddDevice @ 0x1C000FAE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0006360 (WPP_RECORDER_SF_d.c)
 *     KbdCreateClassObject @ 0x1C000FD50 (KbdCreateClassObject.c)
 *     KeyboardQueryDeviceKey @ 0x1C0010480 (KeyboardQueryDeviceKey.c)
 *     KeyboardAddDeviceEx @ 0x1C00105B0 (KeyboardAddDeviceEx.c)
 */

__int64 __fastcall KeyboardAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  __int64 v5; // rbx
  PDEVICE_OBJECT v6; // rax
  _DWORD *ErrorLogEntry; // rax
  int v8; // eax
  int v9; // edx
  int v10; // r8d
  NTSTATUS v11; // eax
  PVOID v12; // rsi
  unsigned int v13; // edi
  HANDLE Handle; // [rsp+30h] [rbp-28h] BYREF
  PVOID P; // [rsp+38h] [rbp-20h]

  P = 0LL;
  Handle = 0LL;
  result = KbdCreateClassObject(IoObject, 0);
  if ( (int)result >= 0 )
  {
    v5 = MEMORY[0x40];
    v6 = IoAttachDeviceToDeviceStack(0LL, PhysicalDeviceObject);
    *(_QWORD *)(v5 + 16) = v6;
    if ( v6 )
    {
      *(_QWORD *)(v5 + 24) = PhysicalDeviceObject;
      *(_WORD *)(v5 + 64) = 1;
      *(_DWORD *)(v5 + 188) = 1;
      *(_DWORD *)(v5 + 192) = 1;
      PoSetPowerState(0LL, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(v5 + 284) = 0LL;
      *(_BYTE *)(v5 + 362) = 0;
      *(_QWORD *)(v5 + 296) = 0LL;
      *(_BYTE *)(v5 + 304) = 0;
      *(_QWORD *)(v5 + 312) = 0LL;
      *(_DWORD *)(v5 + 320) = 0;
      *(_BYTE *)(v5 + 66) = 0;
      *(_QWORD *)(v5 + 368) = 0LL;
      *(_DWORD *)(v5 + 376) = 0;
      v8 = IoOpenDriverRegistryKey(IoObject, 0LL, 131097LL, 0LL);
      if ( v8 >= 0 )
      {
        if ( (int)KeyboardQueryDeviceKey(Handle) >= 0 )
          *(_BYTE *)(v5 + 66) = 0;
        ZwClose(Handle);
      }
      else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_d(WPP_GLOBAL_Control->DeviceExtension, v9, v10, 15, (unsigned int)&Handle, v8);
      }
      MEMORY[0x30] |= 0x2000u;
      MEMORY[0x30] &= ~0x80u;
      v11 = IoRegisterDeviceInterface(
              PhysicalDeviceObject,
              &GUID_DEVINTERFACE_KEYBOARD,
              0LL,
              (PUNICODE_STRING)(v5 + 88));
      v12 = P;
      v13 = v11;
      if ( v11 >= 0 )
      {
        v13 = KeyboardAddDeviceEx(v5, P, 0LL);
      }
      else
      {
        IoDetachDevice(*(PDEVICE_OBJECT *)(v5 + 16));
        *(_QWORD *)(v5 + 16) = 0LL;
        IoDeleteDevice(0LL);
      }
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      return v13;
    }
    else
    {
      ErrorLogEntry = IoAllocateErrorLogEntry(IoObject, 0x30u);
      if ( ErrorLogEntry )
      {
        ErrorLogEntry[3] = -1073414129;
        *ErrorLogEntry = 0;
        *((_QWORD *)ErrorLogEntry + 3) = 0LL;
        ErrorLogEntry[4] = 0;
        ErrorLogEntry[5] = -1073741667;
        IoWriteErrorLogEntry(ErrorLogEntry);
      }
      IoDeleteDevice(0LL);
      return 3221225629LL;
    }
  }
  return result;
}
