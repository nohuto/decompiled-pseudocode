/*
 * XREFs of UsbhSyncSuspendPdoPort @ 0x14001E27C
 * Callers:
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhPdoSetDx @ 0x14001F800 (UsbhPdoSetDx.c)
 *     UsbhBusIf_SuspendChildHub @ 0x140036F20 (UsbhBusIf_SuspendChildHub.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhPdoArmedForWake @ 0x14001E130 (UsbhPdoArmedForWake.c)
 *     UsbhPCE_Suspend @ 0x14001E150 (UsbhPCE_Suspend.c)
 *     UsbhEnableDeviceForWake @ 0x1400265EC (UsbhEnableDeviceForWake.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbhSyncSuspendPdoPort(__int64 a1, __int64 a2, char a3)
{
  _DWORD *v6; // rbx
  int v7; // edx
  unsigned int v8; // esi
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  int v12; // eax
  int v13; // [rsp+80h] [rbp+30h] BYREF
  int v14; // [rsp+98h] [rbp+48h] BYREF

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
  v7 = UsbhQueryPortState(*(_QWORD *)(a1 + 8), *((unsigned __int16 *)v6 + 714), (__int64)&v14, &v13);
  if ( v7 >= 0 && (v14 & 1) != 0 )
  {
    if ( (v6[355] & 0x100) != 0 && UsbhPdoArmedForWake(a2) && !a3 && (v6[355] & 4) == 0 )
    {
      v12 = UsbhEnableDeviceForWake(*(_QWORD *)(a1 + 8), a2, &v13);
      if ( (v12 & 0xC0000000) == 0xC0000000 )
        UsbhException(
          *(_QWORD *)(a1 + 8),
          *((unsigned __int16 *)v6 + 714),
          50LL,
          0LL,
          0,
          v12,
          v13,
          usbfile_pdopwr_c,
          1404,
          0);
    }
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( dword_14006F5B0 )
    {
      v10 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v10 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v10 + 554))(*((_QWORD *)v10 + 529), 0LL, 3LL, &v13);
    }
    v8 = UsbhPCE_Suspend(*(_QWORD *)(a1 + 8), a1, *((_WORD *)v6 + 714));
    v13 = *((unsigned __int16 *)v6 + 714);
    if ( dword_14006F5B0 )
    {
      v11 = FdoExt(*(_QWORD *)(a1 + 8));
      if ( *((_QWORD *)v11 + 554) )
        (*((void (__fastcall **)(_QWORD, _QWORD, __int64, int *))v11 + 554))(*((_QWORD *)v11 + 529), 0LL, 4LL, &v13);
    }
  }
  else
  {
    UsbhException(
      *(_QWORD *)(a1 + 8),
      *((unsigned __int16 *)v6 + 714),
      118LL,
      0LL,
      0,
      v7,
      v13,
      usbfile_pdopwr_c,
      1420,
      0);
    return (unsigned int)-1073741823;
  }
  return v8;
}
