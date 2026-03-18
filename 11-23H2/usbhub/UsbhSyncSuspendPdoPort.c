/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x1C0009B88
 * Callers:
 *     UsbhSshResumeDownstream @ 0x1C000E1B0 (UsbhSshResumeDownstream.c)
 *     UsbhBusIf_SuspendChildHub @ 0x1C001A0F0 (UsbhBusIf_SuspendChildHub.c)
 *     UsbhPdoSetDx @ 0x1C001ACC4 (UsbhPdoSetDx.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhPCE_Suspend @ 0x1C00190B4 (UsbhPCE_Suspend.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 *     WPP_RECORDER_SF_ @ 0x1C002E4E8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C002EA5C (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 *     UsbhEnableDeviceForWake @ 0x1C0054480 (UsbhEnableDeviceForWake.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbx
  int PortState; // edx
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // rax
  int v12; // eax
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+48h]

  v13 = 0;
  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        17,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        1,
        18,
        (__int64)&WPP_c17b1c85f60233f7ab03bac02008ab80_Traceguids,
        a2);
  }
  v6 = PdoExt(a2);
  PortState = UsbhQueryPortState(*(_QWORD *)(a1 + 8));
  if ( PortState >= 0 && (v14 & 1) != 0 )
  {
    if ( (*(_DWORD *)(v6 + 1420) & 0x100) != 0
      && *(int *)(PdoExt(a2) + 2352) >= 0
      && !a3
      && (*(_DWORD *)(v6 + 1420) & 4) == 0 )
    {
      v12 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v13);
      if ( (v12 & 0xC0000000) == 0xC0000000 )
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *(unsigned __int16 *)(v6 + 1428),
          50,
          0,
          0,
          v12,
          v13,
          usbfile_pdopwr_c,
          1404,
          0);
    }
    v13 = *(unsigned __int16 *)(v6 + 1428);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v8 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *(_QWORD *)(v8 + 4432) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v8 + 4432))(*(_QWORD *)(v8 + 4232), 0LL, 3LL, &v13);
    }
    v9 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *(unsigned __int16 *)(v6 + 1428));
    v13 = *(unsigned __int16 *)(v6 + 1428);
    if ( LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    {
      v10 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *(_QWORD *)(v10 + 4432) )
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64, int *))(v10 + 4432))(*(_QWORD *)(v10 + 4232), 0LL, 4LL, &v13);
    }
  }
  else
  {
    UsbhException(
      *(_QWORD *)(a1 + 8),
      *(unsigned __int16 *)(v6 + 1428),
      118,
      0,
      0,
      PortState,
      v13,
      usbfile_pdopwr_c,
      1420,
      0);
    return (unsigned int)-1073741823;
  }
  return v9;
}
