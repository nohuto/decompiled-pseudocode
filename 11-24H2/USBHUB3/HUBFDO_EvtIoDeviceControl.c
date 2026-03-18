/*
 * XREFs of HUBFDO_EvtIoDeviceControl @ 0x14007B820
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 *     Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline @ 0x14000C95C (Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline.c)
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E490 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     __security_check_cookie @ 0x140046500 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140046540 (_guard_dispatch_icall.c)
 *     HUBFDO_IoctlCyclePort @ 0x14007BB30 (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007BFEC (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007C5C8 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007C7A0 (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007C9D8 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007CC8C (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007CEC8 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007D234 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007D658 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007DA34 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007DF00 (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007E0E8 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007E4B8 (HUBFDO_IoctlGetPortStatus.c)
 *     HUBFDO_IoctlResetHub @ 0x14007E690 (HUBFDO_IoctlResetHub.c)
 *     HUBFDO_IoctlTestPortPLDRRecovery @ 0x14007E818 (HUBFDO_IoctlTestPortPLDRRecovery.c)
 */

__int64 __fastcall HUBFDO_EvtIoDeviceControl(__int64 a1, __int64 a2, size_t a3, __int64 a4, unsigned int a5)
{
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  v14 = 0LL;
  if ( a5 <= 0x220448 )
  {
    switch ( a5 )
    {
      case 0x220448u:
        return HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 1);
      case 0x220010u:
        return HUBFDO_IoctlGetPortStatus(a1);
      case 0x220408u:
        return HUBFDO_IoctlGetNodeInformation(a1);
      case 0x22040Cu:
        return HUBFDO_IoctlGetNodeConnectionInfo(a1, a2, a3, a4, 0);
      case 0x220410u:
        return HUBFDO_IoctlGetDescriptorFromNodeConnection(a1);
      case 0x220414u:
        return HUBFDO_IoctlGetNodeConnectionName(a1);
      case 0x220420u:
        return HUBFDO_IoctlGetNodeConnectionDriverKeyName(a1);
      case 0x22043Cu:
        return HUBFDO_IoctlGetHubCaps(a1);
      case 0x220440u:
        return HUBFDO_IoctlGetNodeConnectionAttributes(a1);
      case 0x220444u:
        return HUBFDO_IoctlCyclePort(a1);
    }
    goto LABEL_38;
  }
  switch ( a5 )
  {
    case 0x22044Cu:
      return HUBFDO_IoctlResetHub(a1);
    case 0x220450u:
      return HUBFDO_IoctlGetHubCapsEx(a1);
    case 0x220454u:
      return HUBFDO_IoctlGetHubInformationEx(a1);
    case 0x220458u:
      return HUBFDO_IoctlGetPortConnectorProperties(a1);
    case 0x22045Cu:
      return HUBFDO_IoctlGetNodeConnectionInformationExV2(a1);
  }
  if ( a5 != 2229376 )
  {
    if ( a5 == 2229380 )
      return HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation(a1);
    if ( a5 == 2232320 )
      return HUBFDO_IoctlTestPortPLDRRecovery(a1, a2, a4);
    goto LABEL_38;
  }
  if ( !(unsigned int)Feature_U3RHDC__private_IsEnabledDeviceUsageNoInline()
    || (v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1),
        v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
               WdfDriverGlobals,
               v8,
               off_14006C198),
        *(_BYTE *)(v9 + 240)) )
  {
LABEL_38:
    v14 = 0x800000010uLL;
    v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
    v12 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 336))(WdfDriverGlobals, v11);
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int128 *))(WdfFunctions_01015 + 2024))(
               WdfDriverGlobals,
               a2,
               v12,
               &v14);
    if ( !(_BYTE)result )
    {
      v13 = (*(unsigned int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2032))(
              WdfDriverGlobals,
              a2);
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               a2,
               v13);
    }
    return result;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v10) = 3;
    WPP_RECORDER_SF_(*(_QWORD *)(v9 + 2536), v10, 3, 89, (__int64)&WPP_ca13ed422d4834673d018685416879c0_Traceguids);
  }
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           a2,
           3221225659LL);
}
