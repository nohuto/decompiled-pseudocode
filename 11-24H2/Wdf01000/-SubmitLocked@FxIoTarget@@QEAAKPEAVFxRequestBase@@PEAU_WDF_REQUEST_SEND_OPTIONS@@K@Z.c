/*
 * XREFs of ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000B350
 * Callers:
 *     ?Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x14000A770 (-Submit@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     imp_WdfRequestSend @ 0x14000A850 (imp_WdfRequestSend.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14001E6C8 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 * Callees:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x14000728C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?CreateTimer@FxRequestBase@@QEAAJXZ @ 0x140011D40 (-CreateTimer@FxRequestBase@@QEAAJXZ.c)
 *     WPP_IFR_SF_qd @ 0x140016210 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x140049FC8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z @ 0x140063C10 (-StartWithReturn@MxTimer@@QEAAET_LARGE_INTEGER@@K@Z.c)
 *     ?SetVerifierFlags@FxRequestBase@@QEAAXF@Z @ 0x14007BBF4 (-SetVerifierFlags@FxRequestBase@@QEAAXF@Z.c)
 *     WPP_IFR_SF_qLqd @ 0x14007EF14 (WPP_IFR_SF_qLqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z @ 0x14008376C (-PendRequestLocked@FxIoTarget@@IEAAJPEAVFxRequestBase@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     ?Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z @ 0x1400E4014 (-Vf_VerifySubmitLocked@FxIoTarget@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequestBase@@@Z.c)
 */

__int64 __fastcall FxIoTarget::SubmitLocked(
        FxIoTarget *this,
        unsigned __int64 Request,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        int Flags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  _WDF_IO_TARGET_STATE v5; // r13d
  char v6; // bp
  char v7; // r15
  _WDF_IO_TARGET_STATE m_State; // esi
  _WDF_REQUEST_SEND_OPTIONS *v10; // rax
  unsigned __int64 v11; // rbx
  _WDF_IO_TARGET_STATE _a3; // r8d
  int v14; // r12d
  unsigned int v15; // edx
  _LIST_ENTRY *v16; // rax
  _LIST_ENTRY *p_m_IgnoredIoListHead; // rcx
  _LIST_ENTRY *Blink; // rdx
  int v19; // r12d
  char v20; // al
  unsigned __int64 v21; // rbp
  MxTimer *v22; // r10
  __int64 Timeout; // rdx
  int v25; // eax
  unsigned __int64 v26; // rcx
  const void *v27; // rdx
  const void *v28; // rcx
  FxTagTracker *v29; // rcx
  _IO_STACK_LOCATION *v30; // rcx
  unsigned __int64 v31; // rcx
  const void *v32; // rdx
  const void *v33; // rcx
  unsigned __int16 *v34; // rdi
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // rax
  const void *v37; // rax
  unsigned __int64 v38; // rcx
  const void *v39; // rdx
  const void *v40; // rax
  unsigned __int64 v41; // rcx
  const void *v42; // rdx
  const void *v43; // rcx
  unsigned __int64 v44; // rax
  const void *v45; // rax
  int v46; // [rsp+50h] [rbp-48h]
  int Timer; // [rsp+50h] [rbp-48h]
  signed int v48; // [rsp+50h] [rbp-48h]
  char v49; // [rsp+A0h] [rbp+8h]
  char v50; // [rsp+A8h] [rbp+10h]

  m_Globals = this->m_Globals;
  v5 = WdfIoTargetStateUndefined;
  v6 = 0;
  v7 = 0;
  m_State = WdfIoTargetStateUndefined;
  v10 = Options;
  v49 = 0;
  v11 = Request;
  if ( *(_DWORD *)(Request + 208) )
  {
    v34 = (unsigned __int16 *)(Request + 10);
    v35 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    v36 = Request ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(Request + 10) )
      v36 = 0LL;
    if ( v36 )
      v11 = v36;
    WPP_IFR_SF_q(m_Globals, 2u, 0xEu, 0x1Du, WPP_FxIoTarget_cpp_Traceguids, (const void *)v11);
    if ( !*v34 )
      v35 = 0LL;
    FxVerifierBugCheckWorker(m_Globals, WDF_REQUEST_FATAL_ERROR, 3uLL, v35);
  }
  if ( m_Globals->FxVerifierOn && m_Globals->FxVerifierIO )
  {
    v50 = 1;
    v25 = FxIoTarget::Vf_VerifySubmitLocked(this, m_Globals, (FxRequestBase *)Request);
    if ( v25 < 0 )
    {
      v19 = v25;
      goto LABEL_30;
    }
    v10 = Options;
  }
  else
  {
    v50 = 0;
  }
  if ( (Flags & 1) != 0 && v10->Timeout )
  {
    Timer = FxRequestBase::CreateTimer((FxRequestBase *)v11);
    if ( Timer < 0 )
    {
      v37 = (const void *)v11;
      v38 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !*(_WORD *)(v11 + 10) )
        v38 = 0LL;
      if ( v38 )
        v37 = (const void *)v38;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xEu, 0x1Eu, WPP_FxIoTarget_cpp_Traceguids, v37, Timer);
      v19 = Timer;
      goto LABEL_30;
    }
    v49 = 1;
  }
  _a3 = this->m_State;
  if ( (Flags & 4) != 0 )
  {
    if ( (unsigned int)(_a3 - 3) > 2 || this->m_Removing )
    {
      m_State = WdfIoTargetStarted;
      v26 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
      v27 = (const void *)v11;
      if ( !*(_WORD *)(v11 + 10) )
        v26 = 0LL;
      if ( v26 )
        v27 = (const void *)v26;
      v28 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v28 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 4u, 0xEu, 0x20u, WPP_FxIoTarget_cpp_Traceguids, v28, v27, _a3);
      *(_BYTE *)(v11 + 212) |= 0x10u;
      v6 = 1;
      goto LABEL_8;
    }
    v31 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    v32 = (const void *)v11;
    if ( !*(_WORD *)(v11 + 10) )
      v31 = 0LL;
    if ( v31 )
      v32 = (const void *)v31;
    v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      v33 = 0LL;
    WPP_IFR_SF_qLqd(m_Globals, 4u, 0xEu, 0x1Fu, WPP_FxIoTarget_cpp_Traceguids, v33, _a3, v32, -1073741436);
    v19 = -1073741436;
