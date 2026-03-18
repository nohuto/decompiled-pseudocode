/*
 * XREFs of ??1FxNonPagedObject@@UEAA@XZ @ 0x14004C320
 * Callers:
 *     ??1FxDriver@@UEAA@XZ @ 0x14004A848 (--1FxDriver@@UEAA@XZ.c)
 *     ??1FxUsbDevice@@MEAA@XZ @ 0x14004A92C (--1FxUsbDevice@@MEAA@XZ.c)
 *     ??1FxUsbPipe@@MEAA@XZ @ 0x14004AA0C (--1FxUsbPipe@@MEAA@XZ.c)
 *     ??1FxPkgIo@@UEAA@XZ @ 0x14004B5B8 (--1FxPkgIo@@UEAA@XZ.c)
 *     ??1FxDpc@@UEAA@XZ @ 0x14004BAC8 (--1FxDpc@@UEAA@XZ.c)
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x14004BB3C (--1FxPkgPnp@@MEAA@XZ.c)
 *     ??1FxPkgGeneral@@UEAA@XZ @ 0x14004BDA4 (--1FxPkgGeneral@@UEAA@XZ.c)
 *     ??_GFxDisposeList@@UEAAPEAXI@Z @ 0x14004BE10 (--_GFxDisposeList@@UEAAPEAXI@Z.c)
 *     ??_EFxWmiProvider@@UEAAPEAXI@Z @ 0x14004BE50 (--_EFxWmiProvider@@UEAAPEAXI@Z.c)
 *     ??_EFxDmaSystemTransaction@@UEAAPEAXI@Z @ 0x14004BEA0 (--_EFxDmaSystemTransaction@@UEAAPEAXI@Z.c)
 *     ??1FxWmiIrpHandler@@UEAA@XZ @ 0x14004BED8 (--1FxWmiIrpHandler@@UEAA@XZ.c)
 *     ??1FxCollection@@UEAA@XZ @ 0x14004BF18 (--1FxCollection@@UEAA@XZ.c)
 *     ??1FxTimer@@UEAA@XZ @ 0x14004BF98 (--1FxTimer@@UEAA@XZ.c)
 *     ??1FxSystemWorkItem@@UEAA@XZ @ 0x14004C058 (--1FxSystemWorkItem@@UEAA@XZ.c)
 *     ??1FxIoQueue@@UEAA@XZ @ 0x14004C118 (--1FxIoQueue@@UEAA@XZ.c)
 *     ??1FxWorkItem@@UEAA@XZ @ 0x14004C1B8 (--1FxWorkItem@@UEAA@XZ.c)
 *     ??_GFxIoTargetRemote@@UEAAPEAXI@Z @ 0x14004C290 (--_GFxIoTargetRemote@@UEAAPEAXI@Z.c)
 *     ??_EFxFileObject@@UEAAPEAXI@Z @ 0x14004C2D0 (--_EFxFileObject@@UEAAPEAXI@Z.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x14004D964 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??_EFxWmiInstanceExternal@@UEAAPEAXI@Z @ 0x14007D2C0 (--_EFxWmiInstanceExternal@@UEAAPEAXI@Z.c)
 *     ??1FxUsbInterface@@MEAA@XZ @ 0x14007F5F0 (--1FxUsbInterface@@MEAA@XZ.c)
 *     ??1FxDmaEnabler@@UEAA@XZ @ 0x140089538 (--1FxDmaEnabler@@UEAA@XZ.c)
 *     ??_GFxCompanionTarget@@UEAAPEAXI@Z @ 0x14008F320 (--_GFxCompanionTarget@@UEAAPEAXI@Z.c)
 *     ??1FxInterrupt@@UEAA@XZ @ 0x1400A9034 (--1FxInterrupt@@UEAA@XZ.c)
 *     ??_GFxSystemThread@@UEAAPEAXI@Z @ 0x1400ABC80 (--_GFxSystemThread@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqLL @ 0x14000CAB0 (WPP_IFR_SF_qqLL.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082414 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??1FxVerifierLock@@QEAA@XZ @ 0x140083B60 (--1FxVerifierLock@@QEAA@XZ.c)
 *     WPP_IFR_SF_sqq @ 0x140097210 (WPP_IFR_SF_sqq.c)
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
