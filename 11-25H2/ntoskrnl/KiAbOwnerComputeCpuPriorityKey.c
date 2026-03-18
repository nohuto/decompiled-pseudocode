/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x1402E5690
 * Callers:
 *     KiAbConvertWaiterToOwnerEntry @ 0x14027E670 (KiAbConvertWaiterToOwnerEntry.c)
 *     KiAbDeferredProcessingWorker @ 0x1402E4D00 (KiAbDeferredProcessingWorker.c)
 *     KiAbIoBoostOwners @ 0x1402E61E0 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x1402E72F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x1402E83C0 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402E8D40 (KiAbProcessThreadLocks.c)
 *     KiAbSetMinimumThreadPriority @ 0x1402E9E70 (KiAbSetMinimumThreadPriority.c)
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
