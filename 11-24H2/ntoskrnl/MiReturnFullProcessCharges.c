/*
 * XREFs of MiReturnFullProcessCharges @ 0x1404234A0
 * Callers:
 *     MiSetProtectionOnSection @ 0x1402107C0 (MiSetProtectionOnSection.c)
 *     MiDeleteVad @ 0x140895840 (MiDeleteVad.c)
 *     MiDecommitRegion @ 0x1408DA3B0 (MiDecommitRegion.c)
 *     MiRemoveVadCharges @ 0x14099A074 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1409D8398 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A2CD84 (MiDeleteVadBitmap.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1408D8CB0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1409DFFA0 (PsReturnProcessPageFileQuota.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 496) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(2LL, v2, a1);
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 984), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
