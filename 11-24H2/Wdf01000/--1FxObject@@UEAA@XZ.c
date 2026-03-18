/*
 * XREFs of ??1FxObject@@UEAA@XZ @ 0x140052A60
 * Callers:
 *     ??1FxNPagedLookasideList@@MEAA@XZ @ 0x140052568 (--1FxNPagedLookasideList@@MEAA@XZ.c)
 *     ??_EFxObject@@UEAAPEAXI@Z @ 0x1400525C0 (--_EFxObject@@UEAAPEAXI@Z.c)
 *     ??1FxMemoryBufferFromPool@@MEAA@XZ @ 0x1400525F8 (--1FxMemoryBufferFromPool@@MEAA@XZ.c)
 *     ??1FxPagedObject@@UEAA@XZ @ 0x1400526CC (--1FxPagedObject@@UEAA@XZ.c)
 *     ??1FxString@@UEAA@XZ @ 0x140052778 (--1FxString@@UEAA@XZ.c)
 *     ??_GFxSpinLock@@UEAAPEAXI@Z @ 0x1400527B0 (--_GFxSpinLock@@UEAAPEAXI@Z.c)
 *     ??_EFxUsbUrb@@MEAAPEAXI@Z @ 0x1400527F0 (--_EFxUsbUrb@@MEAAPEAXI@Z.c)
 *     ??1FxRequestMemory@@UEAA@XZ @ 0x1400528A8 (--1FxRequestMemory@@UEAA@XZ.c)
 *     ??_GFxMemoryBuffer@@MEAAPEAXI@Z @ 0x1400529A0 (--_GFxMemoryBuffer@@MEAAPEAXI@Z.c)
 *     ?SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ @ 0x1400529F0 (-SelfDestruct@FxMemoryBufferFromLookaside@@MEAAXXZ.c)
 *     ??1FxNPagedLookasideListFromPool@@MEAA@XZ @ 0x1400956B0 (--1FxNPagedLookasideListFromPool@@MEAA@XZ.c)
 *     ??1FxPagedLookasideListFromPool@@MEAA@XZ @ 0x140095878 (--1FxPagedLookasideListFromPool@@MEAA@XZ.c)
 *     ??_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z @ 0x1400958F0 (--_EFxMemoryBufferFromLookaside@@MEAAPEAXI@Z.c)
 *     ??_GFxLookasideList@@MEAAPEAXI@Z @ 0x140095D10 (--_GFxLookasideList@@MEAAPEAXI@Z.c)
 *     ??1FxRelatedDevice@@UEAA@XZ @ 0x1400AC218 (--1FxRelatedDevice@@UEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_sqq @ 0x140097250 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxObject::~FxObject(FxObject *this)
{
  unsigned int m_Type; // r8d
  unsigned int i; // edx
  __int64 v4; // rcx
  _QWORD *m_Lock; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  const char *HandleName; // rcx
  unsigned __int64 v9; // rdi
  const void *v10; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxObject_vtbl *)FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (_QWORD *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
    {
      FxTagTracker::~FxTagTracker((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
      FxPoolFree(m_Lock);
    }
  }
  if ( this->m_ParentObject
    || this->m_ChildListHead.Flink != &this->m_ChildListHead
    || this->m_ChildEntry.Flink != &this->m_ChildEntry )
  {
    m_Type = this->m_Type;
    for ( i = 0; ; ++i )
    {
      if ( i >= FxObjectsInfoCount )
        goto LABEL_21;
      v4 = i;
      if ( (_WORD)m_Type == FxObjectsInfo[v4].ObjectType )
        break;
      if ( (unsigned __int16)m_Type <= FxObjectsInfo[v4].ObjectType )
        goto LABEL_21;
    }
    HandleName = FxObjectsInfo[v4].HandleName;
    if ( !HandleName )
LABEL_21:
      HandleName = "WDFOBJECT";
    v9 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v10 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, i, m_Type, (unsigned __int16)FxObjectsInfo, traceGuid, HandleName, v10, this);
    if ( !this->m_ObjectSize )
      v9 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v9, (unsigned __int64)this);
  }
  if ( _bittest16((const signed __int16 *)&this->24, 9u) )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        _a2 = 0LL;
      WPP_IFR_SF_qqLL(m_Globals, 5u, 0x14u, 0xAu, WPP_FxObject_hpp_Traceguids, this, _a2, this->m_ObjectState, 0xCu);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 )
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].m_ChildEntry.Blink) - 32) = 12;
  }
  this->m_ObjectState = 12;
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
}
