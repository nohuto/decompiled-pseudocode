/*
 * XREFs of MiObtainSystemVa @ 0x14038EAA4
 * Callers:
 *     MiReservePoolMemory @ 0x14038E638 (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x14038E6D8 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x14038FB4C (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1403903C8 (MiExpandSystemCache.c)
 *     MiReserveDriverPtes @ 0x140A5B530 (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140C48C48 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x14038EAE8 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x14038EB7C (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v3);
}
