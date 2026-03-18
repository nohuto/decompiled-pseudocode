/*
 * XREFs of ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x140040788
 * Callers:
 *     ??1FxCollection@@UEAA@XZ @ 0x1400400F8 (--1FxCollection@@UEAA@XZ.c)
 *     ??1PdoInit@@QEAA@XZ @ 0x140040BAC (--1PdoInit@@QEAA@XZ.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x140061DC4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 * Callees:
 *     ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1400407BC (-Remove@FxCollectionInternal@@QEAAJK@Z.c)
 */

void __fastcall FxCollectionInternal::Clear(FxCollectionInternal *this)
{
  _LIST_ENTRY *p_m_ListHead; // rbx

  p_m_ListHead = &this->m_ListHead;
  while ( p_m_ListHead->Flink != p_m_ListHead )
    FxCollectionInternal::Remove(this, 0);
}
