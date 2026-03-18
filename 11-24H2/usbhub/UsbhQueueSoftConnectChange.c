/*
 * XREFs of UsbhQueueSoftConnectChange @ 0x1400439CC
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1400227C4 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x140022D78 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400388C8 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhOvercurrentResetWorker @ 0x14003F0B0 (UsbhOvercurrentResetWorker.c)
 *     UsbhCycleDevicePort @ 0x140045ADC (UsbhCycleDevicePort.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x140046FF8 (UsbhPortResumeTimeout.c)
 *     UsbhPortCycle @ 0x140057970 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x140057BC0 (UsbhPortRecycle.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEvent @ 0x140008E50 (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x14000AE30 (UsbhGetPortData.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

void __fastcall UsbhQueueSoftConnectChange(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4)
{
  int v4; // esi
  char v5; // bp
  int v6; // r14d
  __int64 PortData; // rax
  __int64 v9; // rdi
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  v4 = a2;
  v5 = a4;
  v16 = 1LL;
  v6 = a3;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x54u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v13);
  }
  PortData = UsbhGetPortData(a1, (unsigned __int16)v4, a3, a4);
  v9 = PortData;
  if ( PortData )
  {
    if ( v5
      && (UsbhDisablePort(a1, PortData), (FdoExt(a1)[640] & 1) != 0)
      && ((v10 = *(unsigned __int16 *)(v9 + 4), v14 = 0, v11 = UsbhQueryPortState(a1, v10, (__int64)&v14, &v15), v11 < 0)
       || (v14 & 2) != 0
       && ((UsbhWait(a1, 0xAu), v11 = UsbhQueryPortState(a1, *(unsigned __int16 *)(v9 + 4), (__int64)&v14, &v15),
                                v11 < 0)
        || (v14 & 2) != 0)) )
    {
      UsbhException(a1, *(unsigned __int16 *)(v9 + 4), 20LL, 0LL, 0, v11, v15, usbfile_pchange_c, 5286, 0);
    }
    else
    {
      UsbhDispatch_PortChangeQueueEvent(a1, v9, 4, v6, v16, 0, 0LL);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x55u,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        v12);
    }
  }
}
