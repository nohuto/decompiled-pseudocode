/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1400356AC
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1400354BC (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfFdoUnlockStaticChildListFromIteration @ 0x140035520 (imp_WdfFdoUnlockStaticChildListFromIteration.c)
 *     imp_WdfChildListEndScan @ 0x140077410 (imp_WdfChildListEndScan.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x140005FE4 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140035AD4 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140046ACC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x140072204 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ??1FxDeviceDescriptionEntry@@QEAA@XZ @ 0x140080B10 (--1FxDeviceDescriptionEntry@@QEAA@XZ.c)
 *     ?CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x140083600 (-CleanupDescriptions@FxChildList@@IEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WD.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1400841CC (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x14008C9BC (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // rbx
  unsigned __int8 v4; // dl
  KIRQL v5; // r13
  unsigned int _a2; // ecx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const _GUID *v8; // r8
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *i; // rbx
  _LIST_ENTRY *v11; // rax
  unsigned __int8 v12; // r8
  _LIST_ENTRY *v13; // rbx
  _LIST_ENTRY *v14; // rax
  const void *_a1; // rdx
  FxChildList *v16; // r12
  _LIST_ENTRY **p_Blink; // r14
  _FX_DRIVER_GLOBALS *v18; // rcx
  int *v19; // rsi
  _FX_DRIVER_GLOBALS *v20; // rcx
  _LIST_ENTRY *v21; // r8
  const void *v22; // rdx
  _LIST_ENTRY *v23; // rcx
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY *v25; // rcx
  _LIST_ENTRY **v26; // rdx
  _LIST_ENTRY *v27; // rcx
  _FX_DRIVER_GLOBALS *v28; // rcx
  _LIST_ENTRY *v29; // r8
  unsigned __int8 FxVerboseOn; // al
  const void *v31; // rdx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _LIST_ENTRY *v33; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-30h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-10h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  _a2 = this->m_ScanCount - 1;
  this->m_ScanCount = _a2;
  m_Globals = this->m_Globals;
  v8 = WPP_FxChildList_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xCu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  if ( !this->m_ScanCount )
  {
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v16 = (FxChildList *)Flink->Flink;
        p_Blink = &Flink[-3].Blink;
        v18 = this->m_Globals;
        v19 = (int *)&Flink[1];
        if ( v18->FxVerboseOn )
          WPP_IFR_SF_qll(v18, v4, (unsigned int)v8, 0, traceGuid, &Flink[-3].Blink, *v19, *((_DWORD *)p_Blink + 4));
        if ( !*((_BYTE *)p_Blink + 80) )
        {
          if ( *v19 == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)&Flink[-3].Blink);
          }
          else if ( *v19 == 4 )
          {
            v20 = this->m_Globals;
            if ( v20->FxVerboseOn )
            {
              v21 = p_Blink[8];
              v22 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v21->Blink) )
                v22 = 0LL;
              WPP_IFR_SF_qq(v20, 5u, 0xCu, 0xEu, WPP_FxChildList_cpp_Traceguids, v22, v21[9].Flink);
            }
            *v19 = 3;
            v23 = Flink->Flink;
            if ( Flink->Flink->Blink != Flink || (Blink = Flink->Blink, Blink->Flink != Flink) )
LABEL_56:
              __fastfail(3u);
            Blink->Flink = v23;
            v23->Blink = Blink;
            Flink->Blink = Flink;
            Flink->Flink = Flink;
          }
        }
        Flink = (_LIST_ENTRY *)v16;
      }
      while ( v16 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v11 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v25 = i->Flink;
        v26 = &i->Blink;
        i = i->Blink;
        if ( v11->Flink->Blink != v11 )
          goto LABEL_56;
        if ( i->Flink != v11 )
          goto LABEL_56;
        i->Flink = v25;
        v25->Blink = i;
        v27 = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          goto LABEL_56;
        *v26 = freeHead.Blink;
        v11->Flink = &freeHead;
        v27->Flink = v11;
        freeHead.Blink = v11;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v28 = this->m_Globals;
        v29 = i[4].Flink;
        FxVerboseOn = v28->FxVerboseOn;
        if ( v29 )
        {
          if ( FxVerboseOn )
          {
            v31 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v29->Blink) )
              v31 = 0LL;
            WPP_IFR_SF_qq(v28, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v31, v29[9].Flink);
          }
        }
        else if ( FxVerboseOn )
        {
          WPP_IFR_SF_q(v28, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
    p_m_ListLock = &this->m_ListLock;
  }
  KeReleaseSpinLock(p_m_ListLock, v5);
  while ( 1 )
  {
    v13 = freeHead.Flink;
    if ( freeHead.Flink == &freeHead )
      break;
    if ( freeHead.Flink->Blink != &freeHead )
      goto LABEL_56;
    v14 = freeHead.Flink->Flink;
    if ( freeHead.Flink->Flink->Blink != freeHead.Flink )
      goto LABEL_56;
    freeHead.Flink = freeHead.Flink->Flink;
    v14->Blink = &freeHead;
    v13->Blink = v13;
    v13->Flink = v13;
    if ( this->m_StaticList && (LODWORD(v13[1].Flink) == 1 || LODWORD(v13[3].Blink) == 5) )
    {
      v33 = v13[1].Blink->Blink;
      if ( LODWORD(v13[3].Blink) == 5 )
        LODWORD(v13[3].Blink) = 0;
      LODWORD(v13[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)v33[40].Blink, PnpEventRemove, v12);
    }
    else
    {
      FxChildList::CleanupDescriptions(
        this,
        (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v13[1].Blink,
        (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v13[2].Flink);
      FxDeviceDescriptionEntry::~FxDeviceDescriptionEntry((FxDeviceDescriptionEntry *)v13);
      FxStump::operator delete(v13);
    }
  }
}
