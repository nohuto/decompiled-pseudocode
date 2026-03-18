/*
 * XREFs of imp_WdfSpinLockAcquire @ 0x140026100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfSpinLockAcquire(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  _QWORD *v3; // rdi
  FxSpinLock *flags; // rbx
  __int64 v5; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  void *v7; // rsi
  unsigned __int16 m_ObjectSize; // ax
  FxSpinLock *v9; // rbx
  _QWORD *v10; // rcx
  FxSpinLock_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxSpinLock **p_pLock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v17; // [rsp+58h] [rbp-10h]
  __int16 v18; // [rsp+5Ah] [rbp-Eh]
  int v19; // [rsp+5Ch] [rbp-Ch]
  void *retaddr; // [rsp+68h] [rbp+0h]
  FxSpinLock *pLock; // [rsp+78h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  v3 = 0LL;
  flags = (FxSpinLock *)(~SpinLock & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v5) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxSpinLock *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4132 )
  {
    pLock = flags;
  }
  else
  {
    pLock = 0LL;
    p_pLock = &pLock;
    v18 = v5;
    v19 = 0;
    v11 = flags->__vftable;
    v17 = 4132;
    if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pLock) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v12, v13, v14, traceGuid, (const void *)SpinLock, 0x1024u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, SpinLock, 0x1024uLL);
    }
    flags = pLock;
  }
  m_Globals = flags->m_Globals;
  if ( flags->m_InterruptLock )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 2u, 0xAu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( m_Globals->FxVerifierLock )
      v7 = retaddr;
    else
      v7 = 0LL;
    flags->m_Irql = KeAcquireSpinLockRaiseToDpc(&flags->m_SpinLock.m_Lock);
    m_ObjectSize = flags->m_ObjectSize;
    v9 = flags + 1;
    if ( m_ObjectSize != 128 )
      v3 = &v9->__vftable;
    if ( v3 )
    {
      v10 = (_QWORD *)v3[1];
      *v3 = KeGetCurrentThread();
      v10[1] = MEMORY[0xFFFFF78000000320];
      *v10 = v7;
    }
  }
}
