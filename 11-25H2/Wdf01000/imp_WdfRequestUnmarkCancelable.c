/*
 * XREFs of imp_WdfRequestUnmarkCancelable @ 0x1400575A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x140013630 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140083000 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DC714 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1400E3DA0 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 */

__int64 __fastcall imp_WdfRequestUnmarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        unsigned int a3)
{
  unsigned __int64 flags; // rbx
  FxIoQueue *v5; // rcx
  _FX_DRIVER_GLOBALS *v6; // rbp
  FxIoQueue *v7; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v9; // ebp
  _IRP *v10; // r8
  _FX_DRIVER_GLOBALS *v11; // r15
  _FX_DRIVER_GLOBALS *v12; // rdx
  _LIST_ENTRY *p_ListEntry; // rax
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *Blink; // rdx
  FxRequest_vtbl *v16; // rax
  FxRequest_vtbl *v18; // rax
  unsigned __int8 v19; // dl
  unsigned __int16 v20; // r9
  FxVerifierLock *v21; // rcx
  FxVerifierLock *v22; // rcx
  const void *v23; // rdx
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-38h] BYREF
  __int16 v26; // [rsp+58h] [rbp-30h]
  __int16 v27; // [rsp+5Ah] [rbp-2Eh]
  int v28; // [rsp+5Ch] [rbp-2Ch]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+A0h] [rbp+18h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  flags = ~Request & 0xFFFFFFFFFFFFFFF8uLL;
  v5 = 0LL;
  if ( (Request & 1) != 0 )
  {
    v5 = (FxIoQueue *)*(unsigned __int16 *)flags;
    flags -= (unsigned __int64)v5;
  }
  if ( *(_WORD *)(flags + 8) == 4104 )
  {
    pRequest = (FxRequest *)flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v27 = (__int16)v5;
    v28 = 0;
    v18 = *(FxRequest_vtbl **)flags;
    v26 = 4104;
    if ( v18->QueryInterface((FxObject *)flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v19,
        a3,
        v20,
        traceGuid,
        (const void *)Request,
        0x1008u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = (unsigned __int64)pRequest;
  }
  v6 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( *(_BYTE *)(flags + 214) || (v7 = *(FxIoQueue **)(flags + 248)) == 0LL )
  {
    WPP_IFR_SF_qd(v6, 2u, 0x10u, 0x53u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
    FxVerifierDbgBreakPoint(v6);
    return 3221225488LL;
  }
  else
  {
    m_Globals = v7->m_Globals;
    PreviousIrql = 0;
    if ( !m_Globals->FxVerifierOn
      || (v9 = FxIoQueue::Vf_VerifyRequestCancelable(v5, m_Globals, (FxRequest *)flags, 0), v9 >= 0) )
    {
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v21 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v21, &PreviousIrql, a3);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&v7->m_NPLock.m_Lock);
      }
      v11 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
      if ( !*(_QWORD *)(flags + 128) )
        goto LABEL_24;
      v12 = v7->m_DriverCancelable.m_LockObject->m_Globals;
      if ( v12->FxVerifierOn )
        FxIrpQueue::Vf_VerifyRemoveIrpFromQueueByContext(
          &v7->m_DriverCancelable,
          v12,
          (_IO_CSQ_IRP_CONTEXT *)(flags + 120));
      v10 = *(_IRP **)(flags + 128);
      if ( _InterlockedExchange64((volatile __int64 *)&v10->CancelRoutine, 0LL) )
      {
        p_ListEntry = &v10->Tail.Overlay.ListEntry;
        Flink = v10->Tail.Overlay.ListEntry.Flink;
        if ( (void **)Flink->Blink != &v10->Tail.CompletionKey + 6
          || (Blink = v10->Tail.Overlay.ListEntry.Blink, Blink->Flink != p_ListEntry) )
        {
          __fastfail(3u);
        }
        Blink->Flink = Flink;
        Flink->Blink = Blink;
        v10->Tail.Overlay.ListEntry.Blink = &v10->Tail.Overlay.ListEntry;
        p_ListEntry->Flink = p_ListEntry;
        --v7->m_DriverCancelable.m_RequestCount;
        *(_QWORD *)(flags + 128) = 0LL;
        v10->Tail.Overlay.DriverContext[3] = 0LL;
        if ( v11->FxVerifierOn && !*(_QWORD *)(flags + 224) )
        {
          v23 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !*(_WORD *)(flags + 10) )
            v23 = 0LL;
          WPP_IFR_SF_q(v11, 2u, 0x10u, 0x29u, WPP_FxRequest_cpp_Traceguids, v23);
          FxVerifierDbgBreakPoint(v11);
        }
        v16 = *(FxRequest_vtbl **)flags;
        *(_QWORD *)(flags + 224) = 0LL;
        v16->Release(
          (FxObject *)flags,
          (void *)1969583441,
          2030,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        v9 = 0;
        *(_QWORD *)(flags + 184) = 0LL;
      }
      else
      {
LABEL_24:
        v9 = -1073741536;
      }
      if ( SLOBYTE(v7->m_ObjectFlags) < 0
        && (v22 = *(FxVerifierLock **)&v7[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v22, PreviousIrql, (unsigned __int8)v10);
      }
      else
      {
        KeReleaseSpinLock(&v7->m_NPLock.m_Lock, PreviousIrql);
      }
      if ( m_Globals->FxVerifierOn )
      {
        if ( v9 >= 0 )
          FxRequestBase::ClearVerifierFlags((FxRequestBase *)flags, 16);
      }
    }
    return (unsigned int)v9;
  }
}
