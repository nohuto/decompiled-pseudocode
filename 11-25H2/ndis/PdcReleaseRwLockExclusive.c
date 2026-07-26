/*
 * XREFs of PdcReleaseRwLockExclusive @ 0x1401595A4
 * Callers:
 *     PdcTaskClientRequest @ 0x1401593C4 (PdcTaskClientRequest.c)
 *     PdcTaskClientUnregister @ 0x140159494 (PdcTaskClientUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcReleaseRwLockExclusive(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
