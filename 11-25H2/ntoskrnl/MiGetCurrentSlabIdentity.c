/*
 * XREFs of MiGetCurrentSlabIdentity @ 0x1403BEAC0
 * Callers:
 *     MiWalkVaRange @ 0x140236150 (MiWalkVaRange.c)
 *     MiUserFault @ 0x14024A660 (MiUserFault.c)
 *     MiCreateSlabEntry @ 0x140376BF8 (MiCreateSlabEntry.c)
 *     MiResolvePageFileFault @ 0x14037AA3C (MiResolvePageFileFault.c)
 *     MiCopyOnWrite @ 0x140386068 (MiCopyOnWrite.c)
 *     MiFreePageToSlabAllocator @ 0x1403B7474 (MiFreePageToSlabAllocator.c)
 *     MiGetPageFromSlabAllocator @ 0x1403B7FAC (MiGetPageFromSlabAllocator.c)
 *     MiCheckAvailablePagesForFaultDelay @ 0x1403BFB00 (MiCheckAvailablePagesForFaultDelay.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403DE840 (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404BD434 (MiReplenishSlabAllocatorByIdentity.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetCurrentSlabIdentity(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned __int8 *)(a1 + 1831);
  if ( (_BYTE)result == 0xFF || (*(_BYTE *)(a1 + 1450) & 1) != 0 )
    return *(unsigned __int8 *)(*(_QWORD *)(a1 + 184) + 1774LL);
  return result;
}
