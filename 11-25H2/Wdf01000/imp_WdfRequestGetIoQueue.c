/*
 * XREFs of imp_WdfRequestGetIoQueue @ 0x14005B240
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ @ 0x140047E80 (-GetCurrentQueue@FxRequest@@QEAAPEAVFxIoQueue@@XZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFQUEUE__ *__fastcall imp_WdfRequestGetIoQueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Request)
{
  __int64 v3; // rcx
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueue *m_IoQueue; // r9
  unsigned __int16 m_ObjectSize; // cx
  unsigned __int64 v8; // r9
  FxRequest_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-18h] BYREF
  __int16 v16; // [rsp+58h] [rbp-10h]
  __int16 v17; // [rsp+5Ah] [rbp-Eh]
  int v18; // [rsp+5Ch] [rbp-Ch]
  FxRequest *pRequest; // [rsp+78h] [rbp+10h] BYREF

  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v3) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v17 = v3;
    v18 = 0;
    v10 = flags->__vftable;
    v16 = 4104;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v11, v12, v13, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( flags->m_Completed || (m_IoQueue = flags->m_IoQueue) == 0LL )
  {
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_q(m_Globals, 5u, 0x10u, 0x45u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request);
    return 0LL;
  }
  if ( !flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction
    && *(FxIoQueue **)(flags->m_DeviceBase[3].m_SpinLock.m_Lock + 144) == FxRequest::GetCurrentQueue(flags) )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xDu, 0x46u, WPP_FxRequestApi_cpp_Traceguids, flags);
    FxVerifierDbgBreakPoint(m_Globals);
    return 0LL;
  }
  m_ObjectSize = m_IoQueue->m_ObjectSize;
  v8 = (unsigned __int64)m_IoQueue ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    return 0LL;
  return (WDFQUEUE__ *)v8;
}
