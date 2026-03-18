/*
 * XREFs of imp_WdfInterruptAcquireLock @ 0x140053AC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfInterruptAcquireLock(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  unsigned __int64 flags; // rbx
  __int64 v4; // rcx
  struct _KINTERRUPT *v5; // rcx
  FxInterrupt_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  FxWaitLock *m_WaitLock; // rbx
  const void *v11; // rcx
  const _GUID *Timeout; // [rsp+20h] [rbp-48h]
  FxInterrupt **p_pFxInterrupt; // [rsp+50h] [rbp-18h] BYREF
  __int16 v14; // [rsp+58h] [rbp-10h]
  __int16 v15; // [rsp+5Ah] [rbp-Eh]
  int v16; // [rsp+5Ch] [rbp-Ch]
  FxInterrupt *pFxInterrupt; // [rsp+78h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  flags = ~Interrupt & 0xFFFFFFFFFFFFFFF8uLL;
  LOWORD(v4) = 0;
  if ( (Interrupt & 1) != 0 )
  {
    v4 = *(unsigned __int16 *)flags;
    flags -= v4;
  }
  if ( *(_WORD *)(flags + 8) == 4135 )
  {
    pFxInterrupt = (FxInterrupt *)flags;
  }
  else
  {
    pFxInterrupt = 0LL;
    p_pFxInterrupt = &pFxInterrupt;
    v15 = v4;
    v16 = 0;
    v6 = *(FxInterrupt_vtbl **)flags;
    v14 = 4135;
    if ( v6->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pFxInterrupt) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v7,
        v8,
        v9,
        Timeout,
        (const void *)Interrupt,
        0x1027u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Interrupt, 0x1027uLL);
    }
    flags = (unsigned __int64)pFxInterrupt;
  }
  if ( !*(_BYTE *)(flags + 258) )
    goto LABEL_7;
  if ( (int)FxVerifierCheckIrqlLevel(*(_FX_DRIVER_GLOBALS **)(flags + 16), 0) < 0 )
    return;
  flags = (unsigned __int64)pFxInterrupt;
  if ( pFxInterrupt->m_PassiveHandling )
  {
    m_WaitLock = pFxInterrupt->m_WaitLock;
    KeEnterCriticalRegion();
    if ( KeWaitForSingleObject(&m_WaitLock->FxWaitLockInternal, Executive, 0, 0, 0LL) == 258 )
      KeLeaveCriticalRegion();
    else
      m_WaitLock->m_OwningThread = KeGetCurrentThread();
  }
  else
  {
LABEL_7:
    v5 = *(struct _KINTERRUPT **)(flags + 128);
    if ( v5 || (v5 = *(struct _KINTERRUPT **)(flags + 424)) != 0LL )
    {
      *(_BYTE *)(flags + 144) = KeAcquireInterruptSpinLock(v5);
    }
    else
    {
      v11 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !*(_WORD *)(flags + 10) )
        v11 = 0LL;
      WPP_IFR_SF_q(*(_FX_DRIVER_GLOBALS **)(flags + 16), 2u, 0xCu, 0x1Cu, WPP_InterruptObject_cpp_Traceguids, v11);
      FxVerifierDbgBreakPoint(*(_FX_DRIVER_GLOBALS **)(flags + 16));
      *(_BYTE *)(flags + 144) = KeGetCurrentIrql();
    }
  }
}
