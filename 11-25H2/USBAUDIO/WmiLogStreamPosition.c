/*
 * XREFs of WmiLogStreamPosition @ 0x140003940
 * Callers:
 *     PropertyGetAudioPositionEx @ 0x14003AC90 (PropertyGetAudioPositionEx.c)
 *     PropertyGetAudioPosition @ 0x14003CAB0 (PropertyGetAudioPosition.c)
 * Callees:
 *     __security_check_cookie @ 0x14001C640 (__security_check_cookie.c)
 */

NTSTATUS __fastcall WmiLogStreamPosition(_QWORD *a1, int a2)
{
  _WORD WnodeEventItem[2]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v4; // [rsp+24h] [rbp-74h]
  _BYTE v5[40]; // [rsp+34h] [rbp-64h] BYREF
  int v6; // [rsp+5Ch] [rbp-3Ch]
  _DWORD v7[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v8; // [rsp+68h] [rbp-30h]
  __int64 v9; // [rsp+70h] [rbp-28h]
  __int64 v10; // [rsp+78h] [rbp-20h]
  __int64 v11; // [rsp+80h] [rbp-18h]

  WnodeEventItem[1] = 0;
  v4 = 0LL;
  memset(v5, 0, sizeof(v5));
  v6 = 0;
  if ( !ExBusWmiLogEnable || !ExBusWmiLoggerHandle || (unsigned int)ExBusWmiLogLevel < 5 )
    return -1073741823;
  v8 = a1[2];
  v9 = a1[3];
  v10 = a1[1];
  v11 = a1[4];
  *(_QWORD *)&v5[28] = v7;
  WnodeEventItem[0] = 64;
  v7[0] = 48;
  v7[1] = a2;
  *(_DWORD *)&v5[36] = 40;
  *(_DWORD *)&v5[24] = 1179648;
  LOWORD(v4) = 1328;
  *(_OWORD *)&v5[4] = ExBus_Position_GUID;
  *(_QWORD *)((char *)&v4 + 4) = ExBusWmiLoggerHandle;
  return IoWMIWriteEvent(WnodeEventItem);
}
