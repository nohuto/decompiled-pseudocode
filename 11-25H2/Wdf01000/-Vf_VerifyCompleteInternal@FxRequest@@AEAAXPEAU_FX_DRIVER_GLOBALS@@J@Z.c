/*
 * XREFs of ?Vf_VerifyCompleteInternal@FxRequest@@AEAAXPEAU_FX_DRIVER_GLOBALS@@J@Z @ 0x1400E4618
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x14000D190 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140059E28 (-VerifyRequestIsNotCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qDiD @ 0x1400945D8 (WPP_IFR_SF_qDiD.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall FxRequest::Vf_VerifyCompleteInternal(FxRequest *this, _FX_DRIVER_GLOBALS *Status, int FxDriverGlobals)
{
  char m_ObjectFlags; // al
  _LIST_ENTRY *Flink; // rcx
  unsigned __int16 v7; // r9
  KIRQL v8; // bl
  _FX_DRIVER_GLOBALS **p_m_Globals; // r14
  _FX_DRIVER_GLOBALS *m_Globals; // rdx
  __int16 m_VerifierFlags; // cx
  const void *_a1; // rcx
  FxIrp *p_m_Irp; // r15
  _IRP *m_Irp; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int level; // r8d
  unsigned int id; // esi
  unsigned __int64 flags; // rcx
  unsigned __int16 *p_m_ObjectSize; // rbx
  WDFREQUEST__ *v20; // rdi
  WDFREQUEST__ *v21; // rax
  _IRP *v22; // rdx
  bool v23; // zf
  _FX_DRIVER_GLOBALS *v24; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-60h]
  _WDF_REQUEST_FATAL_ERROR_INFORMATION_LENGTH_MISMATCH_DATA data; // [rsp+50h] [rbp-30h] BYREF
  _FX_DRIVER_GLOBALS *irql; // [rsp+B8h] [rbp+38h] OVERLAPPED BYREF

  irql = Status;
  m_ObjectFlags = this->m_ObjectFlags;
  LOBYTE(irql) = 0;
  if ( m_ObjectFlags < 0 && (Flink = this[-1].m_ForwardProgressList.Flink) != 0LL )
  {
    FxVerifierLock::Lock((FxVerifierLock *)Flink, (unsigned __int8 *)&irql, FxDriverGlobals);
    v8 = (unsigned __int8)irql;
  }
  else
  {
    v8 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
  }
  p_m_Globals = &this->m_Globals;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerifierIO )
    FxRequest::VerifyRequestIsNotCompleted(this, m_Globals);
  m_VerifierFlags = this->m_VerifierFlags;
  if ( (m_VerifierFlags & 0x10) != 0 && (m_VerifierFlags & 0x40) == 0 )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_q(*p_m_Globals, 2u, 0x10u, 0xEu, WPP_FxRequest_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  p_m_Irp = &this->m_Irp;
  m_Irp = this->m_Irp.m_Irp;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  level = CurrentStackLocation->MajorFunction;
  if ( level == 3 || CurrentStackLocation->MajorFunction == 4 )
  {
    id = CurrentStackLocation->Parameters.Read.Length;
  }
  else
  {
    if ( CurrentStackLocation->MajorFunction != 14 )
      goto LABEL_17;
    if ( m_Irp->RequestorMode != 1 )
      goto LABEL_17;
    id = CurrentStackLocation->Parameters.Read.Length;
    if ( !id )
      goto LABEL_17;
  }
  if ( FxDriverGlobals >= 0 )
  {
    flags = m_Irp->IoStatus.Information;
    if ( flags > id )
    {
      *(&data.OutputBufferLength + 1) = 0;
      *(_DWORD *)(&data.MajorFunction + 1) = 0;
      *(_WORD *)(&data.MajorFunction + 5) = 0;
      *(&data.MajorFunction + 7) = 0;
      p_m_ObjectSize = &this->m_ObjectSize;
      v20 = (WDFREQUEST__ *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v21 = v20;
      if ( !*p_m_ObjectSize )
        v21 = 0LL;
      WPP_IFR_SF_qDiD(*p_m_Globals, (unsigned __int8)m_Irp, level, v7, traceGuid, v21, level, flags, id);
      v22 = p_m_Irp->m_Irp;
      v23 = *p_m_ObjectSize == 0;
      v24 = *p_m_Globals;
      data.Irp = p_m_Irp->m_Irp;
      if ( v23 )
        v20 = 0LL;
      data.Request = v20;
      data.OutputBufferLength = id;
      data.Information = v22->IoStatus.Information;
      data.MajorFunction = v22->Tail.Overlay.CurrentStackLocation->MajorFunction;
      FxVerifierBugCheckWorker(v24, WDF_REQUEST_FATAL_ERROR, 4uLL, (ULONG_PTR)&data);
    }
  }
LABEL_17:
  this->m_Completed = 1;
  FxNonPagedObject::Unlock(this, v8, level);
}
