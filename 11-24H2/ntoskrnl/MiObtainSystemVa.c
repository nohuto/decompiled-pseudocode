/*
 * XREFs of MiObtainSystemVa @ 0x1403A5804
 * Callers:
 *     MiReservePoolMemory @ 0x1403A5398 (MiReservePoolMemory.c)
 *     MiExpandPtes @ 0x1403A5438 (MiExpandPtes.c)
 *     MiGetPageTablesForLargeMap @ 0x1403A6BE4 (MiGetPageTablesForLargeMap.c)
 *     MiExpandSystemCache @ 0x1403A7378 (MiExpandSystemCache.c)
 *     MiReserveDriverPtes @ 0x140AB636C (MiReserveDriverPtes.c)
 *     MiInitializeSystemPtes @ 0x140C59F78 (MiInitializeSystemPtes.c)
 * Callees:
 *     MiSystemVaToDynamicBitmap @ 0x1403A5848 (MiSystemVaToDynamicBitmap.c)
 *     MiObtainDynamicVa @ 0x1403A58DC (MiObtainDynamicVa.c)
 */

__int64 __fastcall MiObtainSystemVa(__int64 a1, unsigned int a2)
{
  __int64 v2; // rax
  unsigned int v3; // r9d

  v2 = MiSystemVaToDynamicBitmap(a2);
  return MiObtainDynamicVa(v2, v3);
}
