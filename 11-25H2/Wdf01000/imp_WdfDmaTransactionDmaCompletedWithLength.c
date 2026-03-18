/*
 * XREFs of imp_WdfDmaTransactionDmaCompletedWithLength @ 0x140065880
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1400659BC (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall imp_WdfDmaTransactionDmaCompletedWithLength(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        unsigned __int64 TransferredLength,
        int *pStatus)
{
  __int64 v7; // rcx
  FxDmaTransactionBase *flags; // rbx
  FxDmaTransactionBase_vtbl *v10; // rax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  const _GUID *v14; // [rsp+20h] [rbp-58h]
  FxDmaTransactionBase **p_pDmaTrans; // [rsp+50h] [rbp-28h] BYREF
  __int16 v16; // [rsp+58h] [rbp-20h]
  __int16 v17; // [rsp+5Ah] [rbp-1Eh]
  int v18; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDmaTransactionBase *pDmaTrans; // [rsp+88h] [rbp+10h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1401uLL);
  LOWORD(v7) = 0;
  flags = (FxDmaTransactionBase *)(~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (DmaTransaction & 1) != 0 )
  {
    v7 = LOWORD(flags->__vftable);
    flags = (FxDmaTransactionBase *)((char *)flags - v7);
  }
  if ( flags->m_Type == 5121 )
  {
    pDmaTrans = flags;
  }
  else
  {
    pDmaTrans = 0LL;
    p_pDmaTrans = &pDmaTrans;
    v17 = v7;
    v18 = 0;
    v10 = flags->__vftable;
    v16 = 5121;
    if ( v10->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v11, v12, v13, v14, (const void *)DmaTransaction, 0x1401u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    flags = pDmaTrans;
  }
  if ( !pStatus )
    FxVerifierNullBugCheck(flags->m_Globals, retaddr);
  return FxDmaTransactionBase::DmaCompleted(flags, TransferredLength, pStatus, FxDmaCompletionTypePartial);
}
