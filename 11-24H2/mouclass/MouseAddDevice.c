/*
 * XREFs of MouseAddDevice @ 0x1C000F790
 * Callers:
 *     <none>
 * Callees:
 *     MouCreateClassObject @ 0x1C000F950 (MouCreateClassObject.c)
 *     MouseAddDeviceEx @ 0x1C000FF40 (MouseAddDeviceEx.c)
 */

__int64 __fastcall MouseAddDevice(struct _DRIVER_OBJECT *IoObject, PDEVICE_OBJECT PhysicalDeviceObject)
{
  __int64 result; // rax
  __int64 v5; // rbx
  PDEVICE_OBJECT v6; // rax
  NTSTATUS v7; // esi
  _DWORD *ErrorLogEntry; // rax

  result = MouCreateClassObject(IoObject, 0);
  if ( (int)result >= 0 )
  {
    v5 = MEMORY[0x40];
    v6 = IoAttachDeviceToDeviceStack(0LL, PhysicalDeviceObject);
    *(_QWORD *)(v5 + 16) = v6;
    if ( v6 )
    {
      *(_QWORD *)(v5 + 24) = PhysicalDeviceObject;
      *(_WORD *)(v5 + 64) = 1;
      *(_DWORD *)(v5 + 172) = 1;
      *(_DWORD *)(v5 + 176) = 1;
      PoSetPowerState(0LL, DevicePowerState, (POWER_STATE)1);
      *(_QWORD *)(v5 + 268) = 0LL;
      *(_BYTE *)(v5 + 345) = 0;
      *(_QWORD *)(v5 + 280) = 0LL;
      *(_BYTE *)(v5 + 288) = 0;
      *(_QWORD *)(v5 + 296) = 0LL;
      *(_DWORD *)(v5 + 304) = 0;
      MEMORY[0x30] |= 0x2000u;
      MEMORY[0x30] &= ~0x80u;
      v7 = IoRegisterDeviceInterface(PhysicalDeviceObject, &GUID_DEVINTERFACE_MOUSE, 0LL, (PUNICODE_STRING)(v5 + 88));
      if ( v7 >= 0 )
      {
        return (unsigned int)MouseAddDeviceEx(v5, 0LL, 0LL);
      }
      else
      {
        IoDetachDevice(*(PDEVICE_OBJECT *)(v5 + 16));
        *(_QWORD *)(v5 + 16) = 0LL;
        IoDeleteDevice(0LL);
      }
      return (unsigned int)v7;
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
