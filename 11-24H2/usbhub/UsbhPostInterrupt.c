/*
 * XREFs of UsbhPostInterrupt @ 0x140020930
 * Callers:
 *     UsbhBusPause_Action @ 0x140005D1C (UsbhBusPause_Action.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhBusResume_Action @ 0x140020514 (UsbhBusResume_Action.c)
 *     UsbhHubResetIrqPipeWorker @ 0x140046BB0 (UsbhHubResetIrqPipeWorker.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     memset @ 0x140061340 (memset.c)
 */

NTSTATUS __fastcall UsbhPostInterrupt(PDEVICE_OBJECT DeviceObject)
{
  void *DeviceExtension; // rdx
  __int64 v3; // rcx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  unsigned __int64 v6; // r14
  IRP *v7; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  __int64 v10; // r8
  void *v11; // rdx
  __int64 v12; // rcx
  _IO_STACK_LOCATION *v13; // rax

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v3 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v3 = 1047622249;
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 16) = 0LL;
        *(_QWORD *)(v3 + 24) = 0LL;
      }
    }
  }
  v4 = FdoExt((__int64)DeviceObject);
  v5 = v4;
  v6 = *((_QWORD *)v4 + 334);
  v7 = (IRP *)*((_QWORD *)v4 + 333);
  if ( !v6 || !v7 )
    UsbhTrapFatal_Dbg(DeviceObject, DeviceObject);
  *(_QWORD *)(v6 + 8) = 0LL;
  *(_DWORD *)v6 = 589952;
  *(_QWORD *)(v6 + 24) = *((_QWORD *)v4 + 330);
  *(_DWORD *)(v6 + 32) = 2;
  *(_DWORD *)(v6 + 36) = *((unsigned __int16 *)v4 + 1316);
  *(_QWORD *)(v6 + 40) = *((_QWORD *)v4 + 335);
  memset(*((void **)v4 + 335), 0, *((unsigned __int16 *)v4 + 1316));
  *(_QWORD *)(v6 + 48) = 0LL;
  IoInitializeIrp(v7, 72 * *(char *)(*((_QWORD *)v5 + 151) + 76LL) + 208, *(_BYTE *)(*((_QWORD *)v5 + 151) + 76LL));
  CurrentStackLocation = v7->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = v6;
  CurrentStackLocation[-1].MajorFunction = 15;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = 2228227;
  if ( _InterlockedIncrement(v5 + 678) )
  {
    if ( IoSetCompletionRoutineEx(DeviceObject, v7, (PIO_COMPLETION_ROUTINE)UsbhHubIsr, DeviceObject, 1u, 1u, 1u) < 0 )
    {
      v13 = v7->Tail.Overlay.CurrentStackLocation;
      v13[-1].CompletionRoutine = (int (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *))UsbhHubIsr;
      v13[-1].Context = DeviceObject;
      v13[-1].Control = -32;
    }
    result = IofCallDriver(*((PDEVICE_OBJECT *)v5 + 151), v7);
    v10 = result;
    if ( (UsbhLogMask & 4) != 0 && DeviceObject )
    {
      v11 = DeviceObject->DeviceExtension;
      if ( v11 )
      {
        result = 1047621993;
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_DWORD *)v12 = 1047621993;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = v10;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  else
  {
    Log((_DWORD)DeviceObject, 4, 1769042750, 0, 0LL);
    _InterlockedDecrement(v5 + 678);
    return KeSetEvent((PRKEVENT)v5 + 112, 0, 0);
  }
  return result;
}
