/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500
 * Callers:
 *     ??1FxDriver@@UEAA@XZ @ 0x14003EA28 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x14003EB0C (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x14003EBEC (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14003F798 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x14003FCA8 (--1FxDpc@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14003FD1C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x14003FF84 (--1FxPkgGeneral@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x14003FFF0 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x140040030 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x140040080 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x1400400B8 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x1400400F8 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x140040178 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x140040238 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x1400402F8 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x140040398 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x140040470 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x1400404B0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x140041B44 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x14007CF30 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x14007F220 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxDmaEnabler@@UEAA@XZ @ 0x140089538 (--1FxDmaEnabler@@UEAA@XZ.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x14008F380 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1400A9104 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1400ABD50 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qqLL @ 0x1400251E0 (WPP_IFR_SF_qqLL.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x140083B50 (--1FxVerifierLock@@QEAA@XZ.c)
 *     WPP_IFR_SF_sqq @ 0x140097250 (WPP_IFR_SF_sqq.c)
 */

void __fastcall FxNonPagedObject::~FxNonPagedObject(FxNonPagedObject *this)
{
  unsigned int m_Type; // r8d
  unsigned int i; // edx
  __int64 v4; // rcx
  _LIST_ENTRY *Flink; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a2; // rdx
  _LIST_ENTRY *Blink; // rdi
  const char *HandleName; // rcx
  unsigned __int64 v10; // rdi
  const void *v11; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-38h]

  this->__vftable = (FxNonPagedObject_vtbl *)FxNonPagedObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Blink = this[-1].m_ChildEntry.Blink;
    if ( Blink )
    {
      FxVerifierLock::~FxVerifierLock((FxVerifierLock *)this[-1].m_ChildEntry.Blink);
      FxPoolFree(Blink);
      this[-1].m_ChildEntry.Blink = 0LL;
    }
  }
  this->m_NPLock.m_DbgFlagIsInitialized = 0;
  this->__vftable = (FxNonPagedObject_vtbl *)FxObject::`vftable';
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    Flink = this[-1].m_ChildEntry.Flink;
    if ( Flink )
    {
      FxTagTracker::~FxTagTracker((FxTagTracker *)this[-1].m_ChildEntry.Flink);
      FxPoolFree(Flink);
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
        goto LABEL_24;
      v4 = i;
      if ( (_WORD)m_Type == FxObjectsInfo[v4].ObjectType )
        break;
      if ( (unsigned __int16)m_Type <= FxObjectsInfo[v4].ObjectType )
        goto LABEL_24;
    }
    HandleName = FxObjectsInfo[v4].HandleName;
    if ( !HandleName )
LABEL_24:
      HandleName = "WDFOBJECT";
    v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    v11 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    WPP_IFR_SF_sqq(this->m_Globals, i, m_Type, (unsigned __int16)FxObjectsInfo, traceGuid, HandleName, v11, this);
    if ( !this->m_ObjectSize )
      v10 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, v10, (unsigned __int64)this);
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
      *((_BYTE *)this + _InterlockedIncrement((volatile signed __int32 *)&this[-1].96) - 32) = 12;
  }
  this->m_SpinLock.m_DbgFlagIsInitialized = 0;
  this->m_ObjectState = 12;
}
