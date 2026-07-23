/*
 * XREFs of TtmiAcquireCurrentSession @ 0x140769FD0
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1407684B0 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1407687B0 (TtmNotifyDeviceDeparture.c)
 *     TtmNotifyDeviceInput @ 0x140768870 (TtmNotifyDeviceInput.c)
 *     TtmiSessionsRundown @ 0x14076A17C (TtmiSessionsRundown.c)
 *     TtmpDispatchOpenTerminal @ 0x14076BA78 (TtmpDispatchOpenTerminal.c)
 * Callees:
 *     PsGetSessionIdEx @ 0x14030CBE0 (PsGetSessionIdEx.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x14099E1A4 (TtmpAcquireSessionById.c)
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
