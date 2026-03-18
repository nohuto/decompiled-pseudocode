/*
 * XREFs of ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x14002FADC
 * Callers:
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x140070A10 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfFdoAddStaticChild @ 0x1400789C0 (imp_WdfFdoAddStaticChild.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14002F930 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14002F9A8 (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1400313F4 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140035AD4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x14004839C (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x14007ABC0 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x14007B0B8 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C518 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x14008C574 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::Add(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription,
        unsigned int *a4)
{
  unsigned __int64 *p_m_ListLock; // r13
  int v8; // esi
  FxDeviceDescriptionEntry *v9; // rax
  FxDeviceDescriptionEntry *v10; // rbx
  FxDeviceDescriptionEntry *v11; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 m_TotalDescriptionSize; // r9
  void *v15; // rax
  ULONG Tag; // r8d
  FX_POOL **v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  _LIST_ENTRY *v20; // rdx
  _LIST_ENTRY *v21; // rax
  __int64 v22; // rbx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *m_AddressDescription; // rdx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY freeHead; // [rsp+38h] [rbp-28h] BYREF
  __m128i v26; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h]

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v8 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v9 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v10 = v9;
  if ( v9 )
  {
    if ( v9->m_ModificationState == ModificationInsert )
    {
      if ( !this->m_AddressDescriptionSize )
        goto LABEL_5;
      m_AddressDescription = v9->m_AddressDescription;
      goto LABEL_25;
    }
    if ( (unsigned int)(v9->m_ModificationState - 2) >= 2 )
      goto LABEL_6;
  }
  else
  {
    v11 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription);
    v10 = v11;
    if ( v11 && (unsigned int)(v11->m_DescriptionState - 1) <= 1 )
    {
      if ( !this->m_AddressDescriptionSize )
      {
LABEL_5:
        v10->m_FoundInLastScan = 1;
        v8 = 0x40000000;
        goto LABEL_6;
      }
      m_AddressDescription = v11->m_AddressDescription;
LABEL_25:
      FxChildList::CopyAddress(this, m_AddressDescription, AddressDescription);
      goto LABEL_5;
    }
  }
  m_Globals = this->m_Globals;
  m_TotalDescriptionSize = this->m_TotalDescriptionSize;
  v15 = retaddr;
  v26 = 0LL;
  Tag = m_Globals->Tag;
  v26.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v15 = 0LL;
  v17 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v26, m_TotalDescriptionSize, Tag, v15);
  if ( !v17
    || (FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
          (FxDeviceDescriptionEntry *)v17,
          this,
          this->m_IdentificationDescriptionSize,
          this->m_AddressDescriptionSize),
        (v19 = v18) == 0) )
  {
    v8 = -1073741670;
    goto LABEL_6;
  }
  v8 = FxChildList::DuplicateId(
         this,
         *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v18 + 24),
         IdentificationDescription);
  if ( v8 < 0
    || this->m_AddressDescriptionSize
    && (v8 = FxChildList::DuplicateAddress(
               this,
               *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v19 + 32),
               AddressDescription),
        v8 < 0) )
  {
    Blink = freeHead.Blink;
    if ( freeHead.Blink->Flink == &freeHead )
    {
      *(_QWORD *)(v19 + 8) = freeHead.Blink;
      *(_QWORD *)v19 = &freeHead;
      Blink->Flink = (_LIST_ENTRY *)v19;
      freeHead.Blink = (_LIST_ENTRY *)v19;
      goto LABEL_6;
    }
LABEL_18:
    __fastfail(3u);
  }
  *(_BYTE *)(v19 + 80) = 1;
  v20 = this->m_ModificationListHead.Blink;
  v21 = (_LIST_ENTRY *)(v19 + 40);
  if ( v20->Flink != &this->m_ModificationListHead )
    goto LABEL_18;
  v21->Flink = &this->m_ModificationListHead;
  *(_QWORD *)(v19 + 48) = v20;
  v20->Flink = v21;
  this->m_ModificationListHead.Blink = v21;
  if ( this->m_StaticList )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(v19 + 24) + 8LL);
    FxObject::MarkNoDeleteDDI((FxObject *)v22, ObjectLock);
    *(_QWORD *)(*(_QWORD *)(v22 + 648) + 1712LL) = v19;
    *(_BYTE *)(*(_QWORD *)(v22 + 648) + 1786LL) = 1;
  }
LABEL_6:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, NewIrql);
  FxChildList::DrainFreeListHead(this, &freeHead);
  return (unsigned int)v8;
}
