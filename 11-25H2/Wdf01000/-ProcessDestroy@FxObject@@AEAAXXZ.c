/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x140057420
 * Callers:
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x140044E90 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082414 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082938 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxObject::ProcessDestroy(FxObject *this)
{
  unsigned __int16 m_ObjectFlags; // ax
  FxTagTracker *m_Lock; // rsi
  _QWORD *i; // rdi
  void (__fastcall *v5)(unsigned __int64); // rax
  void (__fastcall *v6)(unsigned __int64); // rax
  __int64 m_ObjectSize; // rcx
  char v8; // al
  _QWORD *v9; // rcx
  _QWORD *v10; // rdi
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rcx

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x80u) != 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
    {
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  else
  {
    m_Lock = 0LL;
  }
  if ( this->m_ObjectSize && (m_ObjectFlags & 8) != 0 )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v5 = (void (__fastcall *)(unsigned __int64))i[2];
      if ( v5 )
      {
        v5((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[2] = 0LL;
      }
      v6 = (void (__fastcall *)(unsigned __int64))i[3];
      if ( v6 )
      {
        v6((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        i[3] = 0LL;
      }
    }
    m_ObjectSize = this->m_ObjectSize;
    v8 = 1;
    if ( (_WORD)m_ObjectSize )
    {
      v9 = (FxObject_vtbl **)((char *)&this->__vftable + m_ObjectSize);
      if ( v9 )
      {
        do
        {
          v10 = (_QWORD *)v9[1];
          if ( !v8 )
            FxPoolFree(v9);
          v8 = 0;
          v9 = v10;
        }
        while ( v10 );
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
