/*
 * XREFs of ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x1400328E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxRequestBase@@MEAA@XZ @ 0x140032A20 (--1FxRequestBase@@MEAA@XZ.c)
 *     FxFreeToNPagedLookasideList @ 0x140032D00 (FxFreeToNPagedLookasideList.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x14008192C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxRequestFromLookaside::SelfDestruct(FxRequestFromLookaside *this)
{
  FxDeviceBase *m_DeviceBase; // rdi
  FxRequestFromLookaside *v2; // rbx
  char m_ObjectFlags; // al
  __int64 v4; // rax
  _SLIST_ENTRY *m_InternalContext; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx

  m_DeviceBase = this->m_DeviceBase;
  v2 = this;
  FxRequestBase::~FxRequestBase(this);
  m_ObjectFlags = v2->m_ObjectFlags;
  if ( v2->m_ForwardRequestToParent )
  {
    m_Globals = v2->m_Globals;
    if ( m_ObjectFlags < 0 )
      v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
    if ( m_Globals->FxPoolTrackingOn )
      FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v2[-1].m_InternalContext);
    ExFreePoolWithTag(v2[-1].m_InternalContext, 0);
  }
  else
  {
    if ( m_ObjectFlags < 0 )
      v2 = (FxRequestFromLookaside *)((char *)v2 - 48);
    if ( m_DeviceBase->m_Globals->FxPoolTrackingOn )
      FxPoolRemoveNonPagedAllocateTracker((FX_POOL_TRACKER *)v2[-1].m_InternalContext);
    v4 = *(_QWORD *)&m_DeviceBase[3].m_SpinLock.m_DbgFlagIsInitialized;
    if ( v4 && *(_WORD *)(v4 + 8) == 4354 && *(_BYTE *)(v4 + 1787) )
    {
      m_InternalContext = (_SLIST_ENTRY *)v2[-1].m_InternalContext;
      if ( ExQueryDepthSList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock) >= LOWORD(m_DeviceBase[2].m_ParentObject) )
        (*(void (__fastcall **)(_SLIST_ENTRY *))&m_DeviceBase[2].m_NPLock.m_DbgFlagIsInitialized)(m_InternalContext);
      else
        ExpInterlockedPushEntrySList((PSLIST_HEADER)&m_DeviceBase[2].m_SpinLock, m_InternalContext);
    }
    else
    {
      FxFreeToNPagedLookasideList((_NPAGED_LOOKASIDE_LIST *)&m_DeviceBase[2].m_SpinLock, v2[-1].m_InternalContext);
    }
  }
}
