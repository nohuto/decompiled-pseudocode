/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x140343DB0
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x140259F30 (SepMandatoryIntegrityCheck.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140343740 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1403438C0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140343AD0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x140343E00 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x1403440B0 (SepCanTokenMatchAllPackageSid.c)
 *     SeAccessCheckByType @ 0x14035C8A0 (SeAccessCheckByType.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1403D74B8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403DCC68 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 ExpAllocateOwnerEntryForLegacyShim()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  do
    result = ExAllocatePool2(0x40uLL);
  while ( !result );
  *(_OWORD *)result = 0LL;
  *(_OWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_BYTE *)(result + 37) |= 1u;
  *(_QWORD *)(result + 16) = CurrentThread;
  return result;
}
