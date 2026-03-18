/*
 * XREFs of HUBFDO_IoctlValidateParameters @ 0x14007FBD4
 * Callers:
 *     HUBFDO_IoctlGetNodeConnectionInfo @ 0x14000E440 (HUBFDO_IoctlGetNodeConnectionInfo.c)
 *     HUBFDO_IoctlCyclePort @ 0x14007C9FC (HUBFDO_IoctlCyclePort.c)
 *     HUBFDO_IoctlGetDescriptorFromNodeConnection @ 0x14007CEB8 (HUBFDO_IoctlGetDescriptorFromNodeConnection.c)
 *     HUBFDO_IoctlGetHubCaps @ 0x14007D494 (HUBFDO_IoctlGetHubCaps.c)
 *     HUBFDO_IoctlGetHubCapsEx @ 0x14007D66C (HUBFDO_IoctlGetHubCapsEx.c)
 *     HUBFDO_IoctlGetHubInformationEx @ 0x14007D8A4 (HUBFDO_IoctlGetHubInformationEx.c)
 *     HUBFDO_IoctlGetNodeConnectionAttributes @ 0x14007DB58 (HUBFDO_IoctlGetNodeConnectionAttributes.c)
 *     HUBFDO_IoctlGetNodeConnectionDriverKeyName @ 0x14007DD94 (HUBFDO_IoctlGetNodeConnectionDriverKeyName.c)
 *     HUBFDO_IoctlGetNodeConnectionInformationExV2 @ 0x14007E100 (HUBFDO_IoctlGetNodeConnectionInformationExV2.c)
 *     HUBFDO_IoctlGetNodeConnectionName @ 0x14007E524 (HUBFDO_IoctlGetNodeConnectionName.c)
 *     HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation @ 0x14007E900 (HUBFDO_IoctlGetNodeConnectionSuperSpeedPlusInformation.c)
 *     HUBFDO_IoctlGetNodeInformation @ 0x14007EDCC (HUBFDO_IoctlGetNodeInformation.c)
 *     HUBFDO_IoctlGetPortConnectorProperties @ 0x14007EFB4 (HUBFDO_IoctlGetPortConnectorProperties.c)
 *     HUBFDO_IoctlGetPortStatus @ 0x14007F384 (HUBFDO_IoctlGetPortStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x14000698C (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall HUBFDO_IoctlValidateParameters(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _DWORD *a4,
        unsigned __int64 a5,
        unsigned __int64 a6)
{
  unsigned int v6; // r10d
  int v7; // r9d

  v6 = 0;
  if ( (*(_DWORD *)(a1 + 40) & 0x40) == 0 )
    return (unsigned int)-1073741823;
  if ( a3 < a2 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 58;
LABEL_15:
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), a2, 3, v7, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
      return (unsigned int)-1073741811;
    }
    return (unsigned int)-1073741811;
  }
  if ( a6 >= a5 )
  {
    if ( a2 >= 4 )
    {
      LODWORD(a2) = *a4;
      if ( !*a4 || (unsigned int)a2 > *(unsigned __int16 *)(a1 + 48) )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v7 = 60;
          goto LABEL_15;
        }
        return (unsigned int)-1073741811;
      }
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_(*(_QWORD *)(a1 + 2528), a2, 3, 59, (__int64)&WPP_15d974077bc73d0eebd93ea2bffbd60f_Traceguids);
    }
    return (unsigned int)-1073741789;
  }
  return v6;
}
