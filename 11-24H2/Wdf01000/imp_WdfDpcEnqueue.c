/*
 * XREFs of imp_WdfDpcEnqueue @ 0x14005D100
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall imp_WdfDpcEnqueue(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Dpc)
{
  __int64 v3; // rcx
  FxDpc *flags; // rbx
  FxDpc_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxDpc **p_pFxDpc; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxDpc *pFxDpc; // [rsp+78h] [rbp+10h] BYREF

  if ( !Dpc )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1015uLL);
  LOWORD(v3) = 0;
  flags = (FxDpc *)(~Dpc & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Dpc & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxDpc *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4117 )
  {
    pFxDpc = flags;
  }
  else
  {
    pFxDpc = 0LL;
    p_pFxDpc = &pFxDpc;
    v13 = v3;
    v14 = 0;
    v6 = flags->__vftable;
    v12 = 4117;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFxDpc) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)Dpc, 0x1015u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Dpc, 0x1015uLL);
    }
    flags = pFxDpc;
  }
  return KeInsertQueueDpc(&flags->m_Dpc, 0LL, 0LL);
}
