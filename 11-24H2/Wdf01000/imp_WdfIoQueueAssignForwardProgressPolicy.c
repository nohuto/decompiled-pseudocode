/*
 * XREFs of imp_WdfIoQueueAssignForwardProgressPolicy @ 0x1400A0760
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_DDd @ 0x140002768 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_D @ 0x14001177C (WPP_IFR_SF_D.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140016BF0 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x14001F580 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008305C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1400A14BC (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 */

int __fastcall imp_WdfIoQueueAssignForwardProgressPolicy(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFQUEUE__ *Queue,
        _WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY *ForwardProgressPolicy)
{
  int result; // eax
  int v5; // ebx
  unsigned int Size; // edx
  unsigned __int16 v7; // r9
  unsigned __int64 retaddr; // [rsp+48h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+8h] BYREF
  FxIoQueue *pQueue; // [rsp+60h] [rbp+18h] BYREF

  pQueue = 0LL;
  pFxDriverGlobals = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Queue,
    0x1003u,
    (void **)&pQueue,
    &pFxDriverGlobals);
  if ( !ForwardProgressPolicy )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  result = FxVerifierCheckIrqlLevel(pFxDriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( pQueue->m_SupportForwardProgress )
    {
      v5 = -1073741811;
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xDu, 0x12u, WPP_FxIoQueueApi_cpp_Traceguids, 0xC000000D);
      FxVerifierDbgBreakPoint(pFxDriverGlobals);
      return v5;
    }
    Size = ForwardProgressPolicy->Size;
    if ( ForwardProgressPolicy->Size != 40 )
    {
      v5 = -1073741820;
      WPP_IFR_SF_DDd(pFxDriverGlobals, Size, 0xDu, 0x13u, WPP_FxIoQueueApi_cpp_Traceguids, Size, 0x28u, -1073741820);
      return v5;
    }
    if ( ForwardProgressPolicy->ForwardProgressReservedPolicy == WdfIoForwardProgressReservedPolicyUseExamine
      && !ForwardProgressPolicy->ForwardProgressReservePolicySettings.Policy.ExaminePolicy.EvtIoWdmIrpForForwardProgress )
    {
      v7 = 20;
LABEL_12:
      v5 = -1073741811;
      WPP_IFR_SF_D(pFxDriverGlobals, 2u, 0xDu, v7, WPP_FxIoQueueApi_cpp_Traceguids, 0xC000000D);
      return v5;
    }
    if ( !ForwardProgressPolicy->TotalForwardProgressRequests )
    {
      v7 = 21;
      goto LABEL_12;
    }
    return FxIoQueue::AssignForwardProgressPolicy(pQueue, ForwardProgressPolicy);
  }
  return result;
}
