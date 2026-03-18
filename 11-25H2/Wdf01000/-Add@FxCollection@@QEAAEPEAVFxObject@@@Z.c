/*
 * XREFs of ?Add@FxCollection@@QEAAEPEAVFxObject@@@Z @ 0x1400405BC
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1400401C0 (imp_WdfRegistryQueryMultiString.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1400413A4 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z @ 0x14009A560 (-BuildFromWdmList@FxIoResList@@QEAAJPEAPEAU_IO_RESOURCE_LIST@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

bool __fastcall FxCollection::Add(FxCollection *this, FX_POOL *Item)
{
  FxCollectionInternal *v2; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  void *v6; // rax
  FX_POOL **v7; // rax
  FX_POOL **v8; // rbx
  FxTagTracker *NonPagedBytes; // rcx
  _LIST_ENTRY *v11; // rcx
  _LIST_ENTRY *Blink; // rdx
  unsigned int RefCount; // edx
  __m128i v14; // [rsp+30h] [rbp-28h]
  __m128i v15; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  v2 = &this->FxCollectionInternal;
  m_Globals = this->m_Globals;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  Tag = m_Globals->Tag;
  if ( m_Globals->FxPoolTrackingOn )
    v6 = retaddr;
  else
    v6 = 0LL;
  v15 = v14;
  v7 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v15, 0x18uLL, Tag, v6);
  v8 = v7;
  if ( v7 )
  {
    v11 = (_LIST_ENTRY *)(v7 + 1);
    Blink = v2->m_ListHead.Blink;
    if ( Blink->Flink != &v2->m_ListHead )
      __fastfail(3u);
    v7[2] = (FX_POOL *)Blink;
    v11->Flink = &v2->m_ListHead;
    Blink->Flink = v11;
    v2->m_ListHead.Blink = v11;
    *v7 = Item;
    RefCount = _InterlockedIncrement((volatile signed __int32 *)&Item->NonPagedLock.m_Lock + 1);
    if ( SLOBYTE(Item->NonPagedHead.Blink) < 0 )
    {
      NonPagedBytes = (FxTagTracker *)Item[-1].NonPagedBytes;
      if ( NonPagedBytes )
        FxTagTracker::UpdateTagHistory(
          NonPagedBytes,
          v2,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
          TagAddRef,
          RefCount);
    }
    ++v2->m_Count;
  }
  return v8 != 0LL;
}
