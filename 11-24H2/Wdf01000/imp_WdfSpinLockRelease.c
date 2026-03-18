/*
 * XREFs of imp_WdfSpinLockRelease @ 0x140016970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qqq @ 0x140041538 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfSpinLockRelease(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 SpinLock)
{
  unsigned __int64 flags; // rbx
  __int64 v4; // rcx
  _FX_DRIVER_GLOBALS *v5; // rsi
  unsigned __int16 v6; // cx
  FxSpinLock *v7; // rdx
  FxSpinLock_vtbl *v8; // rax
  unsigned __int8 v9; // dl
  unsigned int v10; // r8d
  unsigned __int16 v11; // r9
  struct _KTHREAD *v12; // r8
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v14; // rdi
  const void *v15; // rax
  const void *v16; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxSpinLock **p_pLock; // [rsp+50h] [rbp-18h] BYREF
  __int16 v19; // [rsp+58h] [rbp-10h]
  __int16 v20; // [rsp+5Ah] [rbp-Eh]
  int v21; // [rsp+5Ch] [rbp-Ch]
  FxSpinLock *pLock; // [rsp+78h] [rbp+10h] BYREF

  if ( !SpinLock )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1024uLL);
  flags = ~SpinLock & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v4) = 0;
  if ( (SpinLock & 1) != 0 )
  {
    v4 = *(unsigned __int16 *)flags;
    flags -= v4;
  }
  if ( *(_WORD *)(flags + 8) == 4132 )
  {
    pLock = (FxSpinLock *)flags;
  }
  else
  {
    pLock = 0LL;
    p_pLock = &pLock;
    v20 = v4;
    v21 = 0;
    v8 = *(FxSpinLock_vtbl **)flags;
    v19 = 4132;
    if ( v8->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pLock) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v9,
        v10,
        v11,
        traceGuid,
        (const void *)SpinLock,
        0x1024u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, SpinLock, 0x1024uLL);
    }
    flags = (unsigned __int64)pLock;
  }
  v5 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( *(_BYTE *)(flags + 121) )
  {
    WPP_IFR_SF_q(v5, 2u, 2u, 0xBu, WPP_FxSpinLockAPI_cpp_Traceguids, (const void *)SpinLock);
    FxVerifierDbgBreakPoint(v5);
  }
  else
  {
    v6 = *(_WORD *)(flags + 10);
    v7 = 0LL;
    if ( v6 != 128 )
      v7 = (FxSpinLock *)(flags + 128);
    if ( v7 )
    {
      v12 = (struct _KTHREAD *)v7->__vftable;
      if ( (struct _KTHREAD *)v7->__vftable != KeGetCurrentThread() )
      {
        CurrentThread = KeGetCurrentThread();
        if ( v12 )
        {
          v16 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v6 )
            v16 = 0LL;
          WPP_IFR_SF_qqq(v5, 2u, 2u, 0xBu, WPP_FxSpinLock_cpp_Traceguids, v16, CurrentThread, v12);
          v14 = flags ^ 0xFFFFFFFFFFFFFFF8uLL;
        }
        else
        {
          v14 = flags ^ 0xFFFFFFFFFFFFFFF8uLL;
          v15 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v6 )
            v15 = 0LL;
          WPP_IFR_SF_qq(v5, 2u, 2u, 0xAu, WPP_FxSpinLock_cpp_Traceguids, v15, CurrentThread);
        }
        if ( !*(_WORD *)(flags + 10) )
          v14 = 0LL;
        FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_LOCK_OPERATION, v14, 1uLL);
      }
      *(_QWORD *)(*(_QWORD *)&v7->m_Type + 16LL) = MEMORY[0xFFFFF78000000320]
                                                 - *(_QWORD *)(*(_QWORD *)&v7->m_Type + 8LL);
      *(_QWORD *)&v7->m_Type += 24LL;
      if ( *(_QWORD *)&v7->m_Type >= (unsigned __int64)&v7[2] )
        *(_QWORD *)&v7->m_Type = &v7->m_Globals;
      v7->__vftable = 0LL;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(flags + 112), *(_BYTE *)(flags + 120));
  }
}
