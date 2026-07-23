/*
 * XREFs of TtmDispatchApi @ 0x14099D9B8
 * Callers:
 *     NtPowerInformation @ 0x1409EDB00 (NtPowerInformation.c)
 * Callees:
 *     TtmpDispatchAssignDevice @ 0x14076B630 (TtmpDispatchAssignDevice.c)
 *     TtmpDispatchCreateEventQueue @ 0x14076B6D8 (TtmpDispatchCreateEventQueue.c)
 *     TtmpDispatchCreateTerminal @ 0x14076B818 (TtmpDispatchCreateTerminal.c)
 *     TtmpDispatchEvacuateDevices @ 0x14076B908 (TtmpDispatchEvacuateDevices.c)
 *     TtmpDispatchGetTerminalEvent @ 0x14076B9B4 (TtmpDispatchGetTerminalEvent.c)
 *     TtmpDispatchOpenTerminal @ 0x14076BA78 (TtmpDispatchOpenTerminal.c)
 *     TtmpDispatchSetDefaultDeviceAssignment @ 0x14076BB14 (TtmpDispatchSetDefaultDeviceAssignment.c)
 *     TtmpDispatchSetDisplayPowerRequest @ 0x14076BBD0 (TtmpDispatchSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BC7C (TtmpDispatchSetDisplayState.c)
 *     TtmpDispatchSetDisplayTimeouts @ 0x14076BD30 (TtmpDispatchSetDisplayTimeouts.c)
 *     TtmpDispatchSetInputWakeCapability @ 0x14076BDEC (TtmpDispatchSetInputWakeCapability.c)
 *     TtmiLogDispatchApiStart @ 0x14099DC64 (TtmiLogDispatchApiStart.c)
 *     TtmiLogDispatchApiStop @ 0x14099DD34 (TtmiLogDispatchApiStop.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     TtmIsEnabled @ 0x1409A2438 (TtmIsEnabled.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall TtmDispatchApi(
        int a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        __int64 **a6,
        unsigned int *a7,
        _BYTE *a8)
{
  unsigned int v12; // esi
  __int64 *Pool2; // rbx
  unsigned int v14; // edi
  __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int Terminal; // eax

  TtmiLogDispatchApiStart();
  v12 = 0;
  Pool2 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  *a8 = 0;
  if ( !(unsigned __int8)TtmIsEnabled() )
  {
    v14 = -1073741637;
    v15 = 1057LL;
LABEL_58:
    TtmiLogError("TtmDispatchApi", v15, 0xFFFFFFFFLL, v14);
    goto LABEL_59;
  }
  if ( a1 > 4101 )
  {
    if ( a1 != 4102 && a1 != 4103 && a1 != 4104 && (unsigned int)(a1 - 4105) >= 2 )
      goto LABEL_28;
    goto LABEL_15;
  }
  switch ( a1 )
  {
    case 4101:
LABEL_15:
      v16 = 24;
      goto LABEL_16;
    case 4096:
      v16 = 12;
LABEL_12:
      v12 = 8;
      goto LABEL_16;
    case 4097:
      v12 = 16;
      goto LABEL_15;
  }
  if ( a1 != 4098 )
  {
    if ( a1 != 4099 )
    {
      if ( a1 == 4100 )
      {
        v16 = 16;
        v12 = 544;
        goto LABEL_16;
      }
LABEL_28:
      v14 = -1073741811;
      v15 = 1123LL;
      goto LABEL_58;
    }
    v16 = 16;
    goto LABEL_12;
  }
  v16 = 16;
LABEL_16:
  if ( a3 < v16 || !a4 && v12 || a5 < v12 )
  {
    v14 = -1073741789;
    v15 = 1134LL;
    goto LABEL_58;
  }
  if ( v12 )
  {
    Pool2 = (__int64 *)ExAllocatePool2(0x100uLL, v12, 0x206D654Du);
    if ( !Pool2 )
    {
      v14 = -1073741801;
      v15 = 1149LL;
      goto LABEL_58;
    }
  }
  if ( a1 > 4101 )
  {
    switch ( a1 )
    {
      case 4102:
        Terminal = TtmpDispatchAssignDevice(a2);
        break;
      case 4103:
        Terminal = TtmpDispatchSetDisplayState(a2);
        break;
      case 4104:
        Terminal = TtmpDispatchSetDisplayTimeouts(a2);
        break;
      case 4105:
        Terminal = TtmpDispatchSetDisplayPowerRequest(a2);
        break;
      case 4106:
        Terminal = TtmpDispatchSetInputWakeCapability(a2);
        break;
      default:
        v14 = -1073741811;
        TtmiLogError("TtmDispatchApi", 1218LL, 0xFFFFFFFFLL, 3221225485LL);
        goto LABEL_53;
    }
  }
  else
  {
    switch ( a1 )
    {
      case 4101:
        Terminal = TtmpDispatchSetDefaultDeviceAssignment(a2);
        break;
      case 4096:
        Terminal = TtmpDispatchOpenTerminal(a2, (__int64)Pool2);
        break;
      case 4097:
        Terminal = TtmpDispatchCreateTerminal(a2, (__int64)Pool2);
        break;
      case 4098:
        Terminal = TtmpDispatchEvacuateDevices(a2);
        break;
      case 4099:
        Terminal = TtmpDispatchCreateEventQueue(a2, Pool2);
        break;
      default:
        Terminal = TtmpDispatchGetTerminalEvent(a2, (__int64)Pool2);
        break;
    }
  }
  v14 = Terminal;
LABEL_53:
  if ( Pool2 )
  {
    if ( (v14 & 0x80000000) != 0 )
    {
      ExFreePoolWithTag(Pool2, 0x206D654Du);
    }
    else
    {
      *a6 = Pool2;
      *a7 = v12;
      *a8 = 1;
    }
  }
LABEL_59:
  TtmiLogDispatchApiStop((unsigned int)a1, v14);
  return v14;
}
