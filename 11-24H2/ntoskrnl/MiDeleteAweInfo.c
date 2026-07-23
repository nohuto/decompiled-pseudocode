/*
 * XREFs of MiDeleteAweInfo @ 0x1407F9E08
 * Callers:
 *     MiDeleteSectionAwe @ 0x140683148 (MiDeleteSectionAwe.c)
 *     MiAllocateAweInfo @ 0x1407F8928 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407F9CD0 (MiCreateProcessDefaultAweInfo.c)
 *     MmDeleteProcessAddressSpace @ 0x140AE7D64 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x1402B9C50 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1407F9DB8 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(ULONG_PTR a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
