/*
 * XREFs of MiObtainSystemVa @ 0x14026CAF4
 * Callers:
 *     MiExpandSystemCache @ 0x14026B918 (MiExpandSystemCache.c)
 *     MiGetPageTablesForLargeMap @ 0x14026C224 (MiGetPageTablesForLargeMap.c)
 *     MiReservePoolMemory @ 0x14026C688 (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x14026C728 (MiExpandPtes.c)
 *     MiReserveDriverPtes @ 0x140A555D0 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140C5C108 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14026CB38 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x14026CBCC (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v3);
}
