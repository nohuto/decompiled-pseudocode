/*
 * XREFs of FxIoTargetFormatIoctl @ 0x14005BA24
 * Callers:
 *     imp_WdfIoTargetFormatRequestForIoctl @ 0x14005B970 (imp_WdfIoTargetFormatRequestForIoctl.c)
 *     imp_WdfIoTargetFormatRequestForInternalIoctl @ 0x14005B9D0 (imp_WdfIoTargetFormatRequestForInternalIoctl.c)
 * Callees:
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x14000DD80 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDdqq @ 0x14009ADD4 (WPP_IFR_SF_qqDdqq.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoTargetFormatIoctl(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned int Ioctl,
        unsigned __int8 Internal,
        WDFMEMORY__ *InputBuffer,
        _WDFMEMORY_OFFSET *InputBufferOffsets,
        WDFMEMORY__ *OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets)
{
  __int64 v10; // rdx
  __int64 v12; // rcx
  FxIoTarget *v13; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int64 v15; // r13
  unsigned __int64 v16; // r12
  __int64 v17; // rcx
  FxRequest *flags; // rbx
  _WDFMEMORY_OFFSET *v19; // r14
  __int64 v20; // r8
  __int64 v21; // rcx
  unsigned __int16 *v22; // rbx
  _MDL *v23; // rax
  _WDFMEMORY_OFFSET *v24; // rdi
  unsigned int v25; // ebx
  bool v26; // cf
  FxRequestContext *m_RequestContext; // rdx
  __int64 v29; // rcx
  unsigned __int16 *v30; // rbx
  _MDL *v31; // rax
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v33; // rdi
  FxIoTarget_vtbl *v34; // rax
  int v35; // eax
  unsigned __int16 v36; // r9
  FxRequest_vtbl *v37; // rax
  int v38; // eax
  unsigned int v39; // r8d
  unsigned __int16 v40; // r9
  unsigned __int16 v41; // r9
  unsigned __int16 v42; // r9
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // rax
  IFxMemory v45; // rax
  unsigned __int16 v46; // r9
  FxRequestBuffer *v47; // [rsp+20h] [rbp-A1h]
  FxIoTarget *pTarget; // [rsp+60h] [rbp-61h] BYREF
  FxRequest *pRequest; // [rsp+68h] [rbp-59h] BYREF
  void *p_pTarget; // [rsp+70h] [rbp-51h] BYREF
  __int16 v51; // [rsp+78h] [rbp-49h]
  __int16 v52; // [rsp+7Ah] [rbp-47h]
  int v53; // [rsp+7Ch] [rbp-45h]
  FxRequestBuffer outputBuf; // [rsp+80h] [rbp-41h] BYREF
  FxRequestBuffer inputBuf; // [rsp+A0h] [rbp-21h] BYREF
  IFxMemory *pOutputMemory; // [rsp+110h] [rbp+4Fh] BYREF
  IFxMemory *pInputMemory; // [rsp+118h] [rbp+57h] BYREF
  void *_a2; // [rsp+120h] [rbp+5Fh]
  unsigned int v59; // [rsp+128h] [rbp+67h]

  v59 = Ioctl;
  _a2 = (void *)Request;
  v10 = 0LL;
  pInputMemory = 0LL;
  pOutputMemory = 0LL;
  inputBuf.DataType = FxRequestBufferUnspecified;
  outputBuf.DataType = FxRequestBufferUnspecified;
  memset(&inputBuf.u, 0, sizeof(inputBuf.u));
  memset(&outputBuf.u, 0, sizeof(outputBuf.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker(FxDriverGlobals, WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v12) = 0;
  v13 = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v12 = LOWORD(v13->__vftable);
    v13 = (FxIoTarget *)((char *)v13 - v12);
  }
  if ( v13->m_Type == 4608 )
  {
    pTarget = v13;
  }
  else
  {
    pTarget = 0LL;
    p_pTarget = &pTarget;
    v52 = v12;
    v53 = 0;
    v34 = v13->__vftable;
    v51 = 4608;
    v35 = v34->QueryInterface(v13, (FxQueryInterfaceParams *)&p_pTarget);
    v10 = 0LL;
    if ( v35 < 0 )
    {
      WPP_IFR_SF_qDqD(
        v13->m_Globals,
        0,
        Request,
        v36,
        (const _GUID *)v47,
        (const void *)IoTarget,
        0x1200u,
        v13,
        v13->m_Type);
      FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    Ioctl = v59;
  }
  m_Globals = pTarget->m_Globals;
  v15 = (unsigned __int64)OutputBuffer;
  v16 = (unsigned __int64)InputBuffer;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_qqDdqq(
      pTarget->m_Globals,
      0,
      Request,
      Ioctl,
      (const _GUID *)v47,
      (const void *)IoTarget,
      (const void *)Request,
      Ioctl,
      Internal,
      InputBuffer,
      OutputBuffer);
    v10 = 0LL;
  }
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v17) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v17 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v17);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pTarget = &pRequest;
    v52 = v17;
    v53 = 0;
    v37 = flags->__vftable;
    v51 = 4104;
    v38 = v37->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget);
    v10 = 0LL;
    if ( v38 < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        0,
        v39,
        v40,
        (const _GUID *)v47,
        (const void *)Request,
        0x1008u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v19 = InputBufferOffsets;
  v20 = 4106LL;
  if ( v16 )
  {
    LOWORD(v21) = 0;
    v22 = (unsigned __int16 *)(~v16 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v16 & 1) != 0 )
    {
      v21 = *v22;
      v22 = (unsigned __int16 *)((char *)v22 - v21);
    }
    if ( v22[4] == 4106 )
    {
      pInputMemory = (IFxMemory *)v22;
    }
    else
    {
      v52 = v21;
      p_pTarget = &pInputMemory;
      v51 = 4106;
      v53 = 0;
      if ( (*(int (__fastcall **)(unsigned __int16 *, void **))(*(_QWORD *)v22 + 40LL))(v22, &p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v22 + 2),
          v10,
          v20,
          v42,
          (const _GUID *)v47,
          (const void *)v16,
          0x100Au,
          v22,
          v22[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v22 + 2), WDF_INVALID_HANDLE, v16, 0x100AuLL);
      }
      v22 = (unsigned __int16 *)pInputMemory;
    }
    if ( v19 )
    {
      BufferLength = v19->BufferLength;
      v33 = BufferLength + v19->BufferOffset;
      if ( v33 < BufferLength
        || v33 > (*(__int64 (__fastcall **)(unsigned __int16 *, unsigned __int64, __int64))(*(_QWORD *)v22 + 8LL))(
                   v22,
                   BufferLength,
                   v20) )
      {
        v25 = -1073741675;
        v41 = 44;
        goto LABEL_46;
      }
      v22 = (unsigned __int16 *)pInputMemory;
    }
    v23 = (_MDL *)(*(__int64 (__fastcall **)(unsigned __int16 *, __int64, __int64))(*(_QWORD *)v22 + 16LL))(
                    v22,
                    v10,
                    v20);
    v10 = 0LL;
    inputBuf.u.Memory.Memory = (IFxMemory *)v22;
    inputBuf.u.Memory.Offsets = v19;
    v20 = 4106LL;
    if ( v23 )
    {
      inputBuf.DataType = FxRequestBufferReferencedMdl;
      inputBuf.u.RefMdl.Mdl = v23;
    }
    else
    {
      inputBuf.DataType = FxRequestBufferMemory;
    }
  }
  v24 = OutputBufferOffsets;
  if ( v15 )
  {
    LOWORD(v29) = 0;
    v30 = (unsigned __int16 *)(~v15 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v15 & 1) != 0 )
    {
      v29 = *v30;
      v30 = (unsigned __int16 *)((char *)v30 - v29);
    }
    if ( v30[4] == 4106 )
    {
      pOutputMemory = (IFxMemory *)v30;
    }
    else
    {
      pOutputMemory = 0LL;
      p_pTarget = &pOutputMemory;
      v52 = v29;
      v53 = 0;
      v45.__vftable = *(IFxMemory_vtbl **)v30;
      v51 = 4106;
      if ( ((int (__fastcall *)(unsigned __int16 *, void **))v45.GetDriverGlobals)(v30, &p_pTarget) < 0 )
      {
        WPP_IFR_SF_qDqD(
          *((_FX_DRIVER_GLOBALS **)v30 + 2),
          v10,
          v20,
          v46,
          (const _GUID *)v47,
          (const void *)v15,
          0x100Au,
          v30,
          v30[4]);
        FxVerifierBugCheckWorker(*((_FX_DRIVER_GLOBALS **)v30 + 2), WDF_INVALID_HANDLE, v15, 0x100AuLL);
      }
      v30 = (unsigned __int16 *)pOutputMemory;
    }
    if ( !v24 )
      goto LABEL_35;
    v43 = v24->BufferLength;
    p_pTarget = (void *)(v43 + v24->BufferOffset);
    if ( (unsigned __int64)p_pTarget >= v43 )
    {
      v44 = (*(__int64 (__fastcall **)(unsigned __int16 *, unsigned __int64, __int64))(*(_QWORD *)v30 + 8LL))(
              v30,
              v43,
              v20);
      if ( (unsigned __int64)p_pTarget <= v44 )
      {
        v30 = (unsigned __int16 *)pOutputMemory;
LABEL_35:
        v31 = (_MDL *)(*(__int64 (__fastcall **)(unsigned __int16 *, __int64, __int64))(*(_QWORD *)v30 + 16LL))(
                        v30,
                        v10,
                        v20);
        outputBuf.u.Memory.Memory = (IFxMemory *)v30;
        outputBuf.u.Memory.Offsets = v24;
        if ( v31 )
        {
          outputBuf.DataType = FxRequestBufferReferencedMdl;
          outputBuf.u.RefMdl.Mdl = v31;
        }
        else
        {
          outputBuf.DataType = FxRequestBufferMemory;
        }
        goto LABEL_22;
      }
    }
    v25 = -1073741675;
    v41 = 45;
LABEL_46:
    WPP_IFR_SF_D(m_Globals, 2u, 0xEu, v41, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC0000095);
    return v25;
  }
LABEL_22:
  v25 = FxIoTarget::FormatIoctlRequest(pTarget, pRequest, v59, Internal, &inputBuf, &outputBuf);
  if ( (v25 & 0x80000000) == 0 )
  {
    v26 = Internal != 0;
    Internal = -Internal;
    m_RequestContext = pRequest->m_RequestContext;
    m_RequestContext->m_CompletionParams.Parameters.Ioctl.IoControlCode = v59;
    m_RequestContext->m_CompletionParams.Type = v26 + 14;
    m_RequestContext->m_CompletionParams.Parameters.Write.Length = v16;
    if ( v19 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v19->BufferOffset;
    m_RequestContext->m_CompletionParams.Parameters.Others.Argument4.Value = v15;
    if ( v24 )
      m_RequestContext->m_CompletionParams.Parameters.Ioctl.Output.Offset = v24->BufferOffset;
  }
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqd(m_Globals, 5u, 0xEu, 0x2Eu, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget, _a2, v25);
  return v25;
}
