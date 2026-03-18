/*
 * XREFs of ?FinalRelease@FxObject@@AEAAXXZ @ 0x140008D40
 * Callers:
 *     ?Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z @ 0x140008CE0 (-Release@FxMemoryObject@@UEAAKPEAXJPEBD@Z.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x140009550 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     FxIoTargetSendIo @ 0x14000BF50 (FxIoTargetSendIo.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14000EC70 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x14004BA58 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x14004BB00 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082404 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082928 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::FinalRelease(FxObject *this)
{
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v3; // ax
  FxTagTracker *m_Lock; // rsi
  _QWORD *i; // rdi
  void (__fastcall *v6)(unsigned __int64); // rax
  void (__fastcall *v7)(unsigned __int64); // rax
  __int64 m_ObjectSize; // rcx
  char v9; // al
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rcx

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
  {
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
    FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
  }
  else
  {
    v3 = this->m_ObjectFlags;
    if ( (v3 & 0x80u) != 0 )
    {
      m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
      {
        FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
        v3 = this->m_ObjectFlags;
      }
    }
    else
    {
      m_Lock = 0LL;
    }
    if ( this->m_ObjectSize && (v3 & 8) != 0 )
    {
      for ( i = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize); i; i = (_QWORD *)i[1] )
      {
        v6 = (void (__fastcall *)(unsigned __int64))i[2];
        if ( v6 )
        {
          v6((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[2] = 0LL;
        }
        v7 = (void (__fastcall *)(unsigned __int64))i[3];
        if ( v7 )
        {
          v7((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          i[3] = 0LL;
        }
      }
      m_ObjectSize = this->m_ObjectSize;
      v9 = 1;
      if ( (_WORD)m_ObjectSize )
      {
        v10 = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize);
        if ( v10 )
        {
          do
          {
            v11 = (_QWORD *)v10[1];
            if ( !v9 )
              FxPoolFree(v10);
            v9 = 0;
            v10 = v11;
          }
          while ( v11 );
        }
      }
    }
    if ( (this->m_ObjectFlags & 0x40) != 0 )
    {
      ObjectExcessiveAllocation = this->m_Globals->ObjectExcessiveAllocation;
      _InterlockedDecrement(&ObjectExcessiveAllocation->ObjectCnt);
      if ( this->m_Type == 4098 && _InterlockedExchangeAdd(&ObjectExcessiveAllocation->DeviceCnt, 0xFFFFFFFF) != 1 )
        _InterlockedAdd(&ObjectExcessiveAllocation->LimitScaled, -ObjectExcessiveAllocation->Limit);
    }
    if ( m_Lock )
    {
      this[-1].m_SpinLock.m_Lock = 0LL;
      FxTagTracker::~FxTagTracker(m_Lock);
      FxPoolFree(m_Lock);
    }
    this->SelfDestruct(this);
  }
}
