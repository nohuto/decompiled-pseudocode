/*
 * XREFs of WmiLogEvent @ 0x140006D2C
 * Callers:
 *     WmiLogStreamStateChange @ 0x140006CF0 (WmiLogStreamStateChange.c)
 *     WmiLogPowerStateChange @ 0x14000B6C4 (WmiLogPowerStateChange.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WmiLogEvent(__int64 a1, unsigned __int8 a2, __int128 *a3, int a4, int a5, int a6, int a7)
{
  __int128 v7; // xmm1
  NTSTATUS result; // eax
  _DWORD v9[8]; // [rsp+20h] [rbp-39h] BYREF
  _WORD WnodeEventItem[2]; // [rsp+40h] [rbp-19h] BYREF
  __int128 v11; // [rsp+44h] [rbp-15h]
  _BYTE v12[40]; // [rsp+54h] [rbp-5h] BYREF
  int v13; // [rsp+7Ch] [rbp+23h]

  v7 = *a3;
  v13 = 0;
  result = -1073741823;
  WnodeEventItem[1] = 0;
  v11 = 0LL;
  memset(v12, 0, sizeof(v12));
  if ( ExBusWmiLogEnable && ExBusWmiLoggerHandle && (unsigned int)ExBusWmiLogLevel >= 4 )
  {
    v9[0] = a2;
    v9[2] = a5;
    v9[3] = a6;
    v9[4] = a7;
    *(_QWORD *)&v12[28] = v9;
    *(_QWORD *)((char *)&v11 + 4) = ExBusWmiLoggerHandle;
    WnodeEventItem[0] = 64;
    v9[1] = a4;
    v9[5] = 0;
    *(_DWORD *)&v12[36] = 24;
    *(_DWORD *)&v12[24] = 1179648;
    LOBYTE(v11) = a2;
    BYTE1(v11) = 4;
    *(_OWORD *)&v12[4] = v7;
    return IoWMIWriteEvent(WnodeEventItem);
  }
  return result;
}
