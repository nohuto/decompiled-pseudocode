/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140039D20
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x140039938 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140015350 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x140039F84 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?IsPassiveCallbacks@FxObject@@QEAAEE@Z @ 0x14003C4F4 (-IsPassiveCallbacks@FxObject@@QEAAEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  void (__fastcall *EvtWorkItemFunc)(WDFWORKITEM__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  unsigned int v11; // r9d
  void (__fastcall *m_Callback)(WDFWORKITEM__ *); // rcx
  FxDeviceBase *v13; // rax
  unsigned __int8 AutomaticSerialization; // al
  _FX_DRIVER_GLOBALS *v15; // r15
  IFxHasCallbacks *v16; // rsi
  unsigned __int8 v17; // dl
  struct _IO_WORKITEM *v18; // rax
  unsigned int v19; // edx
  FxTagTracker *m_Lock; // rcx
  void **v21; // r8
  unsigned int v23; // ebx
  IFxHasCallbacks *pCallbacks; // [rsp+40h] [rbp-38h] BYREF
  int v25; // [rsp+80h] [rbp+8h] BYREF
  int v26; // [rsp+90h] [rbp+18h] BYREF

  EvtWorkItemFunc = Config->EvtWorkItemFunc;
  pCallbacks = 0LL;
  m_Globals = this->m_Globals;
  this->m_Callback = EvtWorkItemFunc;
  v11 = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Callback = this[-1].m_Callback;
    if ( m_Callback )
      FxTagTracker::UpdateTagHistory(
        (FxTagTracker *)m_Callback,
        this,
        178,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        v11);
  }
  v13 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v13;
  if ( !v13 )
    return 3221225488LL;
  AutomaticSerialization = Config->AutomaticSerialization;
  v15 = ParentObject->m_Globals;
  this->m_CallbackLock = 0LL;
  this->m_CallbackLockObject = 0LL;
  v26 = 0;
  v25 = 0;
  v16 = pCallbacks;
  if ( AutomaticSerialization )
  {
    if ( !pCallbacks )
      return (unsigned int)-1073741808;
    pCallbacks->GetConstraints(pCallbacks, (_WDF_EXECUTION_LEVEL *)&v26, (_WDF_SYNCHRONIZATION_SCOPE *)&v25);
    if ( v25 != 4 && v25 != 1 )
    {
      if ( FxObject::IsPassiveCallbacks(ParentObject, v17) )
      {
        this->m_CallbackLock = v16->GetCallbackLockPtr(v16, &this->m_CallbackLockObject);
        goto LABEL_8;
      }
      FxVerifierDbgBreakPoint(v15);
      v23 = -1071644148;
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxWorkItem_cpp_Traceguids, Attributes->ParentObject, -1071644148);
      return v23;
    }
  }
LABEL_8:
  v18 = IoAllocateWorkItem(this->m_DeviceBase->m_DeviceObject.m_DeviceObject);
  this->m_WorkItem.m_WorkItem = v18;
  if ( !v18 )
  {
    v23 = -1073741670;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, 0xC000009A);
    return v23;
  }
  v19 = _InterlockedIncrement(&ParentObject->m_Refcnt);
  if ( SLOBYTE(ParentObject->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)ParentObject[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(
        m_Lock,
        this,
        269,
        "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp",
        TagAddRef,
        v19);
  }
  v21 = (void **)WorkItem;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v21, ParentObject, 1u);
}
