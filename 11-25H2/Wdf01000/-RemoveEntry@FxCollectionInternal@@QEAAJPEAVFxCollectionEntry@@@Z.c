/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x14004C728
 * Callers:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x14004C5DC (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x140098980 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x140098DC0 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1400991F0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x14009A888 (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 * Callees:
 *     ?CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z @ 0x14004C760 (-CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z.c)
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x14004C794 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  FxCollectionInternal::CleanupEntryObject(this, Entry->m_Object);
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
