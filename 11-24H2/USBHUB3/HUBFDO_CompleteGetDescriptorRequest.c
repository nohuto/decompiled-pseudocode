/*
 * XREFs of HUBFDO_CompleteGetDescriptorRequest @ 0x14000CE00
 * Callers:
 *     HUBSM_FindAndSetTargetState @ 0x14000B6C0 (HUBSM_FindAndSetTargetState.c)
 *     HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb @ 0x14002B5DC (HUBDTX_GetDescriptorForFdoRequestUsingPreformattedUrb.c)
 *     HUBDTX_GetDeviceDescriptorComplete @ 0x14002B720 (HUBDTX_GetDeviceDescriptorComplete.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007BFEC (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq_EtwWriteTransfer @ 0x14000F63C (McTemplateK0pqq_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBFDO_CompleteGetDescriptorRequest(__int64 a1, char a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 v9; // rcx
  int v10; // eax
  __int128 *v11; // r8
  __int128 v13; // [rsp+30h] [rbp-48h] BYREF

  v13 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      *(_QWORD *)(a1 + 2536),
      4u,
      3u,
      0x47u,
      (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids,
      a4,
      v13);
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
  {
    v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2280))(WdfDriverGlobals, a3);
    v10 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(__int64, __int128 *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(v9, &v13)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) != 0 )
    {
      v11 = &v13;
      if ( v10 < 0 )
        LODWORD(v11) = 0;
      McTemplateK0pqq_EtwWriteTransfer(
        v9,
        (unsigned int)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_DESCRIPTOR_FROM_NODE_CONNECTION_COMPLETE,
        (_DWORD)v11,
        *(_QWORD *)(a1 + 248),
        a2,
        a4);
    }
  }
  if ( a4 >= 0 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, __int64))(WdfFunctions_01015 + 2120))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4,
             a5 + 12LL);
  else
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
             WdfDriverGlobals,
             a3,
             (unsigned int)a4);
}
