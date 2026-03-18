/*
 * XREFs of MiFlushCacheRange @ 0x14068ECB4
 * Callers:
 *     MiHotRemoveHugeRange @ 0x140670540 (MiHotRemoveHugeRange.c)
 *     MiRemovePhysicalMemory @ 0x1407E9DAC (MiRemovePhysicalMemory.c)
 * Callees:
 *     MiFlushCacheForAttributeChange @ 0x1403AE6F8 (MiFlushCacheForAttributeChange.c)
 *     KeInvalidateAllCaches @ 0x1403AEA80 (KeInvalidateAllCaches.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiFlushCacheRange(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int8 CurrentIrql; // bl

  if ( a2 < (unsigned int)dword_140E2DB5C )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
    MiFlushCacheForAttributeChange(a1, a2, 3uLL, 0LL);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    return 0LL;
  }
  else
  {
    ++dword_140E2DB54;
    KeInvalidateAllCaches();
    return 1LL;
  }
}
