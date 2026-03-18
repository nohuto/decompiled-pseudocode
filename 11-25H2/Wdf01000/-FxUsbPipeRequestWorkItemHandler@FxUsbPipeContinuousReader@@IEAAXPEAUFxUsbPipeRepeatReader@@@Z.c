/*
 * XREFs of ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x1400053DC
 * Callers:
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x140070720 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 * Callees:
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1400040A0 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x140004A10 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x140004CA4 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1400055A8 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x140005BB0 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140005CF0 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1400135F0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x140022CC8 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x14003CB50 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x14009FEB4 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall FxUsbPipeContinuousReader::FxUsbPipeRequestWorkItemHandler(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *FailedRepeater)
{
  FxUsbPipe *m_Pipe; // rax
  FxRequest *Request; // rcx
  int v5; // edi
  _FX_DRIVER_GLOBALS *m_Globals; // r15
  int v8; // r12d
  WDFMEMORY__ *Buffer; // rcx
  int v10; // r14d
  FxUsbDevice *m_UsbDevice; // rbx
  unsigned int v12; // edx
  unsigned __int8 v13; // r8
  FxUsbPipe *v14; // rcx
  unsigned __int8 v15; // al
  FxUsbPipe *v16; // rcx
  unsigned __int8 IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v18; // rcx
  FxUsbPipeRepeatReader *m_Readers; // rbx
  FxUsbPipe *v20; // rcx
  unsigned __int16 m_ObjectSize; // dx
  WDFUSBPIPE__ *v22; // rcx
  unsigned __int8 v23; // al
  unsigned __int8 irql; // [rsp+60h] [rbp+40h] BYREF
  int status; // [rsp+68h] [rbp+48h] BYREF
  unsigned int PortStatus; // [rsp+70h] [rbp+50h] BYREF

  m_Pipe = this->m_Pipe;
  Request = FailedRepeater->Request;
  v5 = 0;
  irql = 0;
  m_Globals = m_Pipe->m_Globals;
  v8 = FxRequest::GetStatus(Request);
  Buffer = FailedRepeater->Request->m_RequestContext->m_CompletionParams.Parameters.Write.Buffer;
  if ( Buffer )
    v10 = *(_DWORD *)Buffer;
  else
    v10 = 0;
  FxUsbPipeContinuousReader::CancelRepeaters(this);
  m_UsbDevice = this->m_Pipe->m_UsbDevice;
  if ( this->m_ReadersFailedCallback )
  {
    v20 = this->m_Pipe;
    this->m_WorkItemThread = KeGetCurrentThread();
    m_ObjectSize = v20->m_ObjectSize;
    v22 = (WDFUSBPIPE__ *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v22 = 0LL;
    v23 = this->m_ReadersFailedCallback(v22, v8, v10);
    this->m_WorkItemThread = 0LL;
    if ( !v23 )
    {
      status = -1073741823;
      goto LABEL_5;
    }
  }
  status = FxUsbDevice::IsConnected(m_UsbDevice);
  if ( status >= 0 )
  {
    IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 9u);
    v18 = m_UsbDevice;
    if ( IsVersionGreaterThanOrEqualTo )
    {
      PortStatus = 0;
      if ( FxUsbDevice::GetPortStatus(m_UsbDevice, &PortStatus) < 0 || (PortStatus & 1) != 0 )
      {
        FxUsbPipe::Reset(this->m_Pipe);
        goto LABEL_5;
      }
      v18 = m_UsbDevice;
    }
    status = FxUsbDevice::Reset(v18);
  }
LABEL_5:
  v14 = this->m_Pipe;
  if ( SLOBYTE(v14->m_ObjectFlags) < 0 && v14[-1].m_PipeInformation.PipeHandle )
  {
    FxVerifierLock::Lock((FxVerifierLock *)v14[-1].m_PipeInformation.PipeHandle, &irql, v13);
    v15 = irql;
  }
  else
  {
    v15 = KeAcquireSpinLockRaiseToDpc(&v14->m_NPLock.m_Lock);
  }
  v16 = this->m_Pipe;
  this->m_WorkItemQueued = 0;
  FxNonPagedObject::Unlock(v16, v15);
  if ( status >= 0 )
  {
    this->m_NumFailedReaders = 0;
    if ( this->m_NumReaders )
    {
      m_Readers = this->m_Readers;
      do
      {
        if ( (FxUsbPipeContinuousReader::ResubmitRepeater(this, m_Readers, &status) & 1) != 0 )
          IofCallDriver(this->m_Pipe->m_TargetDevice, m_Readers->Request->m_Irp.m_Irp);
        ++v5;
        ++m_Readers;
      }
      while ( v5 < this->m_NumReaders );
    }
  }
}
