/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x140251B10
 * Callers:
 *     KiAbSetMinimumThreadPriority @ 0x14024E520 (KiAbSetMinimumThreadPriority.c)
 *     KiAbIoBoostOwners @ 0x14024EA60 (KiAbIoBoostOwners.c)
 *     KiAbCpuBoostOwners @ 0x14024F2F0 (KiAbCpuBoostOwners.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x140250050 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402509C0 (KiAbProcessThreadLocks.c)
 *     KiAbDeferredProcessingWorker @ 0x140253050 (KiAbDeferredProcessingWorker.c)
 *     KiAbConvertWaiterToOwnerEntry @ 0x140323370 (KiAbConvertWaiterToOwnerEntry.c)
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
