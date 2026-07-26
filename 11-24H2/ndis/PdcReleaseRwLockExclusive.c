/*
 * XREFs of PdcReleaseRwLockExclusive @ 0x14014E8D4
 * Callers:
 *     PdcTaskClientRequest @ 0x14014E6F4 (PdcTaskClientRequest.c)
 *     PdcTaskClientUnregister @ 0x14014E7C4 (PdcTaskClientUnregister.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcReleaseRwLockExclusive(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockEx(a1, 0LL);
  KeLeaveCriticalRegion();
}
