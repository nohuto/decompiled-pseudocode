/*
 * XREFs of HUBDSM_AddingDeviceToGlobalChildList @ 0x14001FAD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x140030D30 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     HUBMISC_TypeCCompanionHasIdenticalDeviceAttached @ 0x140033924 (HUBMISC_TypeCCompanionHasIdenticalDeviceAttached.c)
 *     _guard_dispatch_icall @ 0x140045D00 (_guard_dispatch_icall.c)
 *     HUBCONNECTOR_GetConnectorMapNodeForPort @ 0x140085E44 (HUBCONNECTOR_GetConnectorMapNodeForPort.c)
 */

__int64 __fastcall HUBDSM_AddingDeviceToGlobalChildList(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 ConnectorMapNodeForPort; // rax
  int v5; // eax
  int v6; // eax
  int v7; // edx
  __int16 v8; // [rsp+20h] [rbp-28h]
  __int16 v9; // [rsp+28h] [rbp-20h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = *(_QWORD *)(v1 + 8);
  if ( !*(_QWORD *)(v1 + 2152) )
  {
    if ( (*(_DWORD *)(v2 + 204) & 0x200) != 0 )
    {
      if ( (unsigned __int8)HUBMISC_TypeCCompanionHasIdenticalDeviceAttached(v1) )
        return 4073LL;
      _InterlockedOr((volatile signed __int32 *)(v2 + 1336), 0x40u);
    }
    return 4077LL;
  }
  ConnectorMapNodeForPort = HUBCONNECTOR_GetConnectorMapNodeForPort(*(_QWORD *)(v1 + 8));
  v9 = *(_WORD *)(v1 + 1998);
  v8 = *(_WORD *)(v1 + 1996);
  v5 = USBD_AddDeviceToGlobalList(
         v1,
         *(_QWORD *)v1,
         *(unsigned __int16 *)(*(_QWORD *)(v1 + 8) + 200LL),
         ConnectorMapNodeForPort,
         v8,
         v9,
         v1 + 2144)
     - 1;
  if ( !v5 )
    return 4077LL;
  v6 = v5 - 1;
  if ( !v6 )
    return 4073LL;
  if ( v6 == 1 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_14006C1E8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        v7,
        5,
        37,
        (__int64)&WPP_a8f221bb5af334040897444f02cc5603_Traceguids);
    }
    HUBMISC_LogDescriptorValidationErrorForDevice(v1, 234LL);
  }
  return 4065LL;
}
