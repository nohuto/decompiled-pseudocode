/*
 * XREFs of imp_WdfIoTargetCloseForQueryRemove @ 0x14009B210
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x14001146C (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     WPP_IFR_SF_q @ 0x14001FA38 (WPP_IFR_SF_q.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 */

void __fastcall imp_WdfIoTargetCloseForQueryRemove(_WDF_DRIVER_GLOBALS *DriverGlobals, WDFIOTARGET__ *IoTarget)
{
  _FX_DRIVER_GLOBALS *v2; // rbx
  unsigned __int8 v4; // r8
  FxIoTargetRemote *pTarget; // [rsp+40h] [rbp+8h] BYREF
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+50h] [rbp+18h] BYREF

  pTarget = 0LL;
  v2 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)IoTarget,
    0x1201u,
    (void **)&pTarget,
    &pFxDriverGlobals);
  if ( v2->FxVerboseOn )
    WPP_IFR_SF_q(v2, 5u, 0xEu, 0x17u, WPP_FxIoTargetAPI_cpp_Traceguids, IoTarget);
  if ( (int)FxVerifierCheckIrqlLevel(v2, 0) >= 0 )
    FxIoTargetRemote::Close(pTarget, 1, v4);
}
