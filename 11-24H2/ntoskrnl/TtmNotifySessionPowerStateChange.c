/*
 * XREFs of TtmNotifySessionPowerStateChange @ 0x140902FF4
 * Callers:
 *     PopPowerInformationInternal @ 0x140AC4A30 (PopPowerInformationInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmiScheduleSessionWorker @ 0x140769F24 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionPowerStateChange @ 0x14076E33C (TtmiLogSessionPowerStateChange.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 *     TtmpAcquireSessionById @ 0x140903BF4 (TtmpAcquireSessionById.c)
 */

void __fastcall TtmNotifySessionPowerStateChange(unsigned int a1, char a2)
{
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0LL;
  v3 = TtmpAcquireSessionById(&v7, a1);
  if ( v3 < 0 )
  {
    TtmiLogError("TtmNotifySessionPowerStateChange", 3174LL, (unsigned int)v3, 0xFFFFFFFFLL);
    return;
  }
  TtmiLogSessionPowerStateChange(a2);
  v4 = v7;
  v5 = *(_DWORD *)(v7 + 4);
  if ( a2 )
  {
    if ( (v5 & 0x80u) != 0 )
    {
      v6 = v5 & 0xFFFFFB7F;
      goto LABEL_8;
    }
  }
  else if ( (v5 & 0x40) != 0 )
  {
    v6 = v5 & 0xFFFFFBBF | 0x400;
LABEL_8:
    *(_DWORD *)(v7 + 4) = v6;
    TtmiScheduleSessionWorker(v4, 4);
  }
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
}
