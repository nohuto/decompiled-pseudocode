/*
 * XREFs of MmReturnChargesToLockPagedPool @ 0x140ABABD0
 * Callers:
 *     MiDeleteSubsectionLargePages @ 0x1404CA9A4 (MiDeleteSubsectionLargePages.c)
 *     MiCreatePagingFileMap @ 0x140942908 (MiCreatePagingFileMap.c)
 *     PopEnableHiberFile @ 0x140AB3950 (PopEnableHiberFile.c)
 * Callees:
 *     MiReturnResident @ 0x14020F6B0 (MiReturnResident.c)
 *     MiDecommitPages @ 0x140288300 (MiDecommitPages.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 */

unsigned __int64 __fastcall MmReturnChargesToLockPagedPool(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  int PteAddress; // eax
  _OWORD v5[3]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v6; // [rsp+70h] [rbp-18h]

  v6 = 0LL;
  v2 = (a2 + 4095 + (a1 & 0xFFF)) >> 12;
  memset(v5, 0, sizeof(v5));
  PteAddress = MiGetPteAddress(a1);
  MiDecommitPages(PteAddress, v2, 0, 0LL, 0LL, 24, 0LL, (__int64)v5);
  return MiReturnResident((__int64)&MiSystemPartition, v2);
}
