/*
 * XREFs of imp_WdfDmaTransactionAllocateResources @ 0x140086900
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z @ 0x14004442C (-GetDmaDescription@FxDmaEnabler@@QEAAPEAU_FxDmaDescription@@W4_WDF_DMA_DIRECTION@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@@PEAX@Z2@Z @ 0x14008767C (-ReserveAdapter@FxDmaPacketTransaction@@QEAAJKW4_WDF_DMA_DIRECTION@@P6AXPEAUWDFDMATRANSACTION__@.c)
 */

int __fastcall imp_WdfDmaTransactionAllocateResources(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        _WDF_DMA_DIRECTION DmaDirection,
        unsigned int RequiredMapRegisters,
        void (__fastcall *EvtReserveDmaFunction)(WDFDMATRANSACTION__ *, void *),
        void *EvtReserveDmaContext)
{
  unsigned __int8 v9; // dl
  __int64 v10; // rcx
  FxDmaPacketTransaction *v11; // r10
  __int16 v12; // ax
  const void *v13; // rcx
  int v14; // ebx
  _FX_DRIVER_GLOBALS *v15; // rcx
  unsigned int v16; // eax
  int v17; // ecx
  _FX_DRIVER_GLOBALS *v18; // rdi
  _WDF_DMA_DIRECTION _a2; // [rsp+30h] [rbp-28h]
  FxDmaPacketTransaction *pDmaTrans; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pDmaTrans = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( FxDmaEnabler::GetDmaDescription(pDmaTrans->m_DmaEnabler, WdfDmaDirectionReadFromDevice)->m_SimplexAdapterInfo.DeviceDescription.Version != 3 )
  {
    v12 = *(_WORD *)(v10 + 10);
    v13 = (const void *)(v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v14 = -1073741808;
    if ( !v12 )
      v13 = 0LL;
    WPP_IFR_SF_qqd(
      pFxDriverGlobals,
      2u,
      0xFu,
      0x21u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      v13,
      0xC0000010);
    v15 = pFxDriverGlobals;
    goto LABEL_14;
  }
  v16 = *(_DWORD *)(v10 + 376);
  if ( v16 > 8 || (v17 = 394, !_bittest(&v17, v16)) )
  {
    v18 = pFxDriverGlobals;
    v14 = -1073741808;
    WPP_IFR_SF_qDd(
      pFxDriverGlobals,
      v9,
      0xFu,
      0x22u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      v16,
      0xC0000010);
    goto LABEL_13;
  }
  if ( (unsigned int)DmaDirection > WdfDmaDirectionWriteToDevice )
  {
    v14 = -1073741811;
    _a2 = DmaDirection;
    v18 = pFxDriverGlobals;
    WPP_IFR_SF_qDd(
      pFxDriverGlobals,
      v9,
      0xFu,
      0x23u,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      _a2,
      0xC000000D);
LABEL_13:
    v15 = v18;
LABEL_14:
    FxVerifierDbgBreakPoint(v15);
    return v14;
  }
  if ( !EvtReserveDmaFunction )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  return FxDmaPacketTransaction::ReserveAdapter(
           v11,
           RequiredMapRegisters,
           DmaDirection,
           EvtReserveDmaFunction,
           EvtReserveDmaContext);
}
