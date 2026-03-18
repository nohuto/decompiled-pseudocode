/*
 * XREFs of ?_FormatTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAUWDFMEMORY__@@PEAU_WDFMEMORY_OFFSET@@K@Z @ 0x14002D610
 * Callers:
 *     imp_WdfUsbTargetPipeFormatRequestForWrite @ 0x14006A190 (imp_WdfUsbTargetPipeFormatRequestForWrite.c)
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14002D9BC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14002E040 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxUsbPipe::_FormatTransfer(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 Pipe,
        unsigned __int64 Request,
        unsigned __int64 TransferMemory,
        _WDFMEMORY_OFFSET *TransferOffsets,
        unsigned int Flags)
{
  __int64 v9; // rcx
  FxUsbPipe *v10; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v12; // rcx
  FxRequest *flags; // rbx
  _WDFMEMORY_OFFSET *v14; // rdi
  __int64 v15; // rcx
  unsigned __int16 *v16; // rbx
  _MDL *v17; // rax
  char v18; // r14
  int v19; // ebx
  FxRequestContext *m_RequestContext; // rsi
  unsigned __int64 BufferOffset; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v24; // rsi
  FxRequest_vtbl *v25; // rax
  unsigned __int8 v26; // dl
  unsigned int v27; // r8d
  unsigned __int16 v28; // r9
  FxUsbPipe_vtbl *v29; // rax
  unsigned __int8 v30; // dl
  unsigned int v31; // r8d
  unsigned __int16 v32; // r9
  IFxMemory v33; // rax
  unsigned __int8 v34; // dl
  unsigned int v35; // r8d
  unsigned __int16 v36; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-69h]
  FxRequest *pRequest; // [rsp+50h] [rbp-39h] BYREF
  _FX_DRIVER_GLOBALS *p_pUsbPipe; // [rsp+58h] [rbp-31h] BYREF
  __int16 v40; // [rsp+60h] [rbp-29h]
  __int16 v41; // [rsp+62h] [rbp-27h]
  int v42; // [rsp+64h] [rbp-25h]
  void *p_pRequest; // [rsp+68h] [rbp-21h] BYREF
  __int16 v44; // [rsp+70h] [rbp-19h]
  __int16 v45; // [rsp+72h] [rbp-17h]
  int v46; // [rsp+74h] [rbp-15h]
  FxRequestBuffer buf; // [rsp+78h] [rbp-11h] BYREF
  IFxMemory *pMemory; // [rsp+E0h] [rbp+57h] BYREF
  FxUsbPipe *pUsbPipe; // [rsp+E8h] [rbp+5Fh] BYREF

  buf.DataType = FxRequestBufferUnspecified;
  memset(&buf.u, 0, sizeof(buf.u));
  if ( !Pipe )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  LOWORD(v9) = 0;
  v10 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Pipe & 1) != 0 )
  {
    v9 = LOWORD(v10->__vftable);
    v10 = (FxUsbPipe *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4611 )
  {
    pUsbPipe = v10;
  }
  else
  {
    pUsbPipe = 0LL;
    p_pUsbPipe = (_FX_DRIVER_GLOBALS *)&pUsbPipe;
    v41 = v9;
    v42 = 0;
    v29 = v10->__vftable;
    v40 = 4611;
    if ( v29->QueryInterface(v10, (FxQueryInterfaceParams *)&p_pUsbPipe) < 0 )
    {
      WPP_IFR_SF_qDqD(v10->m_Globals, v30, v31, v32, traceGuid, (const void *)Pipe, 0x1203u, v10, v10->m_Type);
      FxVerifierBugCheckWorker(v10->m_Globals, WDF_INVALID_HANDLE, Pipe, 0x1203uLL);
    }
  }
  m_Globals = pUsbPipe->m_Globals;
  p_pUsbPipe = m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v12) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v12 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v12);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v45 = v12;
    v46 = 0;
    v25 = flags->__vftable;
    v44 = 4104;
    if ( v25->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v26, v27, v28, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v14 = TransferOffsets;
  if ( TransferMemory )
  {
    LOWORD(v15) = 0;
    v16 = (unsigned __int16 *)(~TransferMemory & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (TransferMemory & 1) != 0 )
    {
      v15 = *v16;
      v16 = (unsigned __int16 *)((char *)v16 - v15);
    }
    if ( v16[4] == 4106 )
    {
      pMemory = (IFxMemory *)v16;
    }
    else
    {
      pMemory = 0LL;
      p_pRequest = &pMemory;
      v45 = v15;
      v46 = 0;
      v33.__vftable = *(IFxMemory_vtbl **)v16;
      v44 = 4106;
      if ( ((int (__fastcall *)(unsigned __int16 *, void **))v33.GetDriverGlobals)(v16, &p_pRequest) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v16 + 2),
          v34,
          v35,
          v36,
          traceGuid,
          (const void *)TransferMemory,
          0x100Au,
          v16,
          v16[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v16 + 2), WDF_INVALID_HANDLE, TransferMemory, 0x100AuLL);
      }
      v16 = (unsigned __int16 *)pMemory;
    }
    if ( v14 )
    {
      BufferLength = v14->BufferLength;
      v24 = BufferLength + v14->BufferOffset;
      if ( v24 < BufferLength || v24 > (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v16 + 8LL))(v16) )
      {
        v19 = -1073741675;
        goto $Done_8;
      }
      v16 = (unsigned __int16 *)pMemory;
    }
    v17 = (_MDL *)(*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v16 + 16LL))(v16);
    buf.u.Memory.Memory = (IFxMemory *)v16;
    buf.u.Memory.Offsets = v14;
    if ( v17 )
    {
      buf.DataType = FxRequestBufferReferencedMdl;
      buf.u.RefMdl.Mdl = v17;
    }
    else
    {
      buf.DataType = FxRequestBufferMemory;
    }
  }
  else
  {
    pMemory = 0LL;
  }
  v18 = Flags;
  v19 = FxUsbPipe::FormatTransferRequest(pUsbPipe, pRequest, &buf, Flags);
  if ( v19 >= 0 )
  {
    m_RequestContext = pRequest->m_RequestContext;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = TransferMemory;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = (void *)FxRequestBuffer::GetBufferLength(&buf);
    if ( v14 )
      BufferOffset = v14->BufferOffset;
    else
      BufferOffset = 0LL;
    m_RequestContext[1].m_CompletionParams.IoStatus.Information = BufferOffset;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    HIDWORD(m_RequestContext[1].__vftable) = (v18 & 1) + 5;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
  }
$Done_8:
  if ( p_pUsbPipe->FxVerboseOn )
    WPP_IFR_SF_qqqd(
      p_pUsbPipe,
      5u,
      0xEu,
      0x1Du,
      WPP_FxUsbPipe_cpp_Traceguids,
      (const void *)Pipe,
      (const void *)Request,
      (const void *)TransferMemory,
      v19);
  return (unsigned int)v19;
}
