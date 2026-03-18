/*
 * XREFs of MiReleaseEnclaveMetadataPage @ 0x140B535D4
 * Callers:
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 * Callees:
 *     MiReleasePtes @ 0x1403289B0 (MiReleasePtes.c)
 *     KeRemoveEnclavePage @ 0x1403FC880 (KeRemoveEnclavePage.c)
 *     MiGetPteAddress @ 0x140419EE0 (MiGetPteAddress.c)
 *     MiReturnEnclavePage @ 0x1404D558C (MiReturnEnclavePage.c)
 */

__int64 MiReleaseEnclaveMetadataPage()
{
  unsigned __int64 *PteAddress; // rax
  unsigned __int64 v1; // rbx

  KeRemoveEnclavePage(qword_140E37280);
  PteAddress = (unsigned __int64 *)MiGetPteAddress(qword_140E37280);
  qword_140E37280 = 0LL;
  v1 = *PteAddress;
  MiReleasePtes((__int64)&qword_140E37328, PteAddress, 1u);
  return MiReturnEnclavePage((v1 >> 12) & 0xFFFFFFFFFFLL);
}
