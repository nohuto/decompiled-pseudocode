/*
 * XREFs of IovpCompleteRequest5 @ 0x140B96E70
 * Callers:
 *     IovpLocalCompletionRoutine @ 0x140B96B90 (IovpLocalCompletionRoutine.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402535A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IovpSessionDataDereference @ 0x140B8C838 (IovpSessionDataDereference.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 */

void __fastcall IovpCompleteRequest5(__int64 a1)
{
  _SLIST_ENTRY *v1; // rdi
  __int64 v2; // rbx

  v1 = *(_SLIST_ENTRY **)a1;
  if ( *(_QWORD *)a1 )
  {
    v2 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(v2 + 16) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 8));
    IovpSessionDataDereference(v1);
    _InterlockedDecrement((volatile signed __int32 *)(v2 + 20));
    VfIrpDatabaseEntryReleaseLock(v2);
  }
}
