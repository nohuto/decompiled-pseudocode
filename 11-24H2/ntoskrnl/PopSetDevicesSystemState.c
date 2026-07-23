/*
 * XREFs of PopSetDevicesSystemState @ 0x140B66D04
 * Callers:
 *     PopGracefulShutdown @ 0x140B5DAF8 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B6891C (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PoBroadcastSystemState @ 0x140B66DA4 (PoBroadcastSystemState.c)
 */

__int64 PopSetDevicesSystemState()
{
  int v0; // eax
  _DWORD v2[6]; // [rsp+20h] [rbp-38h] BYREF
  char v3; // [rsp+38h] [rbp-20h]
  char v4; // [rsp+39h] [rbp-1Fh]
  char v5; // [rsp+3Ah] [rbp-1Eh]
  char v6; // [rsp+3Bh] [rbp-1Dh]

  v4 = byte_140F0B9A9;
  v3 = byte_140F0B982;
  v5 = byte_140F0B9A8;
  v2[0] = dword_140F0B9B8;
  v2[1] = dword_140F0B9B4;
  v0 = dword_140F0B9AC;
  if ( (dword_140F0B98C & 8) != 0 )
    v0 = 6;
  v2[5] = dword_140F0B98C;
  v2[2] = v0;
  v2[3] = dword_140F0B9B0;
  v2[4] = dword_140F0B984;
  v6 = 0;
  return PoBroadcastSystemState(v2);
}
