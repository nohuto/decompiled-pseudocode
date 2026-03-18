/*
 * XREFs of TtmpSessionPowerControl @ 0x14076AC6C
 * Callers:
 *     TtmpActivateSessionWorker @ 0x14076A42C (TtmpActivateSessionWorker.c)
 *     TtmpSessionWorker @ 0x14076AD00 (TtmpSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionLock @ 0x1406F73C8 (TtmpAcquireSessionLock.c)
 *     PoSessionPowerControl @ 0x14075F9BC (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x14076DED0 (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x14076DFC4 (TtmiLogSessionPowerControlStop.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, char a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  __int64 v7; // rcx

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  LOBYTE(v7) = a2;
  PoSessionPowerControl(v7, a3, v3);
  TtmpAcquireSessionLock();
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
