/*
 * XREFs of ExConvertExclusiveToSharedLite @ 0x1403D7950
 * Callers:
 *     FsRtlAcquireFileForModWriteEx @ 0x140372ABC (FsRtlAcquireFileForModWriteEx.c)
 *     DifExConvertExclusiveToSharedLiteWrapper @ 0x14061CFB0 (DifExConvertExclusiveToSharedLiteWrapper.c)
 *     NtMapCMFModule @ 0x1407C3080 (NtMapCMFModule.c)
 *     CmpConvertRegistryShared @ 0x1407D87C4 (CmpConvertRegistryShared.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14085CCAC (PspAllocateAndQueryNotificationChannel.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140A0EDE0 (PnpUnlinkDeviceRemovalRelations.c)
 *     PpDevNodeUnlockTree @ 0x140A145FC (PpDevNodeUnlockTree.c)
 * Callees:
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403D74B8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpConvertExclusiveToSharedLite @ 0x1403D79F8 (ExpConvertExclusiveToSharedLite.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 */

void __stdcall ExConvertExclusiveToSharedLite(PERESOURCE Resource)
{
  USHORT Flag; // dx
  unsigned __int8 CurrentIrql; // al
  struct _KTHREAD *CurrentThread; // rdx

  Flag = Resource->Flag;
  if ( (Flag & 0x41) == 1 )
    KeBugCheckEx(0x1C6u, 0xFuLL, (ULONG_PTR)Resource, 0LL, 0LL);
  if ( (Flag & 1) != 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    CurrentThread = KeGetCurrentThread();
    if ( CurrentIrql > 1u )
      KeBugCheckEx(0x1C6u, 0LL, CurrentIrql, 1uLL, 0LL);
    if ( !CurrentIrql && (CurrentThread->MiscFlags & 0x400) == 0 && !CurrentThread->WaitBlock[3].SpareLong )
      KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
    ExpFastResourceLegacyConvertExclusiveToShared(Resource, (__int64)CurrentThread);
  }
  else
  {
    ExpConvertExclusiveToSharedLite();
  }
}
