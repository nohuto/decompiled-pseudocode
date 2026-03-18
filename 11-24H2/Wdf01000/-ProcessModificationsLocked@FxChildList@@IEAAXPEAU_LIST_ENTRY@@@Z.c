/*
 * XREFs of ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140035AD4
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x14002FADC (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x140030634 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140030B24 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1400356AC (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x14003ED0C (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x140071F08 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1400720F0 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x14007AA84 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x14007EE2C (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x14008C674 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x14008C840 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x140046ACC (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qdd @ 0x14005F07C (WPP_IFR_SF_qdd.c)
 *     WPP_IFR_SF_ql @ 0x140086654 (WPP_IFR_SF_ql.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008C35C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 */

void __fastcall FxChildList::ProcessModificationsLocked(FxChildList *this, _LIST_ENTRY *FreeListHead)
{
  FxChildListState _a2; // r8d
  const void *v3; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _LIST_ENTRY *p_m_ModificationListHead; // r14
  _LIST_ENTRY *Flink; // rax
  unsigned __int8 v9; // r12
  _LIST_ENTRY *v10; // rdi
  _FX_DRIVER_GLOBALS *v11; // rcx
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY **_a1; // rdi
  _FX_DRIVER_GLOBALS *v14; // rcx
  int *v15; // rsi
  _FX_DRIVER_GLOBALS *v16; // rcx
  _FX_DRIVER_GLOBALS *v17; // rcx
  _FX_DRIVER_GLOBALS *v18; // r10
  const void *v19; // rbx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _LIST_ENTRY *v21; // rcx
  _FX_DRIVER_GLOBALS *v22; // rcx
  _LIST_ENTRY *Blink; // rcx
  const void *v24; // rdx
  _LIST_ENTRY *v25; // r8
  const void *v26; // rdx
  _FX_DRIVER_GLOBALS *v27; // rcx
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *v29; // rcx
  _LIST_ENTRY *v30; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v32; // rbx

  _a2 = this->m_State;
  v3 = 0LL;
  if ( _a2 == ListUnlocked && !this->m_ScanCount )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v24 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v24 = 0LL;
      WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x19u, WPP_FxChildList_cpp_Traceguids, v24);
      v3 = 0LL;
    }
    p_m_ModificationListHead = &this->m_ModificationListHead;
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v21 = Flink->Flink;
        if ( LODWORD(Flink[1].Flink) == 3 )
          LODWORD(Flink[1].Flink) = 2;
        Flink = v21;
      }
      while ( v21 != p_m_ModificationListHead );
    }
    v9 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v10 = p_m_ModificationListHead->Flink;
        if ( p_m_ModificationListHead->Flink == p_m_ModificationListHead )
        {
          if ( v9 )
          {
            if ( this->m_ScanCount || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device)) == 0LL )
            {
              this->m_InvalidationNeeded = 1;
            }
            else
            {
              this->m_InvalidationNeeded = (unsigned __int8)v3;
              IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
              v3 = 0LL;
            }
          }
          v11 = this->m_Globals;
          if ( v11->FxVerboseOn != (_BYTE)v3 )
          {
            m_ObjectSize = this->m_ObjectSize;
            v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              v32 = v3;
            WPP_IFR_SF_q(v11, 5u, 0xCu, 0x1Fu, WPP_FxChildList_cpp_Traceguids, v32);
          }
          return;
        }
        if ( v10->Blink != p_m_ModificationListHead )
          goto LABEL_39;
        v12 = v10->Flink;
        if ( v10->Flink->Blink != v10 )
          goto LABEL_39;
        p_m_ModificationListHead->Flink = v12;
        v12->Blink = p_m_ModificationListHead;
        v10->Blink = v10;
        v10->Flink = v10;
        _a1 = &v10[-3].Blink;
        v14 = this->m_Globals;
        v15 = (int *)(_a1 + 7);
        if ( v14->FxVerboseOn )
        {
          WPP_IFR_SF_ql(v14, 5u, 0xCu, 0x1Au, WPP_FxChildList_cpp_Traceguids, _a1, *v15);
          v3 = 0LL;
        }
        if ( *v15 != 1 )
          break;
        *((_DWORD *)_a1 + 4) = 1;
        v22 = this->m_Globals;
        if ( v22->FxVerboseOn )
        {
          WPP_IFR_SF_q(v22, 5u, 0xCu, 0x1Eu, WPP_FxChildList_cpp_Traceguids, _a1);
          v3 = 0LL;
        }
        Blink = this->m_DescriptionListHead.Blink;
        if ( Blink->Flink != &this->m_DescriptionListHead )
LABEL_39:
          __fastfail(3u);
        *_a1 = &this->m_DescriptionListHead;
        _a1[1] = Blink;
        Blink->Flink = (_LIST_ENTRY *)_a1;
        this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)_a1;
        *v15 = 0;
LABEL_22:
        v9 = 1;
      }
      if ( *v15 == 2 )
      {
        *v15 = 0;
        v16 = this->m_Globals;
        if ( v16->FxVerboseOn )
        {
          WPP_IFR_SF_ql(v16, 5u, 0xCu, 0x1Bu, WPP_FxChildList_cpp_Traceguids, _a1, *((_DWORD *)_a1 + 4));
          v3 = 0LL;
        }
        if ( *((_DWORD *)_a1 + 4) == 1 )
        {
          v27 = this->m_Globals;
          if ( v27->FxVerboseOn )
          {
            WPP_IFR_SF_q(v27, 5u, 0xCu, 0x1Cu, WPP_FxChildList_cpp_Traceguids, _a1);
            v3 = 0LL;
          }
          v28 = *_a1;
          if ( (_LIST_ENTRY **)(*_a1)->Blink != _a1 )
            goto LABEL_39;
          v29 = _a1[1];
          if ( (_LIST_ENTRY **)v29->Flink != _a1 )
            goto LABEL_39;
          v29->Flink = v28;
          v28->Blink = v29;
          v30 = FreeListHead->Blink;
          if ( v30->Flink != FreeListHead )
            goto LABEL_39;
          *_a1 = FreeListHead;
          _a1[1] = v30;
          v30->Flink = (_LIST_ENTRY *)_a1;
          FreeListHead->Blink = (_LIST_ENTRY *)_a1;
        }
        else if ( *((_DWORD *)_a1 + 4) == 2 )
        {
          v17 = this->m_Globals;
          if ( v17->FxVerboseOn )
          {
            v25 = _a1[8];
            v26 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v25->Blink) )
              v26 = 0LL;
            WPP_IFR_SF_qq(v17, 5u, 0xCu, 0x1Du, WPP_FxChildList_cpp_Traceguids, v26, v25[9].Flink);
            v3 = 0LL;
          }
          *((_DWORD *)_a1 + 4) = 4;
          goto LABEL_22;
        }
      }
      else if ( *v15 == 4 )
      {
        v9 = FxChildList::CloneEntryLocked(this, FreeListHead, (FxDeviceDescriptionEntry *)_a1, 0);
        v3 = 0LL;
      }
    }
  }
  v18 = this->m_Globals;
  if ( v18->FxVerboseOn )
  {
    v19 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v19 = 0LL;
    WPP_IFR_SF_qdd(v18, 5u, 0xCu, 0x18u, WPP_FxChildList_cpp_Traceguids, v19, _a2, this->m_ScanCount);
  }
}
