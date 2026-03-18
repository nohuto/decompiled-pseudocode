/*
 * XREFs of ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x14001D11C
 * Callers:
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x14001E6C8 (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 *     ?GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z @ 0x14002EA20 (-GotoStartState@FxUsbPipe@@UEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x14007B68C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140011878 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x14001C510 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14001DA9C (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::FormatRepeater(
        FxUsbPipeContinuousReader *this,
        FxUsbPipeRepeatReader *Repeater)
{
  FxRequest *Request; // rsi
  FxRequestContext *m_RequestContext; // rcx
  IFxMemory *m_RequestMemory; // rcx
  IFxMemory *v7; // rdi
  size_t v8; // rbx
  void *v9; // rax
  IFxMemory *v10; // rbx
  _MDL *v11; // rax
  int v12; // ebx
  FxRequestContext *v13; // rcx
  unsigned __int64 v14; // rax
  FxRequestContext *v16; // rax
  _WDF_REQUEST_REUSE_PARAMS params; // [rsp+20h] [rbp-40h] BYREF
  FxRequestBuffer buf; // [rsp+38h] [rbp-28h] BYREF
  FxMemoryObject *pMemory; // [rsp+90h] [rbp+30h] BYREF

  Request = Repeater->Request;
  pMemory = 0LL;
  memset(&buf.u, 0, sizeof(buf.u));
  m_RequestContext = Request->m_RequestContext;
  if ( m_RequestContext )
  {
    m_RequestMemory = m_RequestContext->m_RequestMemory;
    if ( m_RequestMemory )
      m_RequestMemory->Delete(m_RequestMemory);
  }
  *(_QWORD *)(&params.Status + 1) = 0LL;
  HIDWORD(params.NewIrp) = 0;
  *(_QWORD *)&params.Size = 24LL;
  params.Status = -1073741637;
  FxRequest::Reuse(Request, &params);
  if ( this->m_Lookaside->Allocate(this->m_Lookaside, &pMemory) < 0 )
  {
    v16 = Request->m_RequestContext;
    if ( v16 )
      v16->m_RequestMemory = 0LL;
    return 3221225626LL;
  }
  else
  {
    v7 = &pMemory->IFxMemory;
    v8 = pMemory->GetBufferSize(&pMemory->IFxMemory);
    v9 = (void *)v7->GetBuffer(v7);
    memset(v9, 0, v8);
    if ( pMemory )
      v10 = &pMemory->IFxMemory;
    else
      v10 = 0LL;
    v11 = v10->GetMdl(v10);
    buf.u.Memory.Memory = v10;
    buf.u.Memory.Offsets = &this->m_Offsets;
    if ( v11 )
    {
      buf.DataType = FxRequestBufferReferencedMdl;
      buf.u.RefMdl.Mdl = v11;
    }
    else
    {
      buf.DataType = FxRequestBufferMemory;
    }
    v12 = FxUsbPipe::FormatTransferRequest(this->m_Pipe, Request, &buf, 3u);
    if ( v12 < 0 )
    {
      if ( !Request->m_RequestContext )
        FxObject::DeleteFromFailedCreate(pMemory);
    }
    else
    {
      v13 = Request->m_RequestContext;
      v13->m_CompletionParams.Type = WdfRequestTypeUsb;
      v13->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&v13[1];
      HIDWORD(v13[1].__vftable) = 6;
      if ( pMemory->m_ObjectSize )
        v14 = (unsigned __int64)pMemory ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v14 = 0LL;
      *(_QWORD *)&v13[1].m_CompletionParams.Size = v14;
      Request->m_CompletionRoutine.m_Completion = FxUsbPipeContinuousReader::_FxUsbPipeRequestComplete;
      Request->m_TargetCompletionContext = Repeater;
    }
    return (unsigned int)v12;
  }
}
