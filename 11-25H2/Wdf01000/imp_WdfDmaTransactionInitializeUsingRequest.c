/*
 * XREFs of imp_WdfDmaTransactionInitializeUsingRequest @ 0x140086C90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x140013260 (-GetDeviceControlOutputMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x140026620 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_DMA_DIRECTION@@PEAU_SCATTER_GATHER_LIST@@@Z3PEAU_MDL@@_KK@Z @ 0x140063454 (-Initialize@FxDmaTransactionBase@@QEAAJP6AEPEAUWDFDMATRANSACTION__@@PEAUWDFDEVICE__@@PEAXW4_WDF_.c)
 *     ?GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z @ 0x1400698B8 (-GetMdl@FxRequest@@QEAAJPEAPEAU_MDL@@@Z.c)
 *     ?SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ @ 0x14006A414 (-SupportsChainedMdls@FxDmaEnabler@@QEAAEXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_LqqLd @ 0x14008618C (WPP_IFR_SF_LqqLd.c)
 *     WPP_IFR_SF_Lqqd @ 0x1400862C8 (WPP_IFR_SF_Lqqd.c)
 *     WPP_IFR_SF_qddd @ 0x1400863E4 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_qqdd @ 0x140086788 (WPP_IFR_SF_qqdd.c)
 */

__int64 __fastcall imp_WdfDmaTransactionInitializeUsingRequest(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDMATRANSACTION__ *DmaTransaction,
        WDFREQUEST__ *Request,
        unsigned __int8 (__fastcall *EvtProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *),
        unsigned int DmaDirection)
{
  _WDF_DMA_DIRECTION v8; // edi
  unsigned int _a3; // ebx
  _FX_DRIVER_GLOBALS *v11; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned __int8 MajorFunction; // dl
  unsigned __int16 v14; // r9
  unsigned int Options; // r14d
  int DeviceControlOutputMdl; // eax
  unsigned __int8 v17; // dl
  FxDmaTransactionBase *v18; // r10
  unsigned int ByteCount; // eax
  int v20; // eax
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-50h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp-20h] BYREF
  FxRequest *pReqObj; // [rsp+58h] [rbp-18h] BYREF
  FxDmaTransactionBase *pDmaTrans; // [rsp+60h] [rbp-10h] BYREF
  unsigned __int64 retaddr; // [rsp+A8h] [rbp+38h]
  _MDL *mdl; // [rsp+B0h] [rbp+40h] BYREF
  unsigned __int8 (__fastcall *ProgramDmaFunction)(WDFDMATRANSACTION__ *, WDFDEVICE__ *, void *, _WDF_DMA_DIRECTION, _SCATTER_GATHER_LIST *); // [rsp+C8h] [rbp+58h]

  ProgramDmaFunction = EvtProgramDmaFunction;
  pDmaTrans = 0LL;
  pReqObj = 0LL;
  mdl = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)DmaTransaction,
    0x1401u,
    (void **)&pDmaTrans,
    &pFxDriverGlobals);
  if ( !EvtProgramDmaFunction )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v8 = DmaDirection;
  if ( DmaDirection > 1 )
  {
    _a3 = -1073741811;
    WPP_IFR_SF_qqdd(
      pFxDriverGlobals,
      2u,
      0xFu,
      0xAu,
      WPP_FxDmaTransactionAPI_cpp_Traceguids,
      DmaTransaction,
      Request,
      DmaDirection,
      -1073741811);
    return _a3;
  }
  v11 = pFxDriverGlobals;
  FxObjectHandleGetPtr(pFxDriverGlobals, (unsigned __int64)Request, 0x1008u, (void **)&pReqObj);
  CurrentStackLocation = pReqObj->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( CurrentStackLocation->MajorFunction == 3 )
  {
    if ( v8 )
    {
      WPP_IFR_SF_LqqLd(
        v11,
        3u,
        (unsigned int)pReqObj,
        0xBu,
        (const _GUID *)ObjectGlobals,
        v8,
        DmaTransaction,
        Request,
        3u);
      return 3221225488LL;
    }
    goto LABEL_27;
  }
  if ( CurrentStackLocation->MajorFunction == 4 )
  {
    if ( v8 != WdfDmaDirectionWriteToDevice )
    {
      WPP_IFR_SF_LqqLd(
        v11,
        MajorFunction,
        (unsigned int)pReqObj,
        0xCu,
        (const _GUID *)ObjectGlobals,
        v8,
        DmaTransaction,
        Request,
        4u);
      return 3221225488LL;
    }
    goto LABEL_27;
  }
  if ( (unsigned int)CurrentStackLocation->MajorFunction - 14 >= 2 )
  {
    _a3 = -1073741808;
LABEL_30:
    WPP_IFR_SF_qqd(v11, 2u, 0xFu, 0x10u, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, DmaTransaction, _a3);
    return _a3;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart & 3 )
  {
    case 0u:
      if ( v8 == WdfDmaDirectionWriteToDevice )
      {
        Options = CurrentStackLocation->Parameters.Create.Options;
LABEL_28:
        DeviceControlOutputMdl = FxRequest::GetMdl(pReqObj, &mdl, (unsigned __int8)pReqObj);
        goto LABEL_29;
      }
LABEL_27:
      Options = CurrentStackLocation->Parameters.Read.Length;
      goto LABEL_28;
    case 1u:
      if ( v8 != WdfDmaDirectionWriteToDevice )
      {
        v14 = 13;
        goto LABEL_19;
      }
      break;
    case 2u:
      if ( v8 )
      {
        v14 = 14;
LABEL_19:
        WPP_IFR_SF_Lqqd(
          v11,
          MajorFunction,
          (unsigned int)pReqObj,
          v14,
          (const _GUID *)ObjectGlobals,
          v8,
          DmaTransaction,
          Request);
        return 3221225488LL;
      }
      break;
    default:
      _a3 = -1073741808;
      WPP_IFR_SF_qd(v11, 2u, 0xFu, 0xFu, WPP_FxDmaTransactionAPI_cpp_Traceguids, Request, -1073741808);
      FxVerifierDbgBreakPoint(v11);
      goto LABEL_30;
  }
  Options = CurrentStackLocation->Parameters.Read.Length;
  DeviceControlOutputMdl = FxRequest::GetDeviceControlOutputMdl(pReqObj, &mdl, (unsigned __int8)pReqObj);
