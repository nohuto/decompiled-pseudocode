/*
 * XREFs of MiDeleteAweInfo @ 0x1407E9808
 * Callers:
 *     MiDeleteSectionAwe @ 0x140676738 (MiDeleteSectionAwe.c)
 *     MiAllocateAweInfo @ 0x1407E8328 (MiAllocateAweInfo.c)
 *     MiCreateProcessDefaultAweInfo @ 0x1407E96D0 (MiCreateProcessDefaultAweInfo.c)
 *     MmDeleteProcessAddressSpace @ 0x1408D7B40 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     ExCleanupAutoExpandPushLock @ 0x14036D350 (ExCleanupAutoExpandPushLock.c)
 *     MiDeleteAweBitMap @ 0x1407E97B8 (MiDeleteAweBitMap.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteAweInfo(ULONG_PTR a1, _DWORD *a2)
{
  if ( (a2[2] & 2) != 0 )
    ExCleanupAutoExpandPushLock((__int64)(a2 + 16));
  MiDeleteAweBitMap(a1, (__int64)(a2 + 6));
  ExFreePoolWithTag(a2, 0);
}
