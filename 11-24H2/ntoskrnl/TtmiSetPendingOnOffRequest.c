/*
 * XREFs of TtmiSetPendingOnOffRequest @ 0x14076FE14
 * Callers:
 *     TtmiSetDisplayPowerRequest @ 0x14076A01C (TtmiSetDisplayPowerRequest.c)
 *     TtmpDispatchSetDisplayState @ 0x14076BA5C (TtmpDispatchSetDisplayState.c)
 *     TtmiResetTerminalTimeouts @ 0x14076FB30 (TtmiResetTerminalTimeouts.c)
 *     TtmiTerminalMonitorControl @ 0x14076FEC8 (TtmiTerminalMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x140769F24 (TtmiScheduleSessionWorker.c)
 *     TtmiLogProximityBlockedRequest @ 0x14076D470 (TtmiLogProximityBlockedRequest.c)
 *     TtmiLogTerminalOffRequest @ 0x14076EDCC (TtmiLogTerminalOffRequest.c)
 *     TtmiLogTerminalOnRequest @ 0x14076EEE4 (TtmiLogTerminalOnRequest.c)
 *     TtmpExitProximity @ 0x1407701D8 (TtmpExitProximity.c)
 *     TtmpShouldEscapeProximity @ 0x140770394 (TtmpShouldEscapeProximity.c)
 */

void __fastcall TtmiSetPendingOnOffRequest(__int64 a1, _DWORD *a2, char a3, int a4, int a5)
{
  __int64 v9; // r8
  int v10; // ecx

  if ( (a2[9] & 8) != 0 )
  {
    if ( !a3 || a4 != 1 || !(unsigned __int8)TtmpShouldEscapeProximity(a2) )
    {
      TtmiLogProximityBlockedRequest(a3, a4, a5);
      return;
    }
    LOBYTE(v9) = a4;
    TtmpExitProximity(a1, a2, v9);
  }
  v10 = a2[7];
  if ( a3 )
    TtmiLogTerminalOnRequest(v10, a4, a5);
  else
    TtmiLogTerminalOffRequest(v10, a4, a5);
  a2[14] = a4;
  a2[9] |= 4u;
  a2[13] = 2 - (a3 != 0);
  TtmiScheduleSessionWorker(a1, 2);
}