LABEL_29:
  _a3 = DeviceControlOutputMdl;
  if ( DeviceControlOutputMdl < 0 )
    goto LABEL_30;
  if ( !Options )
  {
    _a3 = -1073741808;
    WPP_IFR_SF_D(v11, 2u, 0xFu, 0x11u, WPP_FxDmaTransactionAPI_cpp_Traceguids, 0xC0000010);
    return _a3;
  }
  if ( !FxDmaEnabler::SupportsChainedMdls(pDmaTrans->m_DmaEnabler) )
  {
    ByteCount = mdl->ByteCount;
    if ( Options > ByteCount )
    {
      _a3 = -1073741811;
      WPP_IFR_SF_qddd(
        v11,
        v17,
        0xFu,
        0x12u,
        WPP_FxDmaTransactionAPI_cpp_Traceguids,
        Request,
        Options,
        ByteCount,
        -1073741811);
      return _a3;
    }
  }
  v20 = FxDmaTransactionBase::Initialize(v18, ProgramDmaFunction, v8, mdl, 0LL, Options);
  _a3 = v20;
  if ( v20 < 0 )
  {
    WPP_IFR_SF_qd(v11, 2u, 0xFu, 0x13u, WPP_FxDmaTransactionAPI_cpp_Traceguids, DmaTransaction, v20);
    return _a3;
  }
  pDmaTrans->m_EncodedRequest = pReqObj;
  return 0LL;
}
