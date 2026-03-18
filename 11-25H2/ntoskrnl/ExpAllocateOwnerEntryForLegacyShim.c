/*
 * XREFs of ExpAllocateOwnerEntryForLegacyShim @ 0x14029409C
 * Callers:
 *     SepAcquireOrderedReadLocks @ 0x140293230 (SepAcquireOrderedReadLocks.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140293DB0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     SeSecurityAttributePresent @ 0x1402940F0 (SeSecurityAttributePresent.c)
 *     ExEnterCriticalRegionAndAcquireResourceShared @ 0x140294330 (ExEnterCriticalRegionAndAcquireResourceShared.c)
 *     SepMandatoryIntegrityCheck @ 0x140296910 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     ExpFastResourceLegacyConvertExclusiveToShared @ 0x140406FC8 (ExpFastResourceLegacyConvertExclusiveToShared.c)
 *     ExpFastResourceLegacyAcquireSharedStarveExclusive @ 0x140489FF8 (ExpFastResourceLegacyAcquireSharedStarveExclusive.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
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
