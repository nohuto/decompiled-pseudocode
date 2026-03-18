/*
 * XREFs of imp_WdfRequestRetrieveInputMemory @ 0x140049150
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x140049530 (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveInputMemory(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        WDFMEMORY__ **Memory)
{
  __int64 v5; // rcx
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  int MemoryObject; // ebx
  FxRequest_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-50h]
  unsigned __int64 length; // [rsp+50h] [rbp-20h] BYREF
  void *pBuffer; // [rsp+58h] [rbp-18h] BYREF
  FxRequest **p_pRequest; // [rsp+60h] [rbp-10h] BYREF
  __int16 v18; // [rsp+68h] [rbp-8h]
  __int16 v19; // [rsp+6Ah] [rbp-6h]
  int v20; // [rsp+6Ch] [rbp-4h]
  void *retaddr; // [rsp+98h] [rbp+28h]
  FxRequest *pRequest; // [rsp+A8h] [rbp+38h] BYREF
  IFxMemory *pMemory; // [rsp+B8h] [rbp+48h] BYREF

  pBuffer = 0LL;
  length = 0LL;
  pMemory = 0LL;
  if ( !Request )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1008uLL);
  LOWORD(v5) = 0;
  flags = (FxRequest *)(~Request & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Request & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxRequest *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4104 )
  {
    pRequest = flags;
  }
  else
  {
    pRequest = 0LL;
    p_pRequest = &pRequest;
    v19 = v5;
    v20 = 0;
    v10 = flags->__vftable;
    v18 = 4104;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v11, v12, v13, traceGuid, (const void *)Request, 0x1008u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !Memory )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( flags->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->MajorFunction == 3 )
  {
    MemoryObject = -1073741808;
    if ( m_Globals->FxVerboseOn )
      WPP_IFR_SF_qd(m_Globals, 5u, 0x10u, 0x13u, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request, -1073741808);
  }
  else
  {
    MemoryObject = FxRequest::GetMemoryObject(flags, &pMemory, &pBuffer, &length);
    if ( MemoryObject >= 0 )
      *Memory = pMemory->GetHandle(pMemory);
  }
  return (unsigned int)MemoryObject;
}