LABEL_30:
    m_State &= ~1u;
    *(_DWORD *)(*(_QWORD *)(v11 + 152) + 48LL) = v19;
    if ( !v7 )
      return (unsigned int)m_State;
    goto LABEL_24;
  }
  if ( _a3 == WdfIoTargetStarted )
  {
    m_State = WdfIoTargetStarted;
LABEL_8:
    v14 = 1;
    v46 = 0;
    goto LABEL_9;
  }
  if ( _a3 != WdfIoTargetStopped )
  {
    v39 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v40 = (const void *)v11;
    if ( !this->m_ObjectSize )
      v39 = 0LL;
    v41 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(v11 + 10) )
      v41 = 0LL;
    if ( v41 )
      v40 = (const void *)v41;
    WPP_IFR_SF_qqd(m_Globals, 2u, 0xEu, 0x21u, WPP_FxIoTarget_cpp_Traceguids, v40, v39, _a3);
    v19 = -1073741436;
    goto LABEL_30;
  }
  if ( Flags < 0 )
  {
    v19 = -1073741436;
    goto LABEL_30;
  }
  v46 = 1075838976;
  m_State = this->m_State;
  v14 = 0;
LABEL_9:
  *(_QWORD *)(v11 + 128) = v11 + 120;
  *(_QWORD *)(v11 + 120) = v11 + 120;
  *(_QWORD *)(v11 + 160) = this;
  _InterlockedIncrement(&this->m_IoCount);
  v15 = _InterlockedIncrement((volatile signed __int32 *)(v11 + 12));
  if ( *(char *)(v11 + 24) < 0 )
  {
    v29 = *(FxTagTracker **)(v11 - 48);
    if ( v29 )
      FxTagTracker::UpdateTagHistory(
        v29,
        this,
        1472,
        "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp",
        TagAddRef,
        v15);
  }
  v7 = 1;
  *(_DWORD *)(v11 + 208) = 1;
  if ( *(_BYTE *)(v11 + 215) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 208), 0xFFFFFFFF) == 1 )
      m_State = WdfIoTargetStateUndefined;
    else
      m_State |= 2u;
    v19 = -1073741536;
    goto LABEL_30;
  }
  if ( v14 )
  {
    v16 = (_LIST_ENTRY *)(v11 + 120);
    if ( v6 )
    {
      p_m_IgnoredIoListHead = &this->m_IgnoredIoListHead;
      Blink = this->m_IgnoredIoListHead.Blink;
      if ( Blink->Flink == &this->m_IgnoredIoListHead )
        goto LABEL_14;
    }
    else
    {
      p_m_IgnoredIoListHead = &this->m_SentIoListHead;
      Blink = this->m_SentIoListHead.Blink;
      if ( Blink->Flink == &this->m_SentIoListHead )
      {
LABEL_14:
        v16->Flink = p_m_IgnoredIoListHead;
        *(_QWORD *)(v11 + 128) = Blink;
        Blink->Flink = v16;
        p_m_IgnoredIoListHead->Blink = v16;
        if ( IoSetCompletionRoutineEx(
               this->m_InStackDevice,
               *(PIRP *)(v11 + 152),
               FxIoTarget::_RequestCompletionRoutine,
               (PVOID)v11,
               1u,
               1u,
               1u) < 0 )
        {
          v30 = *(_IO_STACK_LOCATION **)(*(_QWORD *)(v11 + 152) + 184LL);
          v30[-1].CompletionRoutine = FxIoTarget::_RequestCompletionRoutine;
          v30[-1].Context = (void *)v11;
          v30[-1].Control = -32;
        }
        v19 = v46;
        v20 = v49;
        v21 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
        goto LABEL_17;
      }
    }
    __fastfail(3u);
  }
  v48 = FxIoTarget::PendRequestLocked(this, (FxRequestBase *)v11);
  v42 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v43 = (const void *)v11;
  if ( !this->m_ObjectSize )
    v42 = 0LL;
  v21 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
  v44 = v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_WORD *)(v11 + 10) )
    v44 = 0LL;
  if ( v44 )
    v43 = (const void *)v44;
  WPP_IFR_SF_qqd(m_Globals, 4u, 0xEu, 0x22u, WPP_FxIoTarget_cpp_Traceguids, v43, v42, v48);
  v19 = v48;
  v20 = v49;
  if ( v48 < 0 )
  {
    if ( _InterlockedAdd((volatile signed __int32 *)(v11 + 208), 0xFFFFFFFF) )
      v5 = m_State;
    m_State = v5;
    goto LABEL_30;
  }
