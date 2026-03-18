/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140769DB0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x140768290 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x140768590 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140768650 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x140769F5C (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x14076B858 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x1403025D0 (PsGetSessionIdEx.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 */

__int64 __fastcall TtmiAcquireCurrentSession(__int64 a1)
{
  unsigned int SessionId; // eax
  unsigned int v3; // ebx

  SessionId = PsGetSessionIdEx((__int64)KeGetCurrentThread()->ApcState.Process);
  if ( SessionId == -1 )
  {
    v3 = -1073740715;
    TtmiLogError("TtmiAcquireCurrentSession", 1758LL, 0xFFFFFFFFLL, 3221226581LL);
  }
  else
  {
    return (unsigned int)TtmpAcquireSessionById(a1, SessionId);
  }
  return v3;
}
