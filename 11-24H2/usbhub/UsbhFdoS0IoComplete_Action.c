/*
 * XREFs of UsbhFdoS0IoComplete_Action @ 0x14002E360
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhFdoPower_PowerFailureEntry @ 0x14002E74C (UsbhFdoPower_PowerFailureEntry.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhAcquireFdoPwrLock @ 0x14002F260 (UsbhAcquireFdoPwrLock.c)
 *     UsbhReleaseFdoPwrLock @ 0x14002F2EC (UsbhReleaseFdoPwrLock.c)
 *     UsbhSetFdoPowerState @ 0x14002F344 (UsbhSetFdoPowerState.c)
 *     UsbhEtwLogHubPowerEvent @ 0x1400302AC (UsbhEtwLogHubPowerEvent.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhFdoS0IoComplete_Action(PDEVICE_OBJECT DeviceObject, PIRP Irp, _QWORD *Context)
{
  _DWORD *v6; // rax
  __int64 Status; // r8
  _DWORD *v8; // r15
  void *DeviceExtension; // rdx
  __int64 v10; // rcx
  __int64 v11; // r12
  __int64 v12; // rsi
  int v13; // edx
  void *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  PDEVICE_OBJECT v17; // rcx
  NTSTATUS v18; // eax
  NTSTATUS v19; // esi
  void *v21; // r8
  __int64 v22; // rdx

  v6 = FdoExt((__int64)DeviceObject);
  Status = Irp->IoStatus.Status;
  v8 = v6;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v10 = *((_QWORD *)DeviceExtension + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v10 = 1128870003;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = Irp;
        *(_QWORD *)(v10 + 24) = Status;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      18,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids);
  v11 = Context[9];
  UsbhAcquireFdoPwrLock(DeviceObject, v11, 113LL, 825258857LL);
  v12 = Irp->IoStatus.Status;
  FdoExt((__int64)DeviceObject)[1053] = 1;
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( DeviceObject )
      {
        v14 = DeviceObject->DeviceExtension;
        if ( v14 )
        {
          v15 = *((_QWORD *)v14 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v14 + 220) & *((_DWORD *)v14 + 221));
          *(_DWORD *)v15 = 556811344;
          *(_QWORD *)(v15 + 8) = 0LL;
          *(_QWORD *)(v15 + 16) = 0LL;
          *(_QWORD *)(v15 + 24) = v12;
        }
      }
    }
    v16 = (unsigned int)v12;
    v17 = DeviceObject;
    goto LABEL_14;
  }
  *((_DWORD *)Context + 7) = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v13,
      1,
      19,
      (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
      (char)DeviceObject);
  Log((__int64)DeviceObject, 16, 1349665840, 0LL, v12);
  UsbhSetFdoPowerState(DeviceObject, 0LL, 209LL);
  UsbhReleaseFdoPwrLock(DeviceObject, v11);
  UsbhEtwLogHubPowerEvent(DeviceObject, Irp, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_START, 1, 0);
  v18 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Context, File, 1u, 0x20u);
  v17 = DeviceObject;
  if ( v18 < 0 )
  {
    LODWORD(v12) = 0;
    v16 = 0LL;
LABEL_14:
    UsbhFdoPower_PowerFailureEntry(v17, 118LL, v16, Context);
    goto LABEL_26;
  }
  v19 = PoRequestPowerIrp(DeviceObject, 2u, (POWER_STATE)1, UsbhFdoD0PoComplete_Action, Context, 0LL);
  Log((__int64)DeviceObject, 16, 1345406000, 0LL, v19);
  UsbhAcquireFdoPwrLock(DeviceObject, v11, 113LL, 842036073LL);
  if ( v19 < 0 || dword_14006F6BC )
  {
    if ( v19 == 259 )
    {
      Log((__int64)DeviceObject, 16, 1349411923, (__int64)Irp, 259LL);
      UsbhReleaseFdoPwrLock(DeviceObject, v11);
      return 3221225494LL;
    }
    LODWORD(v12) = 0;
    UsbhFdoPower_PowerFailureEntry(DeviceObject, 119LL, 0LL, Context);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Context, 0x20u);
  }
  else
  {
    Log((__int64)DeviceObject, 16, 1131245651, (__int64)Irp, v19);
    LODWORD(v12) = 0;
    UsbhReleaseFdoPwrLock(DeviceObject, v11);
  }
LABEL_26:
  UsbhPoStartNextPowerIrp_Fdo(DeviceObject, Irp, 2272LL);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v8 + 306), Irp, 0x20u);
  if ( (UsbhLogMask & 0x10) != 0 && DeviceObject )
  {
    v21 = DeviceObject->DeviceExtension;
    if ( v21 )
    {
      v22 = *((_QWORD *)v21 + 111)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
      *(_DWORD *)v22 = 1414689360;
      *(_QWORD *)(v22 + 24) = (int)v12;
      *(_QWORD *)(v22 + 8) = 0LL;
      *(_QWORD *)(v22 + 16) = Irp;
    }
  }
  return (unsigned int)v12;
}
