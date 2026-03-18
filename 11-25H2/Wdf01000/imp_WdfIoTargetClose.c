/*
 * XREFs of imp_WdfIoTargetClose @ 0x1400111E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_dd @ 0x140005770 (WPP_IFR_SF_dd.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x14001146C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

void __fastcall imp_WdfIoTargetClose(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget)
{
  __int64 v3; // rcx
  FxIoTargetRemote *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  FxIoTargetRemote_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  KIRQL CurrentIrql; // al
  const _GUID *traceGuid; // [rsp+20h] [rbp-48h]
  FxIoTargetRemote **p_pTarget; // [rsp+50h] [rbp-18h] BYREF
  __int16 v13; // [rsp+58h] [rbp-10h]
  __int16 v14; // [rsp+5Ah] [rbp-Eh]
  int v15; // [rsp+5Ch] [rbp-Ch]
  FxIoTargetRemote *pTarget; // [rsp+78h] [rbp+10h] BYREF

  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1201uLL);
  LOWORD(v3) = 0;
  flags = (FxIoTargetRemote *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxIoTargetRemote *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4609 )
  {
    pTarget = flags;
  }
  else
  {
    pTarget = 0LL;
    p_pTarget = &pTarget;
    v14 = v3;
    v15 = 0;
    v6 = flags->__vftable;
    v13 = 4609;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, traceGuid, (const void *)IoTarget, 0x1201u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1201uLL);
    }
  }
  m_Globals = pTarget->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x18u, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget);
  if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
  {
    WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    FxIoTargetRemote::Close(pTarget, FxIoTargetRemoteCloseReasonPlainClose);
  }
}
