/*
 * XREFs of UsbDevice_UcxEvtEnable @ 0x14002EFF0
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_Disable @ 0x140002DBC (Endpoint_Disable.c)
 *     Endpoint_Enable @ 0x140004F50 (Endpoint_Enable.c)
 *     Command_SendCommand @ 0x14000BCD4 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x14000BE64 (Controller_IsControllerAccessible.c)
 *     WPP_RECORDER_SF_d @ 0x14001A7FC (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x140056D8C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     __security_check_cookie @ 0x140058AC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140058B00 (_guard_dispatch_icall.c)
 *     memset @ 0x140058EC0 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtEnable(__int64 a1, __int64 a2)
{
  __int16 v3; // ax
  __int64 v4; // rdi
  __int64 v5; // rbp
  int v6; // edx
  int v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // eax
  _OWORD v11[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v12; // [rsp+50h] [rbp-18h]

  memset(v11, 0, sizeof(v11));
  v12 = 0LL;
  if ( WdfClientVersionHigherThanFramework )
  {
    if ( (unsigned int)WdfStructureCount > 0x33 )
    {
      LOWORD(v11[0]) = *(_WORD *)(WdfStructures + 408);
      goto LABEL_7;
    }
    v3 = -1;
  }
  else
  {
    v3 = 40;
  }
  LOWORD(v11[0]) = v3;
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01033 + 2128))(
    WdfDriverGlobals,
    a2,
    v11);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01033 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v11[0] + 1) + 16LL),
         off_14006B128);
  v5 = *(_QWORD *)(*(_QWORD *)(v4 + 8) + 144LL);
  if ( *(_BYTE *)(v4 + 142) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Slot already enabled");
  if ( *(_BYTE *)(v4 + 143) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Slot ID was expected to be 0");
  v7 = Endpoint_Enable(*(_QWORD *)(v4 + 184));
  if ( v7 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v4 + 8) + 72LL),
        v6,
        12,
        14,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v7);
    }
    goto LABEL_16;
  }
  if ( !Controller_IsControllerAccessible(*(_QWORD *)(v4 + 8)) )
  {
    LOBYTE(v8) = 1;
    v7 = -1073741810;
    Endpoint_Disable(*(_QWORD *)(v4 + 184), v8);
LABEL_16:
    *(_QWORD *)(v4 + 432) = 0LL;
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01033 + 2104))(
             WdfDriverGlobals,
             a2,
             (unsigned int)v7);
  }
  *(_QWORD *)(v4 + 432) = a2;
  *(_BYTE *)(v4 + 440) = 0;
  memset((void *)(v4 + 464), 0, 0x60uLL);
  *(_QWORD *)(v4 + 536) = 0LL;
  *(_DWORD *)(v4 + 544) = 0;
  *(_DWORD *)(v4 + 548) = 0;
  *(_QWORD *)(v4 + 552) = 0LL;
  *(_QWORD *)(v4 + 504) = UsbDevice_EnableCompletion;
  v10 = *(_DWORD *)(v4 + 500) & 0xFFFF27FF;
  *(_QWORD *)(v4 + 512) = v4;
  *(_DWORD *)(v4 + 500) = v10 | 0x2400;
  return Command_SendCommand(v5, v4 + 464);
}
