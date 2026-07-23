/*
 * XREFs of MiGetCurrentSlabIdentity @ 0x1402619D0
 * Callers:
 *     MiCreateSlabEntry @ 0x140217C8C (MiCreateSlabEntry.c)
 *     MiGetPageFromSlabAllocator @ 0x14021D5AC (MiGetPageFromSlabAllocator.c)
 *     MiFreePageToSlabAllocator @ 0x140250F18 (MiFreePageToSlabAllocator.c)
 *     MiCheckAvailablePagesForFaultDelay @ 0x140260E00 (MiCheckAvailablePagesForFaultDelay.c)
 *     MiWalkVaRange @ 0x14029A340 (MiWalkVaRange.c)
 *     MiUserFault @ 0x140307CE0 (MiUserFault.c)
 *     MiResolvePageFileFault @ 0x14033FD3C (MiResolvePageFileFault.c)
 *     MiCopyOnWrite @ 0x140346A74 (MiCopyOnWrite.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403C927C (MiCopyOnWriteCheckConditions.c)
 *     MiReplenishSlabAllocatorByIdentity @ 0x1404B74A4 (MiReplenishSlabAllocatorByIdentity.c)
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
