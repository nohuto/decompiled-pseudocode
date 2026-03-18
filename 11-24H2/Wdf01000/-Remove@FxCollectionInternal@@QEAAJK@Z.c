/*
 * XREFs of ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1400407BC
 * Callers:
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x140040788 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     imp_WdfRegistryQueryMultiString @ 0x140062110 (imp_WdfRegistryQueryMultiString.c)
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1400407EC (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x140040908 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 */

int __fastcall FxCollectionInternal::Remove(FxCollectionInternal *this, unsigned int Index)
{
  FxCollectionEntry *Entry; // rax
  FxCollectionInternal *v3; // r9

  Entry = FxCollectionInternal::FindEntry(this, Index);
  if ( Entry )
    return FxCollectionInternal::RemoveEntry(v3, Entry);
  else
    return -1073741275;
}
