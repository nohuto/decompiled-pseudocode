/*
 * XREFs of MiUnmapReturnCharges @ 0x140A8A838
 * Callers:
 *     MiDeleteBootRange @ 0x14065D60C (MiDeleteBootRange.c)
 *     MiReturnSystemImageCommitment @ 0x140A8A7E0 (MiReturnSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140AD58A0 (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140C54EE4 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReturnResident @ 0x14022F8D0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x140329900 (MiReturnCommit.c)
 */

void __fastcall MiUnmapReturnCharges(__int64 a1, unsigned __int64 *a2)
{
  MiReturnResident(a1, *a2);
  MiReturnCommit(a1, a2[3] - a2[1], 0);
}
