/*
 * XREFs of imp_WdfCollectionGetCount @ 0x1400151C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfCollectionGetCount(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Collection,
        unsigned int a3)
{
  __int64 v4; // rcx
  FxCollection *flags; // rdi
  unsigned __int8 v6; // al
  unsigned __int8 v7; // r8
  unsigned int m_Count; // ebx
  FxCollection_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned __int16 v12; // r9
  FxVerifierLock *v13; // rcx
  FxVerifierLock *v14; // rcx
  const _GUID *v15; // [rsp+20h] [rbp-48h]
  FxCollection **p_pCollection; // [rsp+50h] [rbp-18h] BYREF
  __int16 v17; // [rsp+58h] [rbp-10h]
  __int16 v18; // [rsp+5Ah] [rbp-Eh]
  int v19; // [rsp+5Ch] [rbp-Ch]
  unsigned __int8 irql; // [rsp+78h] [rbp+10h] BYREF
  FxCollection *pCollection; // [rsp+80h] [rbp+18h] BYREF

  irql = 0;
  if ( !Collection )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x100EuLL);
  LOWORD(v4) = 0;
  flags = (FxCollection *)(~Collection & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Collection & 1) != 0 )
  {
    v4 = LOWORD(flags->__vftable);
    flags = (FxCollection *)((char *)flags - v4);
  }
  if ( flags->m_Type == 4110 )
  {
    pCollection = flags;
  }
  else
  {
    pCollection = 0LL;
    p_pCollection = &pCollection;
    v18 = v4;
    v19 = 0;
    v10 = flags->__vftable;
    v17 = 4110;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pCollection) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v11, a3, v12, v15, (const void *)Collection, 0x100Eu, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Collection, 0x100EuLL);
    }
    flags = pCollection;
  }
  if ( SLOBYTE(flags->m_ObjectFlags) < 0
    && (v13 = *(FxVerifierLock **)&flags[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v13, &irql, a3);
    v6 = irql;
  }
  else
  {
    v6 = KeAcquireSpinLockRaiseToDpc(&flags->m_NPLock.m_Lock);
  }
  m_Count = pCollection->m_Count;
  if ( SLOBYTE(pCollection->m_ObjectFlags) < 0
    && (v14 = *(FxVerifierLock **)&pCollection[-1].m_NPLock.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v14, v6, v7);
  }
  else
  {
    KeReleaseSpinLock(&pCollection->m_NPLock.m_Lock, v6);
  }
  return m_Count;
}
