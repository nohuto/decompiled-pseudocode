/*
 * XREFs of MiReleaseEnclaveMetadataPage @ 0x140B63724
 * Callers:
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiReleasePtes @ 0x14028DDA0 (MiReleasePtes.c)
 *     KeRemoveEnclavePage @ 0x1403D1AF0 (KeRemoveEnclavePage.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     MiReturnEnclavePage @ 0x1404D4E64 (MiReturnEnclavePage.c)
 */

__int64 MiReleaseEnclaveMetadataPage()
{
  unsigned __int64 *PteAddress; // rax
  unsigned __int64 v1; // rbx

  KeRemoveEnclavePage(qword_140E374C0);
  PteAddress = (unsigned __int64 *)MiGetPteAddress(qword_140E374C0);
  qword_140E374C0 = 0LL;
  v1 = *PteAddress;
  MiReleasePtes((__int64)&qword_140E37568, PteAddress, 1u);
  return MiReturnEnclavePage((v1 >> 12) & 0xFFFFFFFFFFLL);
}
