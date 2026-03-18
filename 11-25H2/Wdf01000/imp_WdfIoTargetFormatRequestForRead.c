/*
 * XREFs of imp_WdfIoTargetFormatRequestForRead @ 0x14005DB10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject@@@Z @ 0x140033740 (-FormatIoRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@EPEAUFxRequestBuffer@@PEA_JPEAVFxFileObject.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qqDq @ 0x14009AE44 (WPP_IFR_SF_qqDq.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfIoTargetFormatRequestForRead(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 IoTarget,
        unsigned __int64 Request,
        unsigned __int64 OutputBuffer,
        _WDFMEMORY_OFFSET *OutputBufferOffsets,
        _LARGE_INTEGER *DeviceOffset)
{
  __int64 v9; // rcx
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 v12; // rcx
  FxRequestBase *v13; // rbx
  _WDFMEMORY_OFFSET *v14; // rdi
  unsigned int v15; // ebx
  FxRequestContext *m_RequestContext; // r14
  _FX_DRIVER_GLOBALS **v17; // rcx
  __int64 v19; // rcx
  _FX_DRIVER_GLOBALS **v20; // rbx
  _MDL *v21; // rax
  FxIoTarget_vtbl *v22; // rax
  FxRequestBase_vtbl *v23; // rax
  unsigned __int8 v24; // dl
  unsigned int v25; // r8d
  unsigned __int16 v26; // r9
  unsigned __int64 BufferLength; // rdx
  unsigned __int64 v28; // r14
  _FX_DRIVER_GLOBALS *v29; // rax
  unsigned __int8 v30; // dl
  unsigned int v31; // r8d
  unsigned __int16 v32; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-79h]
  FxRequestBase *v34; // [rsp+50h] [rbp-49h] BYREF
  FxIoTarget **v35; // [rsp+58h] [rbp-41h] BYREF
  __int16 v36; // [rsp+60h] [rbp-39h]
  __int16 v37; // [rsp+62h] [rbp-37h]
  int v38; // [rsp+64h] [rbp-35h]
  FxRequestBase **v39; // [rsp+68h] [rbp-31h] BYREF
  __int16 v40; // [rsp+70h] [rbp-29h]
  __int16 v41; // [rsp+72h] [rbp-27h]
  int v42; // [rsp+74h] [rbp-25h]
  _FX_DRIVER_GLOBALS ***v43; // [rsp+78h] [rbp-21h] BYREF
  __int16 v44; // [rsp+80h] [rbp-19h]
  __int16 v45; // [rsp+82h] [rbp-17h]
  int v46; // [rsp+84h] [rbp-15h]
  FxRequestBuffer IoBuffer; // [rsp+88h] [rbp-11h] BYREF
  _FX_DRIVER_GLOBALS **v48; // [rsp+F0h] [rbp+57h] BYREF
  FxIoTarget *v49; // [rsp+F8h] [rbp+5Fh] BYREF

  IoBuffer.DataType = FxRequestBufferUnspecified;
  memset(&IoBuffer.u, 0, sizeof(IoBuffer.u));
  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v9) = 0;
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v9 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v9);
  }
  if ( flags->m_Type == 4608 )
  {
    v49 = flags;
  }
  else
  {
    v49 = 0LL;
    v35 = &v49;
    v37 = v9;
    v38 = 0;
    v22 = flags->__vftable;
    v36 = 4608;
    if ( v22->QueryInterface(flags, (FxQueryInterfaceParams *)&v35) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        IoTarget,
        Request,
        OutputBuffer,
        traceGuid,
        (const void *)IoTarget,
        0x1200u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
  }
  m_Globals = v49->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_qqDq(
      m_Globals,
      IoTarget,
      Request,
      OutputBuffer,
      traceGuid,
      (const void *)IoTarget,
      (const void *)Request,
      3u,
      (const void *)OutputBuffer);
  if ( !Request )
    FxVerifierBugCheckWorker(m_Globals, WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v12) = 0;
  v13 = (FxRequestBase *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v12 = LOWORD(v13->__vftable);
    v13 = (FxRequestBase *)((char *)v13 - v12);
  }
  if ( v13->m_Type == 4104 )
  {
    v34 = v13;
  }
  else
  {
    v34 = 0LL;
    v39 = &v34;
    v41 = v12;
    v42 = 0;
    v23 = v13->__vftable;
    v40 = 4104;
    if ( v23->QueryInterface(v13, (FxQueryInterfaceParams *)&v39) < 0 )
    {
      WPP_IFR_SF_qDqD(v13->m_Globals, v24, v25, v26, traceGuid, (const void *)Request, 0x1008u, v13, v13->m_Type);
      FxVerifierBugCheckWorker(v13->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
  }
  v14 = OutputBufferOffsets;
  if ( OutputBuffer )
  {
    LOWORD(v19) = 0;
    v20 = (_FX_DRIVER_GLOBALS **)(~OutputBuffer & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (OutputBuffer & 1) != 0 )
    {
      v19 = *(unsigned __int16 *)v20;
      v20 = (_FX_DRIVER_GLOBALS **)((char *)v20 - v19);
    }
    if ( *((_WORD *)v20 + 4) == 4106 )
    {
      v48 = v20;
    }
    else
    {
      v48 = 0LL;
      v43 = &v48;
      v46 = 0;
      v29 = *v20;
      v44 = 4106;
      v45 = v19;
      if ( ((int (__fastcall *)(_FX_DRIVER_GLOBALS **, _FX_DRIVER_GLOBALS ****))v29->DestroyEvent.m_Event.Header.WaitListHead.Blink)(
             v20,
             &v43) < 0 )
      {
        WPP_IFR_SF_qDqD(
          v20[2],
          v30,
          v31,
          v32,
          traceGuid,
          (const void *)OutputBuffer,
          0x100Au,
          v20,
          *((unsigned __int16 *)v20 + 4));
        FxVerifierBugCheckWorker(v20[2], WDF_INVALID_HANDLE, OutputBuffer, 0x100AuLL);
      }
      v20 = v48;
    }
    if ( v14 )
    {
      BufferLength = v14->BufferLength;
      v28 = BufferLength + v14->BufferOffset;
      if ( v28 < BufferLength || v28 > ((__int64 (__fastcall *)(_FX_DRIVER_GLOBALS **))(*v20)->Linkage.Blink)(v20) )
      {
        v15 = -1073741675;
        WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x22u, WPP_FxIoTargetAPI_cpp_Traceguids, 0xC0000095);
        return v15;
      }
      v20 = v48;
    }
    v21 = (_MDL *)(*(__int64 (__fastcall **)(_FX_DRIVER_GLOBALS **))&(*v20)->Refcnt)(v20);
    IoBuffer.u.Memory.Memory = (IFxMemory *)v20;
    IoBuffer.u.Memory.Offsets = v14;
    if ( v21 )
    {
      IoBuffer.DataType = FxRequestBufferReferencedMdl;
      IoBuffer.u.RefMdl.Mdl = v21;
    }
    else
    {
      IoBuffer.DataType = FxRequestBufferMemory;
    }
  }
  else
  {
    v48 = 0LL;
  }
  v15 = FxIoTarget::FormatIoRequest(v49, v34, 3u, &IoBuffer, DeviceOffset);
  if ( (v15 & 0x80000000) == 0 )
  {
    m_RequestContext = v34->m_RequestContext;
    v17 = v48;
    m_RequestContext->m_CompletionParams.Type = WdfRequestTypeRead;
    if ( v17 )
      m_RequestContext->m_CompletionParams.Parameters.Others.Argument1.Value = (*(__int64 (__fastcall **)(_FX_DRIVER_GLOBALS **))&(*v17)->DestroyEvent.m_Event.Header.Lock)(v17);
    if ( v14 )
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = v14->BufferOffset;
    else
      m_RequestContext->m_CompletionParams.Parameters.Write.Offset = 0LL;
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
      v15);
  return v15;
}
