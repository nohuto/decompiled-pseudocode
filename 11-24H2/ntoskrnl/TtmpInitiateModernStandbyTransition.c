/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x14076A7B8
 * Callers:
 *     TtmpActivateSessionWorker @ 0x14076A42C (TtmpActivateSessionWorker.c)
 *     TtmpSessionWorker @ 0x14076AD00 (TtmpSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406F73C8 (TtmpAcquireSessionLock.c)
 *     PoTtmInitiatePowerStateTransition @ 0x14075D348 (PoTtmInitiatePowerStateTransition.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x14076D2AC (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x14076D3A0 (TtmiLogInitiateModernStandbyTransitionStop.c)
 */

__int64 __fastcall TtmpInitiateModernStandbyTransition(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  TtmiLogInitiateModernStandbyTransitionStart(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  v6 = PoTtmInitiatePowerStateTransition(a2, a3);
  TtmpAcquireSessionLock();
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  TtmiLogInitiateModernStandbyTransitionStop(v6);
  return v6;
}
