/*
 * XREFs of ?Allocate@FxNPagedLookasideList@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x140060630
 * Callers:
 *     <none>
 * Callees:
 *     FxAllocateFromNPagedLookasideList @ 0x140028CD0 (FxAllocateFromNPagedLookasideList.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x140080A1C (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x140082628 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 *     memset @ 0x1400AC740 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E4854 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxNPagedLookasideList::Allocate(FxNPagedLookasideList *this, FX_POOL ***PPMemory)
{
  PSLIST_ENTRY v4; // rax
  FX_POOL_TRACKER *v5; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FX_POOL_TRACKER *v7; // r14
  unsigned __int64 m_BufferSize; // rcx
  FX_POOL **p_Pool; // rbx
  __int16 v10; // cx
  _OWORD *v11; // rsi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  unsigned __int64 v14; // rsi
  _FX_DRIVER_GLOBALS *v15; // rcx
  FX_POOL *v16; // rax
  unsigned int RefCount; // edx
  FxTagTracker *v18; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( !PPMemory )
    return 3221225485LL;
  *PPMemory = 0LL;
  v4 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  v5 = (FX_POOL_TRACKER *)v4;
  if ( !v4 )
    return 3221225626LL;
  m_Globals = this->m_Globals;
  memset(v4, 0, this->m_MemoryObjectSize);
  if ( m_Globals->FxPoolTrackingOn )
  {
    v7 = v5 + 1;
    v5[1].Link.Flink = &v5->Link;
    v5[1].Link.Blink = &m_Globals->Linkage;
    FxPoolInsertNonPagedAllocateTracker(&m_Globals->FxPoolFrameworks, v5, this->m_BufferSize, this->m_PoolTag, retaddr);
  }
  else
  {
    v7 = v5;
    v5->Link.Flink = &v5->Link;
    v5->Link.Blink = &m_Globals->Linkage;
  }
  m_BufferSize = this->m_BufferSize;
  p_Pool = &v7->Pool;
  if ( m_BufferSize >= 0x1000 )
    goto LABEL_26;
  v10 = m_BufferSize + 15;
  if ( this->m_Globals->FxVerifierHandle )
  {
    *(_OWORD *)p_Pool = 0LL;
    *(_OWORD *)&v7->Size = 0LL;
    *(_OWORD *)&v7->CallersAddress = 0LL;
    LODWORD(v7->CallersAddress) = 1146058822;
    p_Pool = (FX_POOL **)&v7[1];
  }
  v11 = (_OWORD *)((char *)p_Pool + (unsigned __int16)((v10 & 0xFFF0) + 128));
  *v11 = 0LL;
  v11[1] = 0LL;
  v11[2] = 0LL;
  *(_QWORD *)v11 = p_Pool;
  if ( this != (FxNPagedLookasideList *)-104LL )
  {
    ContextTypeInfo = this->m_MemoryAttributes.ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = this->m_MemoryAttributes.ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(v11 + 3, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
    }
    *((_QWORD *)v11 + 4) = this->m_MemoryAttributes.ContextTypeInfo;
  }
  if ( p_Pool )
  {
    v14 = this->m_BufferSize;
    v15 = this->m_Globals;
    *p_Pool = (FX_POOL *)FxObject::`vftable';
    p_Pool[2] = (FX_POOL *)v15;
    *((_WORD *)p_Pool + 4) = 4096;
    *((_WORD *)p_Pool + 5) = ((v14 + 15) & 0xFFF0) + 128;
    p_Pool[7] = 0LL;
    *((_BYTE *)p_Pool + 48) = 1;
    *((_DWORD *)p_Pool + 3) = 1;
    *((_DWORD *)p_Pool + 6) = 0x10000;
    p_Pool[8] = 0LL;
    p_Pool[5] = (FX_POOL *)(p_Pool + 4);
    p_Pool[4] = (FX_POOL *)(p_Pool + 4);
    p_Pool[10] = (FX_POOL *)(p_Pool + 9);
    p_Pool[9] = (FX_POOL *)(p_Pool + 9);
    v16 = p_Pool[2];
    p_Pool[11] = 0LL;
    p_Pool[12] = 0LL;
    if ( *(&v16[2].NonPagedLock.m_DbgFlagIsInitialized + 4) )
      FxObject::Vf_VerifyConstruct((FxObject *)p_Pool, (_FX_DRIVER_GLOBALS *)0xFFF0, 0);
    p_Pool[14] = (FX_POOL *)v14;
    *p_Pool = (FX_POOL *)FxMemoryObject::`vftable'{for `FxObject'};
    p_Pool[13] = (FX_POOL *)FxMemoryObject::`vftable'{for `IFxMemory'};
    if ( ((_BYTE)p_Pool[3] & 0x80) != 0 )
      FxObject::AllocateTagTracker((FxObject *)p_Pool, 0x100Au);
    p_Pool[15] = (FX_POOL *)this;
    *p_Pool = (FX_POOL *)FxMemoryBufferFromLookaside::`vftable'{for `FxObject'};
    p_Pool[13] = (FX_POOL *)FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
    RefCount = _InterlockedIncrement(&this->m_Refcnt);
    if ( (this->m_ObjectFlags & 0x80) != 0 )
    {
      v18 = *(FxTagTracker **)&this[-1].m_ObjectLookaside.L.LastTotalAllocates;
      if ( v18 )
        FxTagTracker::UpdateTagHistory(
          v18,
          p_Pool,
          104,
          "minkernel\\wdf\\framework\\shared\\core\\fxmemorybufferfromlookaside.cpp",
          TagAddRef,
          RefCount);
    }
  }
  else
  {
LABEL_26:
    p_Pool = 0LL;
  }
  *PPMemory = p_Pool;
  return 0LL;
}
