/*
 * XREFs of UsbhFdoDeviceControl @ 0x140009180
 * Callers:
 *     <none>
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     Usbh_SSH_Event @ 0x14000A9E0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhIoctlGetNodeConnectionInfoExApi @ 0x14000E640 (UsbhIoctlGetNodeConnectionInfoExApi.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x140010050 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1400213E0 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x140021A20 (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1400232C8 (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetHubCaps @ 0x140023CE4 (UsbhIoctlGetHubCaps.c)
 *     UsbhFdoChainIrp @ 0x14003A7EC (UsbhFdoChainIrp.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     UsbhIoctlCyclePort @ 0x14004C4B0 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetHubCapsEx @ 0x14004C7CC (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x14004CA94 (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x14004CD78 (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004D008 (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x14004D38C (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x14004D424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x14004D718 (UsbhIoctlResetStuckHub.c)
 */

__int64 __fastcall UsbhFdoDeviceControl(__int64 a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int LowPart; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1869169734;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = (LowPart >> 2) & 0xFFF;
        *(_QWORD *)(v7 + 24) = a2;
      }
    }
  }
  if ( KeGetCurrentIrql() )
  {
    UsbhException(a1, 0, 93, 0, 0, -1073741811, (LowPart >> 2) & 0xFFF, (__int64)usbfile_hub_c, 1431, 0);
    a2->IoStatus.Status = -1073741811;
    IofCompleteRequest(a2, 0);
    return 3221225485LL;
  }
  else
  {
    v11 = FdoExt(a1, v8, v9, v10);
    Usbh_SSH_Event(a1, 6LL, v11 + 1736);
    switch ( LowPart )
    {
      case 0x220448u:
        if ( (UsbhLogMask & 0x20) != 0 )
        {
          if ( a1 )
          {
            v13 = *(_QWORD *)(a1 + 64);
            if ( v13 )
            {
              v14 = *(_QWORD *)(v13 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
              *(_DWORD *)v14 = 943615849;
              *(_QWORD *)(v14 + 8) = 0LL;
              *(_QWORD *)(v14 + 16) = a2;
              *(_QWORD *)(v14 + 24) = 0LL;
            }
          }
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            2,
            47,
            (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
        return UsbhIoctlGetNodeConnectionInfoExApi(a1, (_DWORD)a2);
      case 0x220410u:
        return UsbhIoctlGetDescriptorFromNodeConnection(a1, (_DWORD)a2);
      case 0x220408u:
        return UsbhIoctlGetNodeInformation(a1, a2, CurrentStackLocation);
      case 0x220414u:
        return UsbhIoctlGetNodeConnectionName(a1, a2, CurrentStackLocation);
      default:
        if ( LowPart > 0x2F0003 )
        {
          return UsbhFdoChainIrp(a1, a2);
        }
        else if ( LowPart == 3080195 )
        {
          a2->IoStatus.Status = -1073741808;
          IofCompleteRequest(a2, 0);
          return 3221225488LL;
        }
        else
        {
          switch ( LowPart )
          {
            case 0x22040Cu:
              result = UsbhIoctlGetNodeConnectionInfo(a1, a2, CurrentStackLocation);
              break;
            case 0x220420u:
              result = UsbhIoctlGetNodeConnectionDriverKeyName(a1, a2, CurrentStackLocation);
              break;
            case 0x22043Cu:
              result = UsbhIoctlGetHubCaps(a1, a2, CurrentStackLocation);
              break;
            case 0x220440u:
              result = UsbhIoctlGetNodeConnectionAttributes(a1, a2, CurrentStackLocation);
              break;
            case 0x220444u:
              result = UsbhIoctlCyclePort(a1, a2, CurrentStackLocation);
              break;
            case 0x22044Cu:
              result = UsbhIoctlResetStuckHub(a1, a2);
              break;
            case 0x220450u:
              result = UsbhIoctlGetHubCapsEx(a1, a2, CurrentStackLocation);
              break;
            case 0x220454u:
              result = UsbhIoctlGetHubInformationEx(a1, a2, CurrentStackLocation);
              break;
            case 0x220458u:
              result = UsbhIoctlGetPortConnectorProperties(a1, a2, CurrentStackLocation);
              break;
            case 0x22045Cu:
              result = UsbhIoctlGetNodeConnectionInfoExV2(a1, a2, CurrentStackLocation);
              break;
            default:
              return UsbhFdoChainIrp(a1, a2);
          }
        }
        break;
    }
  }
  return result;
}
