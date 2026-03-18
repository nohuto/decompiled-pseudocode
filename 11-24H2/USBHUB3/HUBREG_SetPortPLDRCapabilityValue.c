/*
 * XREFs of HUBREG_SetPortPLDRCapabilityValue @ 0x14008B1E8
 * Callers:
 *     HUBPDO_RegisterPortPLDRCapability @ 0x140083D50 (HUBPDO_RegisterPortPLDRCapability.c)
 *     HUBPDO_UnregisterPortPLDRCapability @ 0x140084550 (HUBPDO_UnregisterPortPLDRCapability.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E8 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBREG_OpenPortSubkey @ 0x140087A40 (HUBREG_OpenPortSubkey.c)
 */

__int64 __fastcall HUBREG_SetPortPLDRCapabilityValue(__int64 a1, unsigned __int16 a2, int a3)
{
  int v4; // ebx
  int *v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+60h] [rbp+18h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  v7 = a3;
  v8 = 0LL;
  v4 = HUBREG_OpenPortSubkey(a1, a2, 0x2001Fu, &v8);
  if ( v4 >= 0 )
  {
    v6 = &v7;
    v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1928))(
           WdfDriverGlobals,
           v8,
           &g_PortPLDRCapabilityValueName);
    if ( v4 >= 0 )
    {
      v4 = 0;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v6) = v4;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2536),
        2u,
        5u,
        0xA2u,
        (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
        v6);
    }
  }
  if ( v8 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1848))(WdfDriverGlobals, v8);
  return (unsigned int)v4;
}
