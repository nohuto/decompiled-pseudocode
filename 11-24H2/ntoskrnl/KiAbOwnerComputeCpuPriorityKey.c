/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x140282120
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14027EB30 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14027F070 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14027F900 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140280660 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x140280FD0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140283660 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x1402CBF00 (KiAbConvertWaiterToOwnerEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  unsigned int v1; // eax
  char v2; // r8
  char result; // al
  unsigned int v4; // r8d

  v1 = *(_DWORD *)(a1 + 80) & 0x3FFFFFFF;
  if ( v1 )
  {
    _BitScanReverse(&v4, v1);
    v2 = v4 + 1;
  }
  else
  {
    v2 = 0;
  }
  result = *(_BYTE *)(*(_QWORD *)(a1 - 88LL * (*(_BYTE *)(a1 + 8) & 0x3F) - 16) + 563LL);
  if ( result <= v2 )
    return v2;
  if ( result > 30 )
    return 30;
  return result;
}
