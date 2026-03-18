/*
 * XREFs of imp_WdfRequestMarkCancelableEx @ 0x14002B930
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?ClearVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x140082FF0 (-ClearVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z @ 0x1400DC714 (-Vf_VerifyRequestCancelable@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@E@Z.c)
 *     ?Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z @ 0x1400DCE70 (-Vf_VerifyInsertIrpQueue@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxIrpQueue@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestMarkCancelableEx(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  FxRequest *flags; // rbx
  FxIoQueue *v6; // rcx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxIoQueue *m_IoQueue; // rdi
  _FX_DRIVER_GLOBALS *v9; // r14
  int inserted; // esi
  _FX_DRIVER_GLOBALS *v11; // rdx
  FxIrpQueue *p_m_DriverCancelable; // rbp
  unsigned int v13; // edx
  _IRP *m_Irp; // rdx
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v15; // rcx
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *p_ListEntry; // r8
  FxRequest_vtbl *v19; // rax
  unsigned __int8 v20; // dl
  unsigned __int16 v21; // r9
  FxVerifierLock *v22; // rcx
  FxTagTracker *Blink; // rcx
  FxVerifierLock *v24; // rcx
  _LIST_ENTRY *Flink; // r9
  _LIST_ENTRY *v26; // rax
  FxRequest_vtbl *v27; // rax
  unsigned __int8 v28; // dl
  const _GUID *RefType; // [rsp+20h] [rbp-68h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-38h] BYREF
  __int16 v31; // [rsp+58h] [rbp-30h]
  __int16 v32; // [rsp+5Ah] [rbp-2Eh]
  int v33; // [rsp+5Ch] [rbp-2Ch]
  void *retaddr; // [rsp+88h] [rbp+0h]
  unsigned __int8 PreviousIrql; // [rsp+98h] [rbp+10h] BYREF
  FxRequest *pRequest; // [rsp+A8h] [rbp+20h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  v6 = 0LL;
  if ( (Request & 1) != 0 )
  {
    v6 = (FxIoQueue *)LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - (__int64)v6);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v32 = (__int16)v6;
    v33 = 0;
    v19 = flags->__vftable;
    v31 = 4104;
    if ( v19->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v20,
        (unsigned int)EvtRequestCancel,
        v21,
        RefType,
        (const void *)Request,
        0x1008u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( !flags->m_Completed )
  {
    m_IoQueue = flags->m_IoQueue;
    if ( m_IoQueue )
    {
      v9 = m_IoQueue->m_Globals;
      PreviousIrql = 0;
      if ( v9->FxVerifierOn )
      {
        inserted = FxIoQueue::Vf_VerifyRequestCancelable(v6, v9, flags, 1u);
        if ( inserted < 0 )
          return (unsigned int)inserted;
        if ( v9->FxVerifierOn )
          FxRequestBase::SetVerifierFlags(flags, 16);
      }
      if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
        && (v22 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Lock(v22, &PreviousIrql, (unsigned __int8)EvtRequestCancel);
      }
      else
      {
        PreviousIrql = KeAcquireSpinLockRaiseToDpc(&m_IoQueue->m_NPLock.m_Lock);
      }
      flags->m_CancelRoutine.m_Cancel = EvtRequestCancel;
      if ( m_IoQueue->m_CancelDispatchedRequests )
      {
        inserted = -1073741536;
        goto LABEL_48;
      }
      v11 = flags->m_Globals;
      p_m_DriverCancelable = &m_IoQueue->m_DriverCancelable;
      if ( v11->FxVerifierOn )
      {
        inserted = FxRequest::Vf_VerifyInsertIrpQueue(flags, v11, &m_IoQueue->m_DriverCancelable);
        if ( inserted < 0 )
        {
LABEL_48:
          v28 = PreviousIrql;
          flags->m_CancelRoutine.m_Cancel = 0LL;
          FxNonPagedObject::Unlock(m_IoQueue, v28);
          if ( v9->FxVerifierOn )
            FxRequestBase::ClearVerifierFlags(flags, 16);
          return (unsigned int)inserted;
        }
      }
      v13 = _InterlockedIncrement(&flags->m_Refcnt);
      if ( SLOBYTE(flags->m_ObjectFlags) < 0 )
      {
        Blink = (FxTagTracker *)flags[-1].m_OwnerListEntry2.Blink;
        if ( Blink )
          FxTagTracker::UpdateTagHistory(
            Blink,
            (void *)0x75657551,
            1900,
            "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
            TagAddRef,
            v13);
      }
      m_Irp = flags->m_Irp.m_Irp;
      v15 = &flags->120;
      flags->m_IrpQueue = p_m_DriverCancelable;
      if ( flags == (FxRequest *)-120LL )
      {
        m_Irp->Tail.Overlay.DriverContext[3] = p_m_DriverCancelable;
      }
      else
      {
        m_Irp->Tail.Overlay.DriverContext[3] = v15;
        flags->m_CsqContext.Irp = m_Irp;
        flags->m_CsqContext.Csq = (_IO_CSQ *)p_m_DriverCancelable;
        v15->m_CsqContext.Type = 1;
      }
      v16 = m_IoQueue->m_DriverCancelable.m_Queue.Blink;
      p_ListEntry = &m_Irp->Tail.Overlay.ListEntry;
      if ( (FxIrpQueue *)v16->Flink == p_m_DriverCancelable )
      {
        m_Irp->Tail.Overlay.ListEntry.Blink = v16;
        p_ListEntry->Flink = &p_m_DriverCancelable->m_Queue;
        v16->Flink = p_ListEntry;
        m_IoQueue->m_DriverCancelable.m_Queue.Blink = p_ListEntry;
        ++m_IoQueue->m_DriverCancelable.m_RequestCount;
        m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        _InterlockedExchange64(
          (volatile __int64 *)&m_Irp->CancelRoutine,
          (__int64)FxIrpQueue::_WdmCancelRoutineInternal);
        if ( !m_Irp->Cancel || !_InterlockedExchange64((volatile __int64 *)&m_Irp->CancelRoutine, 0LL) )
        {
          inserted = 0;
          goto LABEL_24;
        }
        Flink = p_ListEntry->Flink;
        if ( p_ListEntry->Flink->Blink == p_ListEntry )
        {
          v26 = m_Irp->Tail.Overlay.ListEntry.Blink;
          if ( v26->Flink == p_ListEntry )
          {
            v26->Flink = Flink;
            Flink->Blink = v26;
            m_Irp->Tail.Overlay.ListEntry.Blink = &m_Irp->Tail.Overlay.ListEntry;
            p_ListEntry->Flink = p_ListEntry;
            --m_IoQueue->m_DriverCancelable.m_RequestCount;
            if ( flags != (FxRequest *)-120LL )
              flags->m_CsqContext.Irp = 0LL;
            m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
            v27 = flags->__vftable;
            flags->m_IrpQueue = 0LL;
            inserted = -1073741536;
            v27->Release(flags, (void *)1969583441, 1916, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
LABEL_24:
            if ( inserted >= 0 )
            {
              if ( SLOBYTE(m_IoQueue->m_ObjectFlags) < 0
                && (v24 = *(FxVerifierLock **)&m_IoQueue[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
              {
                FxVerifierLock::Unlock(v24, PreviousIrql, (unsigned __int8)p_ListEntry);
              }
              else
              {
                KeReleaseSpinLock(&m_IoQueue->m_NPLock.m_Lock, PreviousIrql);
              }
              return (unsigned int)inserted;
            }
            goto LABEL_48;
          }
        }
      }
      __fastfail(3u);
    }
  }
  WPP_IFR_SF_qd(m_Globals, 2u, 0x10u, 0x51u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
  FxVerifierDbgBreakPoint(m_Globals);
  return 3221225488LL;
}
