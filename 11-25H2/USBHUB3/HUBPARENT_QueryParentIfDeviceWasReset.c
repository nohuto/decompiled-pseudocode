/*
 * XREFs of HUBPARENT_QueryParentIfDeviceWasReset @ 0x140007A18
 * Callers:
 *     HUBHSM_CheckingIfResetByParent @ 0x140008B20 (HUBHSM_CheckingIfResetByParent.c)
 * Callees:
 *     HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs @ 0x140011438 (HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs.c)
 *     FWUPDATE_ReenumerateFirmwareUpdateDevice @ 0x140041BC8 (FWUPDATE_ReenumerateFirmwareUpdateDevice.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBPARENT_QueryParentIfDeviceWasReset(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int128 v5; // [rsp+20h] [rbp-98h]
  __int128 v6; // [rsp+60h] [rbp-58h]

  v5 = *(_OWORD *)(a1 + 208);
  v6 = *(_OWORD *)(a1 + 272);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(a1 + 264))(*((_QWORD *)&v5 + 1)) )
  {
    v2 = 2057;
    if ( ((unsigned __int8 (__fastcall *)(_QWORD))v6)(*((_QWORD *)&v5 + 1)) )
    {
      HUBMUX_PropogateDeviceProgrammingLostFlagsToAllDSMs(a1);
      v3 = *(_QWORD *)(a1 + 2664);
      if ( v3 )
        *(_BYTE *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                     WdfDriverGlobals,
                     v3,
                     off_14006C170)
                 + 24) = 1;
      FWUPDATE_ReenumerateFirmwareUpdateDevice(a1);
    }
  }
  else
  {
    return 2041;
  }
  return v2;
}
