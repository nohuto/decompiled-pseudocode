/*
 * XREFs of UsbhArmHubForWakeDetect @ 0x140013CAC
 * Callers:
 *     UsbhArmHubWakeOnConnect @ 0x140013A7C (UsbhArmHubWakeOnConnect.c)
 *     UsbhFdoSetPowerDx_Action @ 0x1400372B8 (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140014368 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

LONG __fastcall UsbhArmHubForWakeDetect(PDEVICE_OBJECT DeviceObject)
{
  _DWORD *v2; // rdi
  void *DeviceExtension; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  void *v6; // rdx
  __int64 v7; // rcx
  void *v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  LONG result; // eax
  void *v12; // rdx
  __int64 v13; // rcx

  v2 = FdoExt((__int64)DeviceObject);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v4 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v4 = 727144296;
        *(_QWORD *)(v4 + 8) = 0LL;
        *(_QWORD *)(v4 + 16) = 0LL;
        *(_QWORD *)(v4 + 24) = 0LL;
      }
    }
  }
  UsbhEtwLogHubIrpEvent(DeviceObject, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_WAIT_WAKE_START, 0, 0);
  while ( 1 )
  {
    v5 = _InterlockedCompareExchange(v2 + 1221, 2, 1);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( DeviceObject )
      {
        v6 = DeviceObject->DeviceExtension;
        if ( v6 )
        {
          v7 = *((_QWORD *)v6 + 111)
             + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v6 + 220) & *((_DWORD *)v6 + 221));
          *(_DWORD *)v7 = 2018989928;
          *(_QWORD *)(v7 + 8) = 0LL;
          *(_QWORD *)(v7 + 16) = 0LL;
          *(_QWORD *)(v7 + 24) = v5;
        }
      }
    }
    if ( (_DWORD)v5 == 1 )
      break;
    result = v5 - 2;
    if ( (((_DWORD)v5 - 2) & 0xFFFFFFFD) == 0 )
      return result;
    UsbhDisarmHubForWakeDetect(DeviceObject);
  }
  KeWaitForSingleObject(v2 + 1224, Executive, 0, 0, 0LL);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      v8 = DeviceObject->DeviceExtension;
      if ( v8 )
      {
        v9 = *((_QWORD *)v8 + 111)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v8 + 220) & *((_DWORD *)v8 + 221));
        *(_DWORD *)v9 = 1884772200;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = 0LL;
      }
    }
  }
  KeResetEvent((PRKEVENT)v2 + 204);
  v10 = PoRequestPowerIrp(DeviceObject, 0, (POWER_STATE)v2[1259], UsbhFdoWakePoComplete_Action, 0LL, 0LL);
  if ( v10 == 259 )
  {
    result = UsbhLogMask;
    if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
    {
      v12 = DeviceObject->DeviceExtension;
      if ( v12 )
      {
        result = 1297236328;
        v13 = *((_QWORD *)v12 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v12 + 220) & *((_DWORD *)v12 + 221));
        *(_DWORD *)v13 = 1297236328;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 0LL;
      }
    }
  }
  else
  {
    Log((_DWORD)DeviceObject, 16, 1463896944, v10, 0LL);
    v2[1221] = 1;
    return KeSetEvent((PRKEVENT)v2 + 204, 0, 0);
  }
  return result;
}
