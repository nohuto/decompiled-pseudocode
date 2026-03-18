/*
 * XREFs of ?_PowerPolicyUsbSelectiveSuspendCompletionRoutine@FxPkgPnp@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140003490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z @ 0x140004FB4 (-SaveRequestD0IrpReasonHint@FxPkgPnp@@QEAAXW4RequestDIrpReason@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PowerPolicyUsbSelectiveSuspendCompletionRoutine(
        _DEVICE_OBJECT *DeviceObject,
        _IRP *Irp,
        FxPkgPnp *Context)
{
  __int64 v4; // rcx
  int v5; // edx
  int *_a3; // r10
  unsigned __int8 v7; // r8

  FxPkgPnp::SaveRequestD0IrpReasonHint(Context, RequestD0ForUsbSs);
  WPP_IFR_SF_qqqd(
    Context->m_Globals,
    4u,
    v5 - 2,
    v5 + 36,
    WPP_PowerPolicyStateMachine_cpp_Traceguids,
    *(const void **)(v4 + 96),
    *(const void **)(*(_QWORD *)(v4 + 96) + 144LL),
    _a3,
    _a3[12]);
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolUsbSelectiveSuspendCompleted, v7);
  return 3221225494LL;
}
