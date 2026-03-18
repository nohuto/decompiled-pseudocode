/*
 * XREFs of imp_WdfCompanionTargetSendTaskSynchronously @ 0x14006F9D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDd @ 0x14000562C (WPP_IFR_SF_qDd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140007A40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140026530 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z @ 0x14006FB54 (-SendTaskSynchronously@FxCompanionTarget@@QEAAJGKPEAU_WDF_MEMORY_DESCRIPTOR@@0PEA_JPEA_K@Z.c)
 */

int __fastcall imp_WdfCompanionTargetSendTaskSynchronously(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOMPANIONTARGET__ *CompanionTarget,
        unsigned __int16 TaskQueueIdentifier,
        unsigned int TaskOperationCode,
        _WDF_MEMORY_DESCRIPTOR *InputBuffer,
        _WDF_MEMORY_DESCRIPTOR *OutputBuffer,
        _WDF_TASK_SEND_OPTIONS *TaskOptions,
        unsigned __int64 *BytesReturned)
{
  __int64 *Timeout; // rbx
  int result; // eax
  unsigned int Flags; // ecx
  FxCompanionTarget *pCompanionTarget; // [rsp+40h] [rbp-18h] BYREF
  _FX_DRIVER_GLOBALS *fxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pCompanionTarget = 0LL;
  fxDriverGlobals = 0LL;
  Timeout = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)CompanionTarget,
    0x1038u,
    (void **)&pCompanionTarget,
    &fxDriverGlobals);
  result = FxVerifierCheckIrqlLevel(fxDriverGlobals, 0);
  if ( result >= 0 )
  {
    if ( TaskOptions )
    {
      if ( TaskOptions->Size != 16 )
      {
        WPP_IFR_SF_qdd(
          fxDriverGlobals,
          2u,
          6u,
          0xAu,
          WPP_FxCompanionTargetApi_cpp_Traceguids,
          TaskOptions,
          16,
          TaskOptions->Size);
        return -1073741811;
      }
      Flags = TaskOptions->Flags;
      if ( (Flags & 0xFFFFFFFC) != 0 )
      {
        WPP_IFR_SF_qDd(
          fxDriverGlobals,
          0x10u,
          6u,
          0xBu,
          WPP_FxCompanionTargetApi_cpp_Traceguids,
          TaskOptions,
          Flags,
          3u);
        return -1073741811;
      }
      if ( (Flags & 1) != 0 && TaskOptions->Timeout )
        Timeout = &TaskOptions->Timeout;
    }
    if ( (!InputBuffer || InputBuffer->Type == WdfMemoryDescriptorTypeBuffer)
      && (!OutputBuffer || OutputBuffer->Type == WdfMemoryDescriptorTypeBuffer) )
    {
      return FxCompanionTarget::SendTaskSynchronously(
               pCompanionTarget,
               TaskQueueIdentifier,
               TaskOperationCode,
               InputBuffer,
               OutputBuffer,
               Timeout,
               BytesReturned);
    }
    WPP_IFR_SF_(fxDriverGlobals, 2u, 6u, 0xCu, WPP_FxCompanionTargetApi_cpp_Traceguids);
    return -1073741811;
  }
  return result;
}
