/*
 * XREFs of MiUnmapReturnCharges @ 0x140A8F804
 * Callers:
 *     MiDeleteBootRange @ 0x140669130 (MiDeleteBootRange.c)
 *     MiReturnSystemImageCommitment @ 0x140A8F7AC (MiReturnSystemImageCommitment.c)
 *     MiFreeInitializationCode @ 0x140AE67EC (MiFreeInitializationCode.c)
 *     MiFreeBootDriverPages @ 0x140C66B6C (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiReturnCommit @ 0x14028EF80 (MiReturnCommit.c)
 */

void __fastcall MiUnmapReturnCharges(__int64 a1, unsigned __int64 *a2)
{
  MiReturnResident(a1, *a2);
  MiReturnCommit(a1, a2[3] - a2[1], 0);
}
