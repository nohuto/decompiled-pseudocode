/*
 * XREFs of ?AllocateReservedRequest@FxIoQueue@@QEAAJPEAPEAVFxRequest@@@Z @ 0x1400A1054
 * Callers:
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1400A14BC (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x140017360 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 *     ?FreeRequest@FxRequest@@QEAAXXZ @ 0x1400839A8 (-FreeRequest@FxRequest@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxIoQueue::AllocateReservedRequest(FxIoQueue *this, FxRequest **Request)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxCxDeviceInfo *m_CxDeviceInfo; // rdx
  _WDF_OBJECT_ATTRIBUTES *p_RequestAttributes; // rdx
  signed int _a1; // eax
  unsigned int v8; // esi
  FxRequest *v9; // rbx
  _FXIO_FORWARD_PROGRESS_CONTEXT *m_FwdProgContext; // rax
  unsigned __int64 v11; // rdx
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v13; // rdi
  int (__fastcall *Method)(WDFQUEUE__ *, WDFREQUEST__ *); // rax
  signed int v15; // eax
  FxRequest *pRequest; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  *Request = 0LL;
  m_CxDeviceInfo = this->m_CxDeviceInfo;
  pRequest = 0LL;
  if ( m_CxDeviceInfo )
    p_RequestAttributes = &m_CxDeviceInfo->RequestAttributes;
  else
    p_RequestAttributes = (_WDF_OBJECT_ATTRIBUTES *)&this->m_DeviceBase[2].m_ExecutionLevel;
  _a1 = FxRequest::_CreateForPackage((FX_POOL *)this->m_DeviceBase, p_RequestAttributes, 0LL, (FX_POOL ***)&pRequest);
  v8 = _a1;
  if ( _a1 >= 0 )
  {
    v9 = pRequest;
    pRequest->m_Reserved = 1;
    v9->m_IoQueue = this;
    v9->m_ForwardProgressQueue = this;
    v9->m_Completed = 0;
    if ( !this->m_FwdProgContext->m_IoReservedResourcesAllocate.Method )
      goto LABEL_14;
    v9->m_Presented = 1;
    m_FwdProgContext = this->m_FwdProgContext;
    v11 = v9->m_ObjectSize ? (unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL : 0LL;
    m_ObjectSize = this->m_ObjectSize;
    v13 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    Method = m_FwdProgContext->m_IoReservedResourcesAllocate.Method;
    if ( !m_ObjectSize )
      v13 = 0LL;
    v15 = Method((WDFQUEUE__ *)v13, (WDFREQUEST__ *)v11);
    v8 = v15;
    if ( v15 < 0 )
    {
      WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0x6Bu, WPP_FxIoQueue_cpp_Traceguids, v15);
      FxRequest::FreeRequest(v9);
    }
    else
    {
LABEL_14:
      *Request = v9;
    }
  }
  else
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xDu, 0x6Au, WPP_FxIoQueue_cpp_Traceguids, _a1);
  }
  return v8;
}
