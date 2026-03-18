/*
 * XREFs of ?CleanupEntryObject@FxCollectionInternal@@QEAAXPEAVFxObject@@@Z @ 0x140040940
 * Callers:
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x140040908 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxCollectionInternal::CleanupEntryObject(FxCollectionInternal *this, FxObject *Object)
{
  Object->Release(Object, this, 127, "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
}
