/*
 * XREFs of RaidClearAllNvmeIceKeyTables @ 0x14006A3BC
 * Callers:
 *     RaidAdapterDevicePowerstopAdapter @ 0x140034B54 (RaidAdapterDevicePowerstopAdapter.c)
 * Callees:
 *     Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline @ 0x140056648 (Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline.c)
 *     RaidClearNvmeIceKeyTable @ 0x14006A470 (RaidClearNvmeIceKeyTable.c)
 */

void RaidClearAllNvmeIceKeyTables()
{
  PVOID *i; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    KeAcquireInStackQueuedSpinLock(&NvmeIceListSpinLock, &LockHandle);
  else
    ExAcquireResourceExclusiveLite(&NvmeIceListLock, 1u);
  for ( i = (PVOID *)NvmeIceList; i != &NvmeIceList; i = (PVOID *)*i )
    RaidClearNvmeIceKeyTable(i + 7);
  if ( (unsigned int)Feature_SteelixInlineNvmeCryptoEngine__private_IsEnabledDeviceUsageNoInline() )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  else
    ExReleaseResourceLite(&NvmeIceListLock);
}
