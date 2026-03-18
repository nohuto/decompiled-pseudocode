/*
 * XREFs of imp_WdfUsbTargetPipeFormatRequestForRead @ 0x14002D220
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z @ 0x14002D9BC (-FormatTransferRequest@FxUsbPipe@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@K@Z.c)
 *     ?GetBufferLength@FxRequestBuffer@@QEAAKXZ @ 0x14002E040 (-GetBufferLength@FxRequestBuffer@@QEAAKXZ.c)
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     WPP_IFR_SF_qqq @ 0x14004D358 (WPP_IFR_SF_qqq.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfUsbTargetPipeFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Pipe,
        unsigned __int64 Request,
        unsigned __int64 ReadMemory,
        _WDFMEMORY_OFFSET *ReadOffsets)
{
  _FX_DRIVER_GLOBALS *v8; // rbx
  __int64 v9; // rcx
  FxUsbPipe *v10; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  __int64 v12; // rcx
  FxRequestBase *flags; // rbx
  _WDFMEMORY_OFFSET *v14; // rsi
  __int64 v15; // rcx
  _FX_DRIVER_GLOBALS **v16; // rbx
  _MDL *v17; // rax
  int v18; // ebx
  FxRequestContext *m_RequestContext; // rdi
  unsigned __int64 BufferOffset; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v23; // rdi
  FxRequestBase_vtbl *v24; // rax
  unsigned __int8 v25; // dl
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  FxUsbPipe_vtbl *v28; // rax
  unsigned __int8 v29; // dl
  unsigned int v30; // r8d
  unsigned __int16 v31; // r9
  _FX_DRIVER_GLOBALS *v32; // rax
  unsigned __int8 v33; // dl
  unsigned int v34; // r8d
  unsigned __int16 v35; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-71h]
  FxRequestBase *v37; // [rsp+50h] [rbp-41h] BYREF
  FxUsbPipe **v38; // [rsp+58h] [rbp-39h] BYREF
  __int16 v39; // [rsp+60h] [rbp-31h]
  __int16 v40; // [rsp+62h] [rbp-2Fh]
  int v41; // [rsp+64h] [rbp-2Dh]
  FxRequestBase **v42; // [rsp+68h] [rbp-29h] BYREF
  __int16 v43; // [rsp+70h] [rbp-21h]
  __int16 v44; // [rsp+72h] [rbp-1Fh]
  int v45; // [rsp+74h] [rbp-1Dh]
  _FX_DRIVER_GLOBALS ***v46; // [rsp+78h] [rbp-19h] BYREF
  __int16 v47; // [rsp+80h] [rbp-11h]
  __int16 v48; // [rsp+82h] [rbp-Fh]
  int v49; // [rsp+84h] [rbp-Dh]
  FxRequestBuffer Buffer; // [rsp+88h] [rbp-9h] BYREF
  _FX_DRIVER_GLOBALS **v51; // [rsp+F0h] [rbp+5Fh] BYREF
  FxUsbPipe *v52; // [rsp+F8h] [rbp+67h] BYREF

  v8 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  if ( *(&DriverGlobals[-3].DisplaceDriverUnload + 4) )
    WPP_IFR_SF_qqq(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
      5u,
      0xEu,
      0xEu,
      WPP_FxUsbPipeAPI_cpp_Traceguids,
      (const void *)Pipe,
      (const void *)Request,
      (const void *)ReadMemory);
  Buffer.DataType = FxRequestBufferUnspecified;
  memset(&Buffer.u, 0, sizeof(Buffer.u));
  if ( !Pipe )
    FxVerifierBugCheckWorker(v8, WDF_INVALID_HANDLE, 0LL, 0x1203uLL);
  LOWORD(v9) = 0;
  v10 = (FxUsbPipe *)(~Pipe & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Pipe & 1) != 0 )
  {
    v9 = LOWORD(v10->__vftable);
    v10 = (FxUsbPipe *)((char *)v10 - v9);
  }
  if ( v10->m_Type == 4611 )
  {
    v52 = v10;
  }
  else
  {
    v52 = 0LL;
    v38 = &v52;
    v40 = v9;
    v41 = 0;
    v28 = v10->__vftable;
    v39 = 4611;
    if ( v28->QueryInterface(v10, (FxQueryInterfaceParams *)&v38) < 0 )
    {
      WPP_IFR_SF_qDqD(v10->m_Globals, v29, v30, v31, traceGuid, (const void *)Pipe, 0x1203u, v10, v10->m_Type);
      FxVerifierBugCheckWorker(v10->m_Globals, WDF_INVALID_HANDLE, Pipe, 0x1203uLL);
    }
  }
  m_Globals = v52->m_Globals;
  if ( !Request )
    FxVerifierBugCheckWorker(v52->m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v12) = 0;
  flags = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v12 = LOWORD(flags->__vftable);
    flags = (FxRequestBase *)((char *)flags - v12);
  }
  if ( flags->m_Type == 4104 )
  {
    v37 = flags;
  }
  else
  {
    v37 = 0LL;
    v42 = &v37;
    v44 = v12;
    v45 = 0;
    v24 = flags->__vftable;
    v43 = 4104;
    if ( v24->QueryInterface(flags, (FxQueryInterfaceParams *)&v42) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v25, v26, v27, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v14 = ReadOffsets;
  if ( ReadMemory )
  {
    LOWORD(v15) = 0;
    v16 = (_FX_DRIVER_GLOBALS **)(~ReadMemory & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (ReadMemory & 1) != 0 )
    {
      v15 = *(unsigned __int16 *)v16;
      v16 = (_FX_DRIVER_GLOBALS **)((char *)v16 - v15);
    }
    if ( *((_WORD *)v16 + 4) == 4106 )
    {
      v51 = v16;
    }
    else
    {
      v51 = 0LL;
      v46 = &v51;
      v49 = 0;
      v32 = *v16;
      v47 = 4106;
      v48 = v15;
      if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _FX_DRIVER_GLOBALS ****))v32->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
             v16,
             &v46) < 0 )
      {
        WPP_IFR_SF_qDqD(
          v16[2],
          v33,
          v34,
          v35,
          traceGuid,
          (const void *)ReadMemory,
          0x100Au,
          v16,
          *((unsigned __int16 *)v16 + 4));
        FxVerifierBugCheckWorker(v16[2], WDF_INVALID_HANDLE, ReadMemory, 0x100AuLL);
      }
      v16 = v51;
    }
    if ( v14 )
    {
      BufferLength = v14->BufferLength;
      v23 = BufferLength + v14->BufferOffset;
      if ( v23 < BufferLength || v23 > ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v16)->Linkage.Blink)(v16) )
      {
        v18 = -1073741675;
        goto LABEL_25;
      }
      v16 = v51;
    }
    v17 = (_MDL *)(*(__int64 (__fastcall **)(_FX_DRIVER_GLOBALS **))&(*v16)->Refcnt)(v16);
    Buffer.u.Memory.Memory = (IFxMemory *)v16;
    Buffer.u.Memory.Offsets = v14;
    if ( v17 )
    {
      Buffer.DataType = FxRequestBufferReferencedMdl;
      Buffer.u.RefMdl.Mdl = v17;
    }
    else
    {
      Buffer.DataType = FxRequestBufferMemory;
    }
  }
  else
  {
    v51 = 0LL;
  }
  v18 = FxUsbPipe::FormatTransferRequest(v52, v37, &Buffer, 3u);
  if ( v18 >= 0 )
  {
    m_RequestContext = v37->m_RequestContext;
    *(_QWORD *)&m_RequestContext[1].m_CompletionParams.Size = ReadMemory;
    m_RequestContext[1].m_CompletionParams.IoStatus.Pointer = (void *)FxRequestBuffer::GetBufferLength(&Buffer);
    if ( v14 )
      BufferOffset = v14->BufferOffset;
    else
      BufferOffset = 0LL;
    m_RequestContext[1].m_CompletionParams.IoStatus.Information = BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)&m_RequestContext[1];
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeUsb;
    HIDWORD(m_RequestContext[1].__vftable) = 6;
  }
LABEL_25:
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqqd(
      m_Globals,
      5u,
      0xEu,
      0x1Du,
      WPP_FxUsbPipe_cpp_Traceguids,
      (const void *)Pipe,
      (const void *)Request,
      (const void *)ReadMemory,
      v18);
  return (unsigned int)v18;
}
