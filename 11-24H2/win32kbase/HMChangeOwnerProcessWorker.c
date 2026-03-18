/*
 * XREFs of HMChangeOwnerProcessWorker @ 0x1400629E0
 * Callers:
 *     HMChangeOwnerProcess @ 0x1400629C0 (HMChangeOwnerProcess.c)
 * Callees:
 *     HMChangeOwnerPheProcessWorker @ 0x14006233C (HMChangeOwnerPheProcessWorker.c)
 *     _HMPheFromObjectWorker @ 0x140062A10 (_HMPheFromObjectWorker.c)
 */

__int64 __fastcall HMChangeOwnerProcessWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  v3 = HMPheFromObjectWorker();
  return HMChangeOwnerPheProcessWorker(v3, a2);
}
