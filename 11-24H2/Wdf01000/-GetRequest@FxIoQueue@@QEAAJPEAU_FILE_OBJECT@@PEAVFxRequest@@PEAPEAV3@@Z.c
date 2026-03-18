/*
 * XREFs of ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x140015A20
 * Callers:
 *     imp_WdfIoQueueRetrieveNextRequest @ 0x1400158C0 (imp_WdfIoQueueRetrieveNextRequest.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1400374F0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfIoQueueRetrieveRequestByFileObject @ 0x140069770 (imp_WdfIoQueueRetrieveRequestByFileObject.c)
 *     imp_WdfIoQueueRetrieveFoundRequest @ 0x14006FFF0 (imp_WdfIoQueueRetrieveFoundRequest.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x14002BDA8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x14002C4F0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?CompleteWithInformation@FxRequest@@QEAAJJ_K@Z @ 0x14003D0CC (-CompleteWithInformation@FxRequest@@QEAAJJ_K@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x14004CCC0 (-RemoveIrpFromQueueByContext@FxIrpQueue@@AEAAPEAU_IRP@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140056F48 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400DC97C (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1400E3FC4 (-Vf_VerifyGetRequestRestoreFlags@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 */

int __fastcall FxIoQueue::GetRequest(
        FxIoQueue *this,
        _FILE_OBJECT *FileObject,
        FxRequest *TagRequest,
        FxRequest **pOutRequest)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  int result; // eax
  unsigned __int64 *p_m_Lock; // rdi
  unsigned __int8 v10; // si
  FxIrpQueue *v11; // r8
  FxVerifierLock **p_m_DbgFlagIsInitialized; // r15
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v13; // rdi
  FxIrpQueue *p_m_Queue; // r9
  FxIrpQueue *Flink; // rdx
  int *i; // rax
  _LIST_ENTRY *v17; // rdx
  __int64 v18; // rcx
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *v20; // rax
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v21; // rdi
  _LIST_ENTRY *v22; // rax
  unsigned __int8 v23; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _LIST_ENTRY *v25; // rax
  _LIST_ENTRY *Blink; // rdx
  _FX_DRIVER_GLOBALS *v27; // rdx
  FxTagTracker *v28; // rcx
  char v29; // al
  _LIST_ENTRY *v30; // rax
  const void *_a1; // rcx
  unsigned __int8 v32; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *v34; // rbx
  int v35; // edi
  const void *_a2; // rcx
  const void *v37; // rax
  unsigned __int8 v38; // r8
  KIRQL v39; // al
  FxVerifierLock *v40; // rcx
  FxVerifierLock *v41; // rcx
  FxVerifierLock *v42; // rcx
  const void *v43; // rdx
  char Type; // al
  unsigned __int8 v45; // r15
  const void *v46; // rcx
  FxVerifierLock *Irp; // rcx
  FxVerifierLock *v48; // rcx
  const void *v49; // rcx
  const void *v50; // rax
  unsigned __int8 PreviousIrql[8]; // [rsp+40h] [rbp-48h] BYREF
  $D26A3A2066A8AC2BFBF5167DE33ED1ED *v52; // [rsp+48h] [rbp-40h]
  unsigned __int8 irql; // [rsp+90h] [rbp+8h] BYREF
  FxRequest **v54; // [rsp+A8h] [rbp+20h]

  v54 = pOutRequest;
  m_Globals = this->m_Globals;
  irql = 0;
  if ( m_Globals->FxVerifierOn )
  {
    result = FxIoQueue::Vf_VerifyGetRequestUpdateFlags(this, m_Globals, TagRequest);
    if ( result < 0 )
      return result;
  }
  if ( ((this->m_Type - 1) & 0xFFFFFFFD) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    v34 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v34 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Au, WPP_FxIoQueue_cpp_Traceguids, v34, -1073741436);
    return -1073741436;
  }
  else
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0
      && (v40 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
          p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized,
          v40) )
    {
      FxVerifierLock::Lock(v40, &irql, (unsigned __int8)TagRequest);
      v10 = irql;
      p_m_Lock = &this->m_NPLock.m_Lock;
    }
    else
    {
      p_m_Lock = &this->m_NPLock.m_Lock;
      v10 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v10;
      p_m_DbgFlagIsInitialized = (FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized;
    }
    if ( this->m_PowerState == FxIoQueuePowerOff )
    {
      v43 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v43 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Bu, WPP_FxIoQueue_cpp_Traceguids, v43, -1071644157);
      FxNonPagedObject::Unlock(this, v10);
      return -1071644157;
    }
    else
    {
      if ( (this->m_QueueState & 2) == 0 )
      {
        _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          _a1 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x1Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1071644157);
        if ( SLOBYTE(this->m_ObjectFlags) < 0 )
        {
          if ( *p_m_DbgFlagIsInitialized )
          {
            FxVerifierLock::Unlock(*p_m_DbgFlagIsInitialized, v10, v32);
            return -1071644157;
          }
          p_m_Lock = &this->m_NPLock.m_Lock;
        }
        KeReleaseSpinLock(p_m_Lock, v10);
        return -1071644157;
      }
      v13 = &TagRequest->120;
      if ( !TagRequest )
        v13 = 0LL;
      v52 = v13;
      while ( 1 )
      {
        p_m_Queue = &this->m_Queue;
        if ( v13 )
          break;
        Flink = (FxIrpQueue *)p_m_Queue->m_Queue.Flink;
        for ( i = 0LL; Flink != p_m_Queue; i = 0LL )
        {
          i = &Flink[-5].m_RequestCount;
          if ( !FileObject )
            break;
          if ( *(_FILE_OBJECT **)(*((_QWORD *)i + 23) + 48LL) == FileObject )
            break;
          Flink = (FxIrpQueue *)Flink->m_Queue.Flink;
        }
        while ( 1 )
        {
          if ( !i )
          {
            v10 = irql;
            v35 = -2147483622;
            goto LABEL_50;
          }
          v17 = (_LIST_ENTRY *)(i + 42);
          v18 = _InterlockedExchange64((volatile __int64 *)i + 13, 0LL);
          v11 = (FxIrpQueue *)*((_QWORD *)i + 21);
          if ( v18 )
            break;
          for ( i = 0LL; v11 != p_m_Queue; i = 0LL )
          {
            i = &v11[-5].m_RequestCount;
            if ( !FileObject )
              break;
            if ( *(_FILE_OBJECT **)(*((_QWORD *)i + 23) + 48LL) == FileObject )
              break;
            v11 = (FxIrpQueue *)v11->m_Queue.Flink;
          }
        }
        if ( v11->m_Queue.Blink != v17 )
          goto LABEL_82;
        v19 = (_LIST_ENTRY *)*((_QWORD *)i + 22);
        if ( v19->Flink != v17 )
          goto LABEL_82;
        v19->Flink = &v11->m_Queue;
        v11->m_Queue.Blink = v19;
        *((_QWORD *)i + 22) = i + 42;
        v17->Flink = v17;
        --this->m_Queue.m_RequestCount;
        v13 = ($D26A3A2066A8AC2BFBF5167DE33ED1ED *)*((_QWORD *)i + 18);
        if ( v13->m_CsqContext.Type == 1 )
          v13->m_CsqContext.Irp = 0LL;
        v10 = irql;
        *((_QWORD *)i + 18) = 0LL;
LABEL_21:
        v20 = v13[-5].m_ListEntry.Flink;
        v21 = v13 - 5;
        v22 = v20[1].Flink;
        v21[9].m_CsqContext.Irp = 0LL;
        ((void (__fastcall *)($D26A3A2066A8AC2BFBF5167DE33ED1ED *, __int64, __int64, const char *))v22)(
          v21,
          1969583441LL,
          2102LL,
          "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
        if ( this->m_AllowZeroLengthRequests )
          goto LABEL_25;
        if ( BYTE1(v21->m_CsqContext.Csq[5].CsqInsertIrp) )
        {
          Type = v21[1].m_CsqContext.Type;
          PreviousIrql[0] = 0;
          if ( Type < 0 && (Irp = (FxVerifierLock *)v21[-2].m_CsqContext.Irp) != 0LL )
          {
            FxVerifierLock::Lock(Irp, PreviousIrql, v23);
            v45 = PreviousIrql[0];
          }
          else
          {
            v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v21[4].m_CsqContext.Csq);
            PreviousIrql[0] = v45;
          }
          FxRequest::VerifyRequestIsNotCompleted((FxRequest *)v21, (_FX_DRIVER_GLOBALS *)v21->m_CsqContext.Csq);
          FxNonPagedObject::Unlock((FxNonPagedObject *)v21, v45);
        }
        CurrentStackLocation = v21[6].m_CsqContext.Irp->Tail.Overlay.CurrentStackLocation;
        if ( CurrentStackLocation->MajorFunction != 3 )
        {
          if ( CurrentStackLocation->MajorFunction == 4 && !CurrentStackLocation->Parameters.Read.Length )
          {
            FxNonPagedObject::Unlock(this, v10);
            if ( m_Globals->FxVerboseOn )
            {
              v49 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !this->m_ObjectSize )
                v49 = 0LL;
              if ( WORD1(v21->m_ListEntry.Blink) )
                v50 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v50 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Eu, WPP_FxIoQueue_cpp_Traceguids, v50, v49);
            }
            FxRequest::CompleteWithInformation((FxRequest *)v21, 0, 0LL);
            ((void (__fastcall *)($D26A3A2066A8AC2BFBF5167DE33ED1ED *, __int64, __int64, const char *))v21->m_ListEntry.Flink[1].Flink)(
              v21,
              1886220099LL,
              1139LL,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            FxNonPagedObject::Lock(this, &irql);
            v10 = irql;
            v13 = v52;
            continue;
          }
LABEL_25:
          ++this->m_DriverIoCount;
          v25 = &v21[12].m_ListEntry + 1;
          Blink = this->m_DriverOwned.Blink;
          if ( Blink->Flink == &this->m_DriverOwned )
          {
            v25->Flink = &this->m_DriverOwned;
            v21[13].m_ListEntry.Flink = Blink;
            Blink->Flink = v25;
            this->m_DriverOwned.Blink = v25;
            if ( SLOBYTE(this->m_ObjectFlags) < 0
              && (v41 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
            {
              FxVerifierLock::Unlock(v41, irql, v23);
            }
            else
            {
              KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
            }
            if ( *((_BYTE *)&v21[8].m_ListEntry + 22) )
            {
              v46 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v21->m_ListEntry.Blink) )
                v46 = 0LL;
              WPP_IFR_SF_q(
                (_FX_DRIVER_GLOBALS *)v21->m_CsqContext.Csq,
                2u,
                0x10u,
                0x27u,
                WPP_FxRequest_cpp_Traceguids,
                v46);
              FxVerifierDbgBreakPoint((_FX_DRIVER_GLOBALS *)v21->m_CsqContext.Csq);
            }
            else
            {
              v29 = *((_BYTE *)&v21[9].m_ListEntry + 21);
              *((_BYTE *)&v21[9].m_ListEntry + 21) = 1;
              if ( !v29 )
              {
                v27 = (_FX_DRIVER_GLOBALS *)(unsigned int)_InterlockedIncrement((volatile signed __int32 *)&v21->m_ListEntry.Blink + 1);
                if ( SLOBYTE(v21[1].m_CsqContext.Type) < 0 )
                {
                  v28 = (FxTagTracker *)v21[-2].m_ListEntry.Flink;
                  if ( v28 )
                    FxTagTracker::UpdateTagHistory(
                      v28,
                      (void *)0x74617453,
                      1820,
                      "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp",
                      TagAddRef,
                      (unsigned int)v27);
                }
              }
            }
            if ( m_Globals->FxVerifierOn )
              FxIoQueue::Vf_VerifyGetRequestRestoreFlags((FxIoQueue *)v28, v27, (FxRequest *)v21);
            v30 = v21->m_ListEntry.Flink;
            *((_BYTE *)&v21[14].m_ListEntry + 16) = 1;
            ((void (__fastcall *)($D26A3A2066A8AC2BFBF5167DE33ED1ED *, __int64, __int64, const char *))v30[1].Flink)(
              v21,
              1952543827LL,
              1193LL,
              "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
            *v54 = (FxRequest *)v21;
            return 0;
          }
LABEL_82:
          __fastfail(3u);
        }
        if ( CurrentStackLocation->Parameters.Read.Length )
          goto LABEL_25;
        FxNonPagedObject::Unlock(this, v10);
        if ( m_Globals->FxVerboseOn )
        {
          _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !this->m_ObjectSize )
            _a2 = 0LL;
          if ( WORD1(v21->m_ListEntry.Blink) )
            v37 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v37 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xDu, 0x1Du, WPP_FxIoQueue_cpp_Traceguids, v37, _a2);
        }
        FxRequest::CompleteWithInformation((FxRequest *)v21, 0, 0LL);
        ((void (__fastcall *)($D26A3A2066A8AC2BFBF5167DE33ED1ED *, __int64, __int64, const char *))v21->m_ListEntry.Flink[1].Flink)(
          v21,
          1886220099LL,
          1123LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
        if ( SLOBYTE(this->m_ObjectFlags) < 0
          && (v48 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
        {
          FxVerifierLock::Lock(v48, &irql, v38);
          v10 = irql;
          v13 = v52;
        }
        else
        {
          v39 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          v13 = v52;
          v10 = v39;
          irql = v39;
        }
      }
      if ( FxIrpQueue::RemoveIrpFromQueueByContext(&this->m_Queue, &v13->m_CsqContext) )
        goto LABEL_21;
      v35 = -1073741275;
LABEL_50:
      if ( v35 == -2147483622 && !FileObject && !TagRequest && this->m_Queue.m_RequestCount > 0 )
        this->m_ForceTransitionFromEmptyWhenAddingNewRequest = 1;
      if ( SLOBYTE(this->m_ObjectFlags) < 0
        && (v42 = *(FxVerifierLock **)&this[-1].m_PowerIdle.m_DbgFlagIsInitialized) != 0LL )
      {
        FxVerifierLock::Unlock(v42, v10, (unsigned __int8)v11);
        return v35;
      }
      else
      {
        KeReleaseSpinLock(&this->m_NPLock.m_Lock, v10);
        return v35;
      }
    }
  }
}
