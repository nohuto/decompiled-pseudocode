/*
 * XREFs of ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008C2FC
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140019204 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x14001E2B4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x14008C1EC (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

char __fastcall FxChildList::CloneEntryLocked(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice **p_m_Pdo; // r14
  const void *_a1; // r8
  char v11; // r15
  FxDeviceDescriptionEntry *v12; // rax
  FxDeviceDescriptionEntry *v13; // rbx
  unsigned __int8 (__fastcall *m_EvtChildListDeviceReenumerated)(WDFCHILDLIST__ *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rcx
  _LIST_ENTRY *Blink; // rax
  _FX_DRIVER_GLOBALS *v18; // rcx
  const void *_a2; // r10
  _LIST_ENTRY *v20; // rcx

  m_Globals = this->m_Globals;
  p_m_Pdo = &Entry->m_Pdo;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)*p_m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !(*p_m_Pdo)->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(
      m_Globals,
      5u,
      0xCu,
      0x16u,
      WPP_FxChildList_cpp_Traceguids,
      _a1,
      (*p_m_Pdo)->m_DeviceObject.m_DeviceObject,
      FromQDR);
  }
  v11 = 0;
  v12 = FxDeviceDescriptionEntry::Clone(Entry, FreeListHead);
  v13 = v12;
  if ( v12 )
  {
    m_EvtChildListDeviceReenumerated = this->m_EvtChildListDeviceReenumerated;
    if ( m_EvtChildListDeviceReenumerated )
    {
      v15 = (unsigned __int64)*p_m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !(*p_m_Pdo)->m_ObjectSize )
        v15 = 0LL;
      v16 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !this->m_ObjectSize )
        v16 = 0LL;
      if ( !m_EvtChildListDeviceReenumerated(
              (WDFCHILDLIST__ *)v16,
              (WDFDEVICE__ *)v15,
              Entry->m_AddressDescription,
              v12->m_AddressDescription) )
      {
        Blink = FreeListHead->Blink;
        if ( Blink->Flink == FreeListHead )
        {
          v13->m_DescriptionLink.Flink = FreeListHead;
          v13->m_DescriptionLink.Blink = Blink;
          Blink->Flink = (_LIST_ENTRY *)v13;
          FreeListHead->Blink = (_LIST_ENTRY *)v13;
          goto LABEL_22;
        }
LABEL_19:
        __fastfail(3u);
      }
    }
    v18 = this->m_Globals;
    if ( v18->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)*p_m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(*p_m_Pdo)->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqq(
        v18,
        5u,
        0xCu,
        0x17u,
        WPP_FxChildList_cpp_Traceguids,
        v13,
        _a2,
        (*p_m_Pdo)->m_DeviceObject.m_DeviceObject);
    }
    v13->m_DescriptionState = DescriptionPresentNeedsInstantiation;
    v13->m_ModificationState = ModificationUnspecified;
    v20 = this->m_DescriptionListHead.Blink;
    if ( v20->Flink != &this->m_DescriptionListHead )
      goto LABEL_19;
    v13->m_DescriptionLink.Flink = &this->m_DescriptionListHead;
    v13->m_DescriptionLink.Blink = v20;
    v20->Flink = (_LIST_ENTRY *)v13;
    this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)v13;
    if ( !FromQDR )
    {
      Entry->m_DescriptionState = DescriptionNotPresent;
      v11 = 1;
    }
  }
LABEL_22:
  Entry->m_ModificationState = ModificationUnspecified;
  return v11;
}
