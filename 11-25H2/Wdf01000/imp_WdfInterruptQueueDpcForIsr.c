/*
 * XREFs of imp_WdfInterruptQueueDpcForIsr @ 0x140057FE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

BOOLEAN __fastcall imp_WdfInterruptQueueDpcForIsr(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 Interrupt)
{
  __int64 v3; // rcx
  FxInterrupt *flags; // rbx
  FxInterrupt_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxInterrupt **p_pFxInterrupt; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxInterrupt *pFxInterrupt; // [rsp+78h] [rbp+10h] BYREF

  if ( !Interrupt )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1027uLL);
  LOWORD(v3) = 0;
  flags = (FxInterrupt *)(~Interrupt & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Interrupt & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxInterrupt *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4135 )
  {
    pFxInterrupt = flags;
  }
  else
  {
    pFxInterrupt = 0LL;
    p_pFxInterrupt = &pFxInterrupt;
    v13 = v3;
    v14 = 0;
    v6 = flags->__vftable;
    v12 = 4135;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pFxInterrupt) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)Interrupt, 0x1027u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, Interrupt, 0x1027uLL);
    }
    flags = pFxInterrupt;
  }
  return KeInsertQueueDpc(&flags->m_Dpc, flags, 0LL);
}
