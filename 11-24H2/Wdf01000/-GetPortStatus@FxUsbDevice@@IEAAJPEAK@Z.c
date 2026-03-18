/*
 * XREFs of ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x140007824
 * Callers:
 *     ?FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z @ 0x14000747C (-FxUsbPipeRequestWorkItemHandler@FxUsbPipeContinuousReader@@IEAAXPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1400077F4 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ??0FxRequestBuffer@@QEAA@XZ @ 0x140008614 (--0FxRequestBuffer@@QEAA@XZ.c)
 *     ?FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z @ 0x140008630 (-FormatInternalIoctlOthersRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KPEAUFxRequestBuffer@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x14000AE60 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x14000B9C0 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x14001F270 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     __security_check_cookie @ 0x1400AC710 (__security_check_cookie.c)
 *     memset @ 0x1400AC800 (memset.c)
 */

__int64 __fastcall FxUsbDevice::GetPortStatus(FxUsbDevice *this, IFxMemory *PortStatus)
{
  FxRequestBuffer *v4; // rbx
  __int64 v5; // rdi
  FxRequestBase *m_TrueRequest; // rdx
  int v7; // ebx
  _WDF_REQUEST_SEND_OPTIONS options; // [rsp+20h] [rbp-E0h] BYREF
  FxInternalIoctlOthersContext context; // [rsp+30h] [rbp-D0h] BYREF
  FxSyncRequest syncRequest; // [rsp+A0h] [rbp-60h] BYREF
  FxRequestBuffer args[3]; // [rsp+1D0h] [rbp+D0h] BYREF

  context.m_RequestType = 2;
  memset(&context.m_CompletionParams, 0, 80);
  context.m_CompletionParams.Size = 72;
  context.__vftable = (FxInternalIoctlOthersContext_vtbl *)FxInternalIoctlOthersContext::`vftable';
  *(_OWORD *)context.m_MemoryObjects = 0LL;
  context.m_CompletionParams.Type = WdfRequestTypeNoFormat;
  v4 = args;
  v5 = 3LL;
  do
  {
    FxRequestBuffer::FxRequestBuffer(v4++);
    --v5;
  }
  while ( v5 );
  FxSyncRequest::FxSyncRequest(&syncRequest, this->m_Globals, &context, 0LL);
  m_TrueRequest = syncRequest.m_TrueRequest;
  LODWORD(PortStatus->__vftable) = 0;
  args[0].u.Mdl.Length = 0;
  args[1].u.Memory.Memory = 0LL;
  args[1].u.Mdl.Length = 0;
  args[2].u.Memory.Memory = 0LL;
  args[2].u.Mdl.Length = 0;
  args[0].DataType = FxRequestBufferBuffer;
  args[0].u.Memory.Memory = PortStatus;
  args[1].DataType = FxRequestBufferBuffer;
  args[2].DataType = FxRequestBufferBuffer;
  v7 = FxIoTarget::FormatInternalIoctlOthersRequest(this, m_TrueRequest, 0x220013u, args);
  if ( v7 >= 0 )
  {
    options.Timeout = 0LL;
    options.Size = 16;
    options.Flags = 4;
    v7 = FxIoTarget::SubmitSync(this, syncRequest.m_TrueRequest, &options, 0LL);
  }
  FxSyncRequest::~FxSyncRequest(&syncRequest);
  return (unsigned int)v7;
}
