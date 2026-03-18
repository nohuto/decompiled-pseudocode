/*
 * XREFs of FxIoTargetFormatIo @ 0x14005A618
 * Callers:
 *     imp_WdfIoTargetFormatRequestForWrite @ 0x14005A5E0 (imp_WdfIoTargetFormatRequestForWrite.c)
 * Callees:
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x14000C900 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z @ 0x14005AA40 (-FormatWriteParams@FxRequestContext@@QEAAXPEAVIFxMemory@@PEAU_WDFMEMORY_OFFSET@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDq @ 0x14009AF20 (WPP_IFR_SF_qqDq.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTargetFormatIo(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned __int16 MajorCode,
        WDFMEMORY__ *IoBuffer,
        _WDFMEMORY_OFFSET *IoBufferOffsets,
        _LARGE_INTEGER *DeviceOffset)
{
  unsigned int flags; // r13d
  __int64 v10; // rcx
  FxIoTarget *v11; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned __int64 v13; // rsi
  __int64 v14; // rcx
  FxRequest *v15; // rbx
  _WDFMEMORY_OFFSET *v16; // rdi
  signed int v17; // esi
  IFxMemory *v18; // rcx
  FxRequestContext *m_RequestContext; // rbx
  __int64 v21; // rcx
  unsigned __int16 *v22; // rbx
  _MDL *v23; // rax
  FxIoTarget_vtbl *v24; // rax
  FxRequest_vtbl *v25; // rax
  unsigned int v26; // r8d
  unsigned __int16 v27; // r9
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v29; // rsi
  IFxMemory v30; // rax
  unsigned __int8 v31; // dl
  unsigned int v32; // r8d
  unsigned __int16 v33; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-61h]
  FxIoTarget *pTarget; // [rsp+50h] [rbp-31h] BYREF
  void *p_pTarget; // [rsp+58h] [rbp-29h] BYREF
  __int16 v37; // [rsp+60h] [rbp-21h]
  __int16 v38; // [rsp+62h] [rbp-1Fh]
  int v39; // [rsp+64h] [rbp-1Dh]
  FxRequestBuffer ioBuf; // [rsp+68h] [rbp-19h] BYREF
  IFxMemory *pIoMemory; // [rsp+D0h] [rbp+4Fh] BYREF
  FxRequest *pRequest; // [rsp+D8h] [rbp+57h] BYREF

  flags = (unsigned __int8)MajorCode;
  ioBuf.DataType = FxRequestBufferUnspecified;
  memset(&ioBuf.u, 0, sizeof(ioBuf.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v10) = 0;
  v11 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v10 = LOWORD(v11->__vftable);
    v11 = (FxIoTarget *)((char *)v11 - v10);
  }
  if ( v11->m_Type == 4608 )
  {
    pTarget = v11;
  }
  else
  {
    pTarget = 0LL;
    p_pTarget = &pTarget;
    v38 = v10;
    v39 = 0;
    v24 = v11->__vftable;
    v37 = 4608;
    if ( v24->QueryInterface(v11, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(
        v11->m_Globals,
        0,
        Request,
        MajorCode,
        traceGuid,
        (const void *)IoTarget,
        0x1200u,
        v11,
        v11->m_Type);
      FxVerifierBugCheckWorker(v11->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
  }
  m_Globals = pTarget->m_Globals;
  v13 = (unsigned __int64)IoBuffer;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDq(
      m_Globals,
      0,
      Request,
      MajorCode,
      traceGuid,
      (const void *)IoTarget,
      (const void *)Request,
      flags,
      IoBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v14) = 0;
  v15 = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v14 = LOWORD(v15->__vftable);
    v15 = (FxRequest *)((char *)v15 - v14);
  }
  if ( v15->m_Type == 4104 )
  {
    pRequest = v15;
  }
  else
  {
    pRequest = 0LL;
    p_pTarget = &pRequest;
    v38 = v14;
    v39 = 0;
    v25 = v15->__vftable;
    v37 = 4104;
    if ( v25->QueryInterface(v15, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(v15->m_Globals, 0, v26, v27, traceGuid, (const void *)Request, 0x1008u, v15, v15->m_Type);
      FxVerifierBugCheckWorker(v15->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v16 = IoBufferOffsets;
  if ( v13 )
  {
    LOWORD(v21) = 0;
    v22 = (unsigned __int16 *)(~v13 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v13 & 1) != 0 )
    {
      v21 = *v22;
      v22 = (unsigned __int16 *)((char *)v22 - v21);
    }
    if ( v22[4] == 4106 )
    {
      pIoMemory = (IFxMemory *)v22;
    }
    else
    {
      pIoMemory = 0LL;
      p_pTarget = &pIoMemory;
      v38 = v21;
      v39 = 0;
      v30.__vftable = *(IFxMemory_vtbl **)v22;
      v37 = 4106;
      if ( ((int (__fastcall *)(unsigned __int16 *, void **))v30.GetDriverGlobals)(v22, &p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v22 + 2),
          v31,
          v32,
          v33,
          traceGuid,
          (const void *)v13,
          0x100Au,
          v22,
          v22[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v22 + 2), WDF_INVALID_HANDLE, v13, 0x100AuLL);
      }
      v22 = (unsigned __int16 *)pIoMemory;
    }
    if ( v16 )
    {
      BufferLength = v16->BufferLength;
      v29 = BufferLength + v16->BufferOffset;
      if ( v29 < BufferLength || v29 > (*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v22 + 8LL))(v22) )
      {
        WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC0000095);
        return 3221225621LL;
      }
      v22 = (unsigned __int16 *)pIoMemory;
    }
    v23 = (_MDL *)(*(__int64 (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v22 + 16LL))(v22);
    ioBuf.u.Memory.Memory = (IFxMemory *)v22;
    ioBuf.u.Memory.Offsets = v16;
    if ( v23 )
    {
      ioBuf.DataType = FxRequestBufferReferencedMdl;
      ioBuf.u.RefMdl.Mdl = v23;
    }
    else
    {
      ioBuf.DataType = FxRequestBufferMemory;
    }
  }
  else
  {
    pIoMemory = 0LL;
  }
  v17 = FxIoTarget::FormatIoRequest(pTarget, pRequest, flags, &ioBuf, DeviceOffset);
  if ( v17 >= 0 )
  {
    if ( (_BYTE)flags == 4 )
    {
      FxRequestContext::FormatWriteParams(pRequest->m_RequestContext, pIoMemory, v16);
    }
    else if ( (_BYTE)flags == 3 )
    {
      v18 = pIoMemory;
      m_RequestContext = pRequest->m_RequestContext;
      m_RequestContext->m_CompletionParams.Type = WdfRequestTypeRead;
      if ( v18 )
        m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (unsigned __int64)v18->GetHandle(v18);
      if ( v16 )
        m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v16->BufferOffset;
      else
        m_RequestContext->m_CompletionParams.Parameters.Write.Offset = 0LL;
    }
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqd(
      m_Globals,
      5u,
      0xEu,
      0x23u,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      (const void *)IoTarget,
      (const void *)Request,
      v17);
  return (unsigned int)v17;
}
