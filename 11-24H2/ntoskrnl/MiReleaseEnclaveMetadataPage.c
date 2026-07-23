/*
 * XREFs of MiReleaseEnclaveMetadataPage @ 0x140B657F4
 * Callers:
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiReleasePtes @ 0x14029D9A0 (MiReleasePtes.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     KeRemoveEnclavePage @ 0x14046D340 (KeRemoveEnclavePage.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 */

__int64 MiReleaseEnclaveMetadataPage()
{
  unsigned __int64 *PteAddress; // rax
  unsigned __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  KeRemoveEnclavePage(qword_140E37600);
  PteAddress = (unsigned __int64 *)MiGetPteAddress(qword_140E37600);
  qword_140E37600 = 0LL;
  v1 = *PteAddress;
  MiReleasePtes((__int64)&qword_140E376A8, PteAddress, 1u);
  return MiReturnEnclavePage((v1 >> 12) & 0xFFFFFFFFFFLL, v2, v3, v4);
}
