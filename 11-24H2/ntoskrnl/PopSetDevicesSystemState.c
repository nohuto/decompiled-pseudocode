/*
 * XREFs of PopSetDevicesSystemState @ 0x140B64BCC
 * Callers:
 *     PopGracefulShutdown @ 0x140B5BA88 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B667DC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x140B64C6C (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140F0B129;
  v3 = byte_140F0B102;
  v5 = byte_140F0B128;
  v2[0] = dword_140F0B138;
  v2[1] = dword_140F0B134;
  v0 = dword_140F0B12C;
  if ( (dword_140F0B10C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140F0B10C;
  v2[2] = v0;
  v2[3] = dword_140F0B130;
  v2[4] = dword_140F0B104;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}
