/*
 * XREFs of imp_WdfCollectionAdd @ 0x14005FDD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140036B40 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140044728 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfCollectionAdd(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned __int64 Object)
{
  char v5; // si
  __int64 v6; // rcx
  FxCollection *flags; // rbx
  __int64 v8; // rcx
  FxObject *v9; // rdi
  unsigned __int8 v10; // di
  FxObject *v11; // r14
  void *v12; // rax
  FxCollectionInternal *v13; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  FX_POOL **v16; // rax
  _LIST_ENTRY *Blink; // r8
  FxTagTracker *m_Lock; // rcx
  _LIST_ENTRY *v20; // rdx
  unsigned int v21; // edx
  FxCollection_vtbl *v22; // rax
  unsigned __int8 v23; // dl
  unsigned __int16 v24; // r9
  FxObject_vtbl *v25; // rax
  unsigned __int8 v26; // dl
  unsigned __int16 v27; // r9
  FxVerifierLock *v28; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-49h]
  FxObject *pObject; // [rsp+50h] [rbp-19h] BYREF
  FxCollection **p_pCollection; // [rsp+58h] [rbp-11h] BYREF
  __int16 v32; // [rsp+60h] [rbp-9h]
  __int16 v33; // [rsp+62h] [rbp-7h]
  int v34; // [rsp+64h] [rbp-5h]
  FxObject **p_pObject; // [rsp+68h] [rbp-1h] BYREF
  __int16 v36; // [rsp+70h] [rbp+7h]
  __int16 v37; // [rsp+72h] [rbp+9h]
  int v38; // [rsp+74h] [rbp+Bh]
  __m128i v39; // [rsp+80h] [rbp+17h]
  __m128i v40; // [rsp+90h] [rbp+27h] BYREF
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 irql; // [rsp+D8h] [rbp+6Fh] BYREF
  FxCollection *pCollection; // [rsp+E8h] [rbp+7Fh] BYREF

  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  v5 = 1;
  LOWORD(v6) = 0;
  flags = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    v6 = LOWORD(flags->__vftable);
    flags = (FxCollection *)((char *)flags - v6);
  }
  if ( flags->m_Type == 4110 )
  {
    pCollection = flags;
  }
  else
  {
    pCollection = 0LL;
    p_pCollection = &pCollection;
    v33 = v6;
    v34 = 0;
    v22 = flags->__vftable;
    v32 = 4110;
    if ( v22->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v23,
        Object,
        v24,
        RefType,
        (const void *)Collection,
        0x100Eu,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  if ( !Object )
    FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1000uLL);
  LOWORD(v8) = 0;
  v9 = (FxObject *)(~Object & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Object & 1) != 0 )
  {
    v8 = LOWORD(v9->__vftable);
    v9 = (FxObject *)((char *)v9 - v8);
  }
  if ( v9->m_Type == 4096 )
  {
    pObject = v9;
  }
  else
  {
    pObject = 0LL;
    p_pObject = &pObject;
    v37 = v8;
    v38 = 0;
    v25 = v9->__vftable;
    v36 = 4096;
    if ( v25->QueryInterface(v9, (FxQueryInterfaceParams *)&p_pObject) < 0 )
    {
      WPP_IFR_SF_qDqD(v9->m_Globals, v26, Object, v27, RefType, (const void *)Object, 0x1000u, v9, v9->m_Type);
      FxVerifierBugCheckWorker(v9->m_Globals, WDF_INVALID_HANDLE, Object, 0x1000uLL);
    }
    flags = pCollection;
  }
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v28 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v28, &irql, Object);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
    irql = v10;
  }
  v11 = pObject;
  v12 = retaddr;
  v39.m128i_i64[0] = 0LL;
  v13 = &pCollection->FxCollectionInternal;
  v39.m128i_i64[1] = 64LL;
  m_Globals = pCollection->m_Globals;
  Tag = m_Globals->Tag;
  if ( !m_Globals->FxPoolTrackingOn )
    v12 = 0LL;
  v40 = v39;
  v16 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v40, 0x18uLL, Tag, v12);
  if ( v16 )
  {
    Blink = v13->m_ListHead.Blink;
    v20 = (_LIST_ENTRY *)(v16 + 1);
    if ( Blink->Flink != &v13->m_ListHead )
      __fastfail(3u);
    v20->Flink = &v13->m_ListHead;
    v16[2] = (FX_POOL *)Blink;
    Blink->Flink = v20;
    v13->m_ListHead.Blink = v20;
    *v16 = (FX_POOL *)v11;
    v21 = _InterlockedIncrement(&v11->m_Refcnt);
    if ( (v11->m_ObjectFlags & 0x80) != 0 )
    {
      m_Lock = (FxTagTracker *)v11[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          v13,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
          TagAddRef,
          v21);
    }
    ++v13->m_Count;
    v10 = irql;
  }
  else
  {
    v5 = 0;
  }
  if ( (pCollection->m_ObjectFlags & 0x80) != 0 && *(_QWORD *)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized )
    FxVerifierLock::Unlock(
      *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized,
      v10,
      (unsigned __int8)Blink);
  else
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v10);
  return v5 == 0 ? 0xC0000001 : 0;
}
