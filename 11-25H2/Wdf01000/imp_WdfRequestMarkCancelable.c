/*
 * XREFs of imp_WdfRequestMarkCancelable @ 0x140049DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z @ 0x140049F60 (-RequestCancelable@FxIoQueue@@QEAAJPEAVFxRequest@@EP6AXPEAUWDFREQUEST__@@@ZE@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfRequestMarkCancelable(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Request,
        void (__fastcall *EvtRequestCancel)(WDFREQUEST__ *))
{
  __int64 v5; // rcx
  FxRequest *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxIoQueue *m_IoQueue; // rcx
  FxRequest_vtbl *v9; // rax
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  unsigned __int16 v12; // r9
  const _GUID *FailIfIrpIsCancelled; // [rsp+20h] [rbp-58h]
  FxRequest **p_pRequest; // [rsp+50h] [rbp-28h] BYREF
  __int16 v15; // [rsp+58h] [rbp-20h]
  __int16 v16; // [rsp+5Ah] [rbp-1Eh]
  int v17; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxRequest *pRequest; // [rsp+88h] [rbp+10h] BYREF

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
    v16 = v5;
    v17 = 0;
    v9 = flags->__vftable;
    v15 = 4104;
    if ( v9->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pRequest) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v10,
        v11,
        v12,
        FailIfIrpIsCancelled,
        (const void *)Request,
        0x1008u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Request, 0x1008uLL);
    }
    flags = pRequest;
  }
  m_Globals = flags->m_Globals;
  if ( !EvtRequestCancel )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  if ( flags->m_Completed || (m_IoQueue = flags->m_IoQueue) == 0LL )
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0x10u, 0x4Fu, WPP_FxRequestApi_cpp_Traceguids, (const void *)Request);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxIoQueue::RequestCancelable(m_IoQueue, flags, 1u, EvtRequestCancel, 0);
  }
}
