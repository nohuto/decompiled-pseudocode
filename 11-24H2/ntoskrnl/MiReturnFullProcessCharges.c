/*
 * XREFs of MiReturnFullProcessCharges @ 0x140430F60
 * Callers:
 *     MiSetProtectionOnSection @ 0x140236630 (MiSetProtectionOnSection.c)
 *     MiDecommitRegion @ 0x1408DC180 (MiDecommitRegion.c)
 *     MiDeleteVad @ 0x1408E5390 (MiDeleteVad.c)
 *     MiRemoveVadCharges @ 0x1409B0374 (MiRemoveVadCharges.c)
 *     MiReturnFullProcessCommitment @ 0x1409DE7C8 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140A37CD0 (MiDeleteVadBitmap.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x1408E84D0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsReturnProcessPageFileQuota @ 0x1409E5710 (PsReturnProcessPageFileQuota.c)
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
