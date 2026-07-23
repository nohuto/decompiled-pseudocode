/*
 * XREFs of MiUnmapReturnCharges @ 0x140A8BE9C
 * Callers:
 *     MiDeleteBootRange @ 0x14066A308 (MiDeleteBootRange.c)
 *     MiReturnSystemImageCommitment @ 0x140A8BE44 (MiReturnSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140AE80CC (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140C68CE8 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReturnCommit @ 0x14029EB80 (MiReturnCommit.c)
 *     MiReturnResident @ 0x140338A10 (MiReturnResident.c)
 */

void __fastcall MiUnmapReturnCharges(__int64 a1, unsigned __int64 *a2)
{
  MiReturnResident(a1, *a2);
  MiReturnCommit(a1, a2[3] - a2[1], 0);
}
