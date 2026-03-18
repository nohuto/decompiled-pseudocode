/*
 * XREFs of MiDeleteAweInfo @ 0x1407F9698
 * Callers:
 *     MiDeleteSectionAwe @ 0x140681F58 (MiDeleteSectionAwe.c)
 *     MiAllocateAweInfo @ 0x1407F81B8 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9560 (MiCreateProcessDefaultAweInfo.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE6484 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14043A400 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1407F9648 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(ULONG_PTR a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
