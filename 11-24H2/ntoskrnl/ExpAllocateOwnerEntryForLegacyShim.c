/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x140323290
 * Callers:
 *     SepMandatoryIntegrityCheck @ 0x14028A540 (SepMandatoryIntegrityCheck.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x1402F0F98 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140322C20 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x140322DA0 (SeSecurityAttributePresent.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140322FB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SepAcquireOrderedReadLocks @ 0x1403232E0 (SepAcquireOrderedReadLocks.c)
 *     SepCanTokenMatchAllPackageSid @ 0x140323590 (SepCanTokenMatchAllPackageSid.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x1403BC958 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 ExpAllocateOwnerEntryForLegacyShim()
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rcx

  do
    result = ExAllocatePool2(0x40uLL, 0x28uLL, 0x454F5246u);
  while ( !result );
  *(_OWORD *)result = 0LL;
  *(_OWORD *)(result + 16) = 0LL;
  *(_QWORD *)(result + 32) = 0LL;
  CurrentThread = KeGetCurrentThread();
  *(_BYTE *)(result + 37) |= 1u;
  *(_QWORD *)(result + 16) = CurrentThread;
  return result;
}
