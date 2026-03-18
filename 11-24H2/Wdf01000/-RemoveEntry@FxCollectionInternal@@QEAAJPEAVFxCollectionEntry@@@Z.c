/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x140040908
 * Callers:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1400407BC (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1400989C0 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x140098E00 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x140099230 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x14009A964 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 * Callees:
 *     ?CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z @ 0x140040940 (-CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x140040974 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  FxCollectionInternal::CleanupEntryObject(this, Entry->m_Object);
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
