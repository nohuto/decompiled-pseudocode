/*
 * XREFs of UsbhFdoSetPowerDx_Action @ 0x1400372B8
 * Callers:
 *     UsbhFdoDevicePowerState @ 0x140049BC8 (UsbhFdoDevicePowerState.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhLatchPdo @ 0x14000ABA0 (UsbhLatchPdo.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhSyncBusPause @ 0x14001397C (UsbhSyncBusPause.c)
 *     UsbhArmHubWakeOnConnect @ 0x140013A7C (UsbhArmHubWakeOnConnect.c)
 *     UsbhArmHubForWakeDetect @ 0x140013CAC (UsbhArmHubForWakeDetect.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x140014314 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhDisarmHubForWakeDetect @ 0x140014368 (UsbhDisarmHubForWakeDetect.c)
 *     UsbhPdoArmedForWake @ 0x14001E130 (UsbhPdoArmedForWake.c)
 *     UsbhDispatch_BusEvent @ 0x14001FC5C (UsbhDispatch_BusEvent.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhCompletePdoWakeIrp @ 0x14002123C (UsbhCompletePdoWakeIrp.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhPoStartNextPowerIrp_Fdo @ 0x14002E848 (UsbhPoStartNextPowerIrp_Fdo.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400376CC (UsbhDispatch_HardResetEvent.c)
 *     UsbdHubDisarmBusForWake @ 0x140039A8C (UsbdHubDisarmBusForWake.c)
 *     UsbdHubArmBusForWake @ 0x140039B50 (UsbdHubArmBusForWake.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall UsbhFdoSetPowerDx_Action(PDEVICE_OBJECT DeviceObject, __int64 a2, IRP *a3)
{
  int v4; // esi
  int v5; // r12d
  char v6; // r15
  _DWORD *v9; // r13
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v11; // r9d
  __int64 v12; // r10
  unsigned int LowPart; // ecx
  unsigned int v14; // ecx
  unsigned __int16 i; // si
  __int64 v16; // rax
  __int64 v17; // rbx
  _DWORD *v18; // r14
  int v19; // edx
  int v20; // r8d
  unsigned __int16 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rbx
  int v24; // r9d
  int v25; // eax
  unsigned int v26; // ebx
  int v28; // [rsp+88h] [rbp+10h]
  __int64 v29; // [rsp+90h] [rbp+18h]
  _DWORD *v30; // [rsp+98h] [rbp+20h]

  v28 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v30 = FdoExt((__int64)DeviceObject);
  v9 = v30;
  Log((__int64)DeviceObject, 16, 1349731448, a2, (__int64)a3);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v29 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = a3;
  Log((__int64)DeviceObject, 8, 1381192816, 0LL, 0LL);
  UsbhDispatch_HardResetEvent(DeviceObject, v12, (unsigned int)(v11 + 10));
  UsbhSyncBusPause((__int64)DeviceObject, v29, 3);
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  *(_DWORD *)(a2 + 28) = LowPart;
  v14 = LowPart - 3;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      v30[1054] = 0;
      Log((__int64)DeviceObject, 16, 1349280819, 0LL, (__int64)a3);
      UsbhDisarmHubWakeOnConnect((__int64)DeviceObject);
      UsbhDisarmHubForWakeDetect((__int64)DeviceObject);
      UsbdHubDisarmBusForWake(DeviceObject);
      for ( i = 1; i <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938); ++i )
      {
        v16 = UsbhLatchPdo((__int64)DeviceObject, i, (__int64)a3, 0x46644433u);
        v17 = v16;
        if ( v16 )
        {
          v18 = PdoExt(v16);
          if ( UsbhCompletePdoWakeIrp((__int64)DeviceObject, v17, -1073741436)
            && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_dq(
              WPP_GLOBAL_Control->DeviceExtension,
              v19,
              v20,
              29,
              (__int64)&WPP_a1eb007e7448359bd872fcf3001d4cf6_Traceguids,
              *((_WORD *)v18 + 714),
              v17);
          }
          UsbhUnlatchPdo((__int64)DeviceObject, v17, (__int64)a3, 0x46644433u);
        }
      }
    }
  }
  else
  {
    v30[1054] = *(_DWORD *)(a2 + 88);
    Log((__int64)DeviceObject, 16, 1349280818, 0LL, (__int64)a3);
    if ( dword_14006F59C )
    {
      if ( dword_14006F59C == 1 )
      {
        v4 = 1;
      }
      else if ( dword_14006F59C == 3 )
      {
        v4 = HIBYTE(v30[640]) & 1;
      }
    }
    v21 = 1;
    if ( *((_BYTE *)FdoExt((__int64)DeviceObject) + 2938) )
    {
      do
      {
        v22 = UsbhLatchPdo((__int64)DeviceObject, v21, (__int64)a3, 0x46644432u);
        v23 = v22;
        if ( v22 )
        {
          ++v5;
          if ( *((_BYTE *)PdoExt(v22) + 2740) )
            v6 = 1;
          if ( UsbhPdoArmedForWake(v23) )
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v23, (__int64)a3, 0x46644432u);
            v28 = 1;
            if ( !dword_14006F59C )
              v4 = 1;
          }
          else
          {
            UsbhUnlatchPdo((__int64)DeviceObject, v23, (__int64)a3, 0x46644432u);
          }
        }
        ++v21;
      }
      while ( v21 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) );
      v9 = v30;
      if ( v6 )
      {
        if ( (v30[640] & 1) != 0 || v5 == 1 )
          goto LABEL_32;
      }
    }
    if ( v4 )
    {
LABEL_32:
      UsbhArmHubWakeOnConnect(DeviceObject);
    }
    else
    {
      UsbhDisarmHubWakeOnConnect((__int64)DeviceObject);
      if ( !v28 )
      {
        UsbhDisarmHubForWakeDetect((__int64)DeviceObject);
        UsbdHubDisarmBusForWake(DeviceObject);
        goto LABEL_34;
      }
    }
    UsbhArmHubForWakeDetect(DeviceObject);
    UsbdHubArmBusForWake(DeviceObject);
  }
LABEL_34:
  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 2048, 1112756286, 0LL, 0LL);
  v25 = UsbhDispatch_BusEvent(DeviceObject, v29, v24 + 6);
  Log((__int64)DeviceObject, 2048, 1112756284, 0LL, v25);
  UsbhPoStartNextPowerIrp_Fdo((__int64)DeviceObject, a3, 4517);
  ++a3->CurrentLocation;
  ++a3->Tail.Overlay.CurrentStackLocation;
  v26 = PoCallDriver(*((PDEVICE_OBJECT *)v9 + 151), a3);
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v9 + 306), a3, 0x20u);
  return v26;
}
