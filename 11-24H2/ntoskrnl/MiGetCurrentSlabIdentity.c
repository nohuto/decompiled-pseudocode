/*
 * XREFs of MiGetCurrentSlabIdentity @ 0x1403FC210
 * Callers:
 *     MiFreePageToSlabAllocator @ 0x1402241C8 (MiFreePageToSlabAllocator.c)
 *     MiWalkVaRange @ 0x14028A740 (MiWalkVaRange.c)
 *     MiCopyOnWrite @ 0x1402E47DC (MiCopyOnWrite.c)
 *     MiResolvePageFileFault @ 0x1402F783C (MiResolvePageFileFault.c)
 *     MiUserFault @ 0x1402FD560 (MiUserFault.c)
 *     MiCreateSlabEntry @ 0x1403A112C (MiCreateSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x1403A2ED0 (MiGetPageFromSlabAllocator.c)
 *     MiCheckAvailablePagesForFaultDelay @ 0x1403FC0A0 (MiCheckAvailablePagesForFaultDelay.c)
 *     MiCopyOnWriteCheckConditions @ 0x140406AD8 (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404143E8 (MiReplenishSlabAllocatorByIdentity.c)
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
