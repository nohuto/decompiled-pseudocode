/*
 * XREFs of ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x140044A20
 * Callers:
 *     ?ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z @ 0x1400945A0 (-ReleaseOverride@FxRequest@@UEAAKGPEAXJPEBD@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x140034320 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1400461B8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x140046260 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??1FxTagTracker@@QEAA@XZ @ 0x140082414 (--1FxTagTracker@@QEAA@XZ.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x140082938 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxObject::Release(FxObject *this, void *Tag, __int64 Line, const char *File)
{
  unsigned __int32 v5; // ebx
  unsigned __int16 m_ObjectFlags; // ax
  unsigned __int16 v8; // ax
  FxTagTracker *v9; // rbp
  _QWORD *i; // r14
  void (__fastcall *v11)(unsigned __int64, void *, __int64, const char *); // rax
  void (__fastcall *v12)(unsigned __int64, void *, __int64, const char *); // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // r14
  FxTagTracker *m_Lock; // rcx
  FxObjectExcessiveAllocation *ObjectExcessiveAllocation; // rcx

  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
      FxTagTracker::UpdateTagHistory(m_Lock, Tag, Line, File, TagRelease, this->m_Refcnt - 1);
  }
  v5 = _InterlockedDecrement(&this->m_Refcnt);
  if ( v5 )
    return v5;
  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
  {
    FxObject::SetObjectStateLocked(this, FxObjectStateDeferedDestroy);
    FxDisposeList::Add(this->m_Globals->Driver->m_DisposeList, this);
    return v5;
  }
  v8 = this->m_ObjectFlags;
  if ( (v8 & 0x80u) != 0 )
  {
    v9 = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( v9 )
    {
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
      v8 = this->m_ObjectFlags;
    }
  }
  else
  {
    v9 = 0LL;
  }
  if ( this->m_ObjectSize && (v8 & 8) != 0 )
  {
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v11 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[2];
      if ( v11 )
      {
        v11((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
        i[2] = 0LL;
      }
      v12 = (void (__fastcall *)(unsigned __int64, void *, __int64, const char *))i[3];
      if ( v12 )
      {
        v12((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL, Tag, Line, File);
        i[3] = 0LL;
      }
    }
    LOBYTE(Tag) = 1;
    if ( this->m_ObjectSize )
    {
      v13 = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
      if ( v13 )
      {
        do
        {
          v14 = (_QWORD *)v13[1];
          if ( !(_BYTE)Tag )
            FxPoolFree(v13);
          LOBYTE(Tag) = 0;
          v13 = v14;
        }
        while ( v14 );
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
  if ( v9 )
  {
    this[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::~FxTagTracker(v9);
    FxPoolFree(v9);
  }
  ((void (__fastcall *)(FxObject *, void *, __int64, const char *))this->SelfDestruct)(this, Tag, Line, File);
  return 0LL;
}
