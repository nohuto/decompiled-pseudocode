/*
 * XREFs of imp_WdfDmaTransactionExecute @ 0x14005F2F0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?AddIrpReference@FxRequest@@QEAAXXZ @ 0x1400208E4 (-AddIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?ReleaseIrpReference@FxRequest@@QEAAXXZ @ 0x140052BFC (-ReleaseIrpReference@FxRequest@@QEAAXXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_ql @ 0x140086654 (WPP_IFR_SF_ql.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

__int64 __fastcall imp_WdfDmaTransactionExecute(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaTransaction,
        void *Context)
{
  __int64 v5; // rcx
  unsigned __int64 flags; // rbx
  int v7; // edx
  _FX_DRIVER_GLOBALS *v8; // rdi
  FxRequest *v9; // rcx
  FxObject **v10; // rdi
  __int64 v11; // rax
  int v12; // esi
  __int64 v14; // rax
  unsigned __int8 v15; // dl
  unsigned int v16; // r8d
  unsigned __int16 v17; // r9
  const void *v18; // rcx
  __int16 v19; // ax
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rbx
  FxObject *v22; // rcx
  FxRequest *v23; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxDmaTransactionBase **p_pDmaTrans; // [rsp+50h] [rbp-28h] BYREF
  __int16 v26; // [rsp+58h] [rbp-20h]
  __int16 v27; // [rsp+5Ah] [rbp-1Eh]
  int v28; // [rsp+5Ch] [rbp-1Ch]
  FxDmaTransactionBase *pDmaTrans; // [rsp+88h] [rbp+10h] BYREF

  if ( !DmaTransaction )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1401uLL);
  LOWORD(v5) = 0;
  flags = ~DmaTransaction & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (DmaTransaction & 1) != 0 )
  {
    v5 = *(unsigned __int16 *)flags;
    flags -= v5;
  }
  if ( *(_WORD *)(flags + 8) == 5121 )
  {
    pDmaTrans = (FxDmaTransactionBase *)flags;
  }
  else
  {
    pDmaTrans = 0LL;
    p_pDmaTrans = &pDmaTrans;
    v27 = v5;
    v28 = 0;
    v14 = *(_QWORD *)flags;
    v26 = 5121;
    if ( (*(int (__fastcall **)(unsigned __int64, FxDmaTransactionBase ***))(v14 + 40))(flags, &p_pDmaTrans) < 0 )
    {
      WPP_IFR_SF_qDqD(
        *(_FX_DRIVER_GLOBALS **)(flags + 16),
        v15,
        v16,
        v17,
        traceGuid,
        (const void *)DmaTransaction,
        0x1401u,
        (const void *)flags,
        *(unsigned __int16 *)(flags + 8));
      FxVerifierBugCheckWorker(*(_FX_DRIVER_GLOBALS **)(flags + 16), WDF_INVALID_HANDLE, DmaTransaction, 0x1401uLL);
    }
    flags = (unsigned __int64)pDmaTrans;
  }
  v7 = *(_DWORD *)(flags + 120);
  v8 = *(_FX_DRIVER_GLOBALS **)(flags + 16);
  if ( v7 != 3 )
  {
    v18 = (const void *)(flags ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(flags + 10) )
      v18 = 0LL;
    WPP_IFR_SF_ql(v8, 2u, 0xFu, 0x15u, WPP_FxDmaTransactionBase_cpp_Traceguids, v18, v7);
    v19 = *(_WORD *)(flags + 10);
    v20 = *(int *)(flags + 120);
    v21 = flags ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v19 )
      v21 = 0LL;
    FxVerifierBugCheckWorker(v8, WDF_DMA_FATAL_ERROR, v21, v20);
  }
  v9 = *(FxRequest **)(flags + 144);
  v10 = (FxObject **)(flags + 144);
  if ( v9 )
  {
    FxRequest::AddIrpReference(v9);
    FxObject::AddRef(
      *v10,
      (void *)flags,
      274,
      "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    *v10 = (FxObject *)((unsigned __int64)*v10 | 1);
  }
  v11 = *(_QWORD *)flags;
  *(_DWORD *)(flags + 120) = 4;
  *(_QWORD *)(flags + 160) = Context;
  v12 = (*(__int64 (__fastcall **)(unsigned __int64))(v11 + 72))(flags);
  if ( v12 < 0 )
  {
    v22 = *v10;
    *(_DWORD *)(flags + 120) = 6;
    *(_QWORD *)(flags + 160) = 0LL;
    if ( v22 )
    {
      v23 = (FxRequest *)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFFEuLL);
      *v10 = v23;
      FxRequest::ReleaseIrpReference(v23);
      (*v10)->Release(
        *v10,
        (void *)flags,
        302,
        "minkernel\\wdf\\framework\\kmdf\\inc\\private\\FxDmaTransactionBase.hpp");
    }
  }
  return (unsigned int)v12;
}
