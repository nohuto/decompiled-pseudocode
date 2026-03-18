/*
 * XREFs of ?_FxUsbPipeRequestComplete@FxUsbPipeContinuousReader@@KAXPEAUWDFREQUEST__@@PEAUWDFIOTARGET__@@PEAU_WDF_REQUEST_COMPLETION_PARAMS@@PEAX@Z @ 0x140004800
 * Callers:
 *     <none>
 * Callees:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x140004A10 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     ?QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z @ 0x140046D30 (-QueueWorkItemLocked@FxUsbPipeContinuousReader@@IEAAEPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     WPP_IFR_SF_qqqq @ 0x1400727A8 (WPP_IFR_SF_qqqq.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete(
        WDFREQUEST__ *Request,
        WDFUSBPIPE__ *Target,
        _WDF_REQUEST_COMPLETION_PARAMS *Params,
        FxUsbPipeRepeatReader *Context)
{
  _QWORD *_a3; // r10
  FxUsbPipeContinuousReader *Parent; // r14
  FxUsbPipe *m_Pipe; // rdi
  int _a4; // r8d
  char v9; // al
  const void *v10; // rcx
  unsigned __int16 m_ObjectSize; // dx
  _IRP *RequestIrp; // r11
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int8 v15; // r8
  KIRQL v16; // si
  FxVerifierLock *PipeHandle; // rcx
  int irql; // [rsp+78h] [rbp+20h] BYREF

  _a3 = &Context->Request->__vftable;
  Parent = Context->Parent;
  m_Pipe = Parent->m_Pipe;
  _a4 = Context->Request->m_Irp.m_Irp->IoStatus.Status;
  irql = _a4;
  if ( _a4 < 0 )
  {
    m_ObjectSize = m_Pipe->m_ObjectSize;
    RequestIrp = Context->RequestIrp;
    _a1 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    m_Globals = m_Pipe->m_Globals;
    if ( _a4 == -1073741536 )
    {
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qqqq(m_Globals, 4u, 0xEu, 0x12u, WPP_FxUsbPipe_cpp_Traceguids, _a1, Context, _a3, Context->RequestIrp);
LABEL_5:
      KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
      return;
    }
    LOBYTE(irql) = 0;
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qqqd(m_Globals, 4u, 0xEu, 0x11u, WPP_FxUsbPipe_cpp_Traceguids, _a1, _a3, RequestIrp, _a4);
    if ( SLOBYTE(m_Pipe->m_ObjectFlags) < 0
      && (PipeHandle = (FxVerifierLock *)m_Pipe[-1].m_PipeInformation.PipeHandle) != 0LL )
    {
      FxVerifierLock::Lock(PipeHandle, (unsigned __int8 *)&irql, v15);
      v16 = irql;
    }
    else
    {
      v16 = KeAcquireSpinLockRaiseToDpc(&m_Pipe->m_NPLock.m_Lock);
    }
    KeSetEvent(&Context->ReadCompletedEvent.m_Event, 0, 0);
    FxUsbPipeContinuousReader::QueueWorkItemLocked(Parent, Context);
    FxNonPagedObject::Unlock(m_Pipe, v16);
  }
  else
  {
    Parent->m_ReadCompleteCallback(
      Target,
      *(WDFMEMORY__ **)(*(_QWORD *)(_a3[21] + 32LL) + 8LL),
      *(_QWORD *)(*(_QWORD *)(_a3[21] + 32LL) + 16LL),
      Parent->m_ReadCompleteContext);
    v9 = FxUsbPipeContinuousReader::ResubmitRepeater(Parent, Context, &irql);
    v10 = (const void *)((unsigned __int64)m_Pipe ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v9 & 1) != 0 )
    {
      KeInsertQueueDpc(&Context->Dpc, 0LL, 0LL);
      return;
    }
    if ( (v9 & 2) == 0 )
      goto LABEL_5;
    if ( !m_Pipe->m_ObjectSize )
      v10 = 0LL;
    WPP_IFR_SF_qqqq(
      m_Pipe->m_Globals,
      4u,
      0xEu,
      0x13u,
      WPP_FxUsbPipe_cpp_Traceguids,
      v10,
      Context,
      Context->Request,
      Context->RequestIrp);
  }
}
