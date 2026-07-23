/*
 * XREFs of TtmiTerminalMonitorControl @ 0x1407700E8
 * Callers:
 *     TtmSessionMonitorControl @ 0x14099DE24 (TtmSessionMonitorControl.c)
 * Callees:
 *     TtmiScheduleSessionWorker @ 0x14076A144 (TtmiScheduleSessionWorker.c)
 *     TtmiLogEnterProximity @ 0x14076D148 (TtmiLogEnterProximity.c)
 *     TtmiSetPendingOnOffRequest @ 0x140770034 (TtmiSetPendingOnOffRequest.c)
 *     TtmpExitProximity @ 0x1407703F8 (TtmpExitProximity.c)
 *     TtmiLogError @ 0x14099E04C (TtmiLogError.c)
 */

__int64 __fastcall TtmiTerminalMonitorControl(__int64 a1, __int64 a2, int a3, int a4)
{
  char v6; // r8
  unsigned int v8; // edi
  int v9; // r9d
  int v11; // eax
  int v12; // ecx

  v6 = 0;
  v8 = 0;
  if ( a4 )
  {
    v9 = a4 - 1;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v8 = -1073741811;
        TtmiLogError("TtmiTerminalMonitorControl", 1498LL, 0xFFFFFFFFLL, 3221225485LL);
        return v8;
      }
      if ( (unsigned int)(*(_DWORD *)(a2 + 276) - 2) <= 1 )
        return 255;
    }
    else if ( a3 == 22 )
    {
      TtmpExitProximity(a1, a2, 0LL);
      return v8;
    }
    v6 = 1;
LABEL_7:
    TtmiSetPendingOnOffRequest(a1, (_DWORD *)a2, v6, a3, 1129145683);
    return v8;
  }
  if ( a3 != 22 )
    goto LABEL_7;
  v11 = *(_DWORD *)(a2 + 36);
  if ( (v11 & 8) == 0 )
  {
    v12 = ++*(_DWORD *)(a2 + 268);
    *(_QWORD *)(a2 + 256) = -1LL;
    *(_DWORD *)(a2 + 36) = v11 | 8;
    TtmiLogEnterProximity(v12);
    *(_DWORD *)(a2 + 36) |= 4u;
    TtmiScheduleSessionWorker(a1, 2);
  }
  return v8;
}
