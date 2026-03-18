/*
 * XREFs of imp_WdfCollectionRemoveItem @ 0x140020F40
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ??3FxStump@@SAXPEAX@Z @ 0x1400216E4 (--3FxStump@@SAXPEAX@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_dqdd @ 0x140099D68 (WPP_IFR_SF_dqdd.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfCollectionRemoveItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int Index)
{
  int v3; // r14d
  __int64 v6; // rcx
  FxCollection *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // r15
  FxCollection *v11; // rbx
  int v12; // edx
  FxCollection *Flink; // rcx
  _LIST_ENTRY **p_Blink; // rcx
  _LIST_ENTRY *v15; // rdi
  _LIST_ENTRY *v16; // r8
  _LIST_ENTRY *v17; // rdx
  FxCollection_vtbl *v18; // rax
  unsigned __int8 v19; // dl
  unsigned __int16 v20; // r9
  FxVerifierLock *v21; // rcx
  FxVerifierLock *v22; // rcx
  const _GUID *_a1; // [rsp+20h] [rbp-40h]
  FxCollection **p_pCollection; // [rsp+50h] [rbp-10h] BYREF
  __int16 v25; // [rsp+58h] [rbp-8h]
  __int16 v26; // [rsp+5Ah] [rbp-6h]
  int v27; // [rsp+5Ch] [rbp-4h]
  unsigned __int8 irql; // [rsp+A8h] [rbp+48h] BYREF
  FxCollection *pCollection; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
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
    v26 = v6;
    v27 = 0;
    v18 = flags->__vftable;
    v25 = 4110;
    if ( v18->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v19, Index, v20, _a1, (const void *)Collection, 0x100Eu, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  m_Globals = flags->m_Globals;
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v21 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v21, &irql, Index);
    v10 = irql;
  }
  else
  {
    v10 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
  }
  v11 = pCollection;
  if ( Index < pCollection->m_Count )
  {
    v12 = 0;
    Flink = (FxCollection *)pCollection->m_ListHead.Flink;
    while ( Flink != (FxCollection *)&pCollection->m_ListHead )
    {
      if ( v12 == Index )
      {
        p_Blink = &Flink[-1].m_ListHead.Blink;
        if ( !p_Blink )
          break;
        v15 = *p_Blink;
        v16 = p_Blink[1];
        if ( (_LIST_ENTRY **)v16->Blink != p_Blink + 1 || (v17 = p_Blink[2], (_LIST_ENTRY **)v17->Flink != p_Blink + 1) )
          __fastfail(3u);
        v17->Flink = v16;
        v16->Blink = v17;
        FxStump::operator delete(p_Blink);
        --v11->m_Count;
        v11 = pCollection;
        goto LABEL_17;
      }
      Flink = (FxCollection *)Flink->__vftable;
      ++v12;
    }
  }
  v15 = 0LL;
  v3 = -1073741275;
LABEL_17:
  if ( SLOBYTE(v11->m_ObjectFlags) < 0 && (v22 = *(FxVerifierLock **)&v11[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
    FxVerifierLock::Unlock(v22, v10, v9);
  else
    KeReleaseSpinLock(&v11->m_NPLock.m_Lock, v10);
  if ( v15 )
    ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))v15->Flink[1].Flink)(
      v15,
      &pCollection->FxCollectionInternal,
      127LL,
      "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  if ( v3 < 0 )
  {
    WPP_IFR_SF_dqdd(
      m_Globals,
      pCollection->m_Count,
      2u,
      0xCu,
      WPP_FxCollectionApi_cpp_Traceguids,
      Index,
      (const void *)Collection,
      pCollection->m_Count,
      v3);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