LABEL_17:
  if ( v20 )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v45 = (const void *)v11;
      if ( !*(_WORD *)(v11 + 10) )
        v21 = 0LL;
      if ( v21 )
        v45 = (const void *)v21;
      WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x23u, WPP_FxIoTarget_cpp_Traceguids, v45);
    }
    v22 = *(MxTimer **)(v11 + 176);
    Timeout = Options->Timeout;
    *(_BYTE *)(v11 + 212) |= 4u;
    if ( v22->m_Timer.m_IsExtTimer )
      MxTimer::StartWithReturn(v22, (_LARGE_INTEGER)Timeout, 0);
    else
      KeSetCoalescableTimer(
        &v22->m_Timer.KernelTimer,
        (LARGE_INTEGER)Timeout,
        v22->m_Timer.m_Period,
        0,
        &v22->m_Timer.TimerDpc);
    if ( v19 < 0 )
      goto LABEL_30;
  }
  if ( v50 )
    FxRequestBase::SetVerifierFlags((FxRequestBase *)v11, 256);
LABEL_24:
  if ( m_State == WdfIoTargetStateUndefined )
  {
    (*(void (__fastcall **)(unsigned __int64, FxIoTarget *, __int64, const char *))(*(_QWORD *)v11 + 16LL))(
      v11,
      this,
      1630LL,
      "minkernel\\wdf\\framework\\shared\\targets\\general\\fxiotarget.cpp");
    FxIoTarget::DecrementIoCount(this);
  }
  return (unsigned int)m_State;
}
