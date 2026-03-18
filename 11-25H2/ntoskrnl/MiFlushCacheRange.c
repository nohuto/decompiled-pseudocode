/*
 * XREFs of MiFlushCacheRange @ 0x1406833D0
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140664A98 (MiHotRemoveHugeRange.c)
 *     MiRemovePhysicalMemory @ 0x1407D9EEC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x14026F3B4 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x14026F5F0 (KeInvalidateAllCaches.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFlushCacheRange(__int64 a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_140E2D91C )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    MiFlushCacheForAttributeChange(a1, a2, 3, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140E2D914;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
