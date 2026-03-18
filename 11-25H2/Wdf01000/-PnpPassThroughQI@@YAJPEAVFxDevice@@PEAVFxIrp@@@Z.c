/*
 * XREFs of ?PnpPassThroughQI@@YAJPEAVFxDevice@@PEAVFxIrp@@@Z @ 0x14004003C
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x140018534 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     ?GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1400412C0 (-GetAttachedDeviceReference@FxDeviceBase@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x140082584 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 */

__int64 __fastcall PnpPassThroughQI(unsigned __int64 Device, FxIrp *Irp)
{
  int Status; // r15d
  _DEVICE_OBJECT *_a2; // rbx
  _IRP *v6; // rax
  _IRP *v7; // rsi
  unsigned int v8; // edi
  const void *_a1; // rcx
  FxAutoIrp fxFwdIrp; // [rsp+70h] [rbp+8h] BYREF
  MxDeviceObject pTopOfStack; // [rsp+78h] [rbp+10h] BYREF

  Status = Irp->m_Irp->IoStatus.Status;
  pTopOfStack.m_DeviceObject = FxDeviceBase::GetAttachedDeviceReference(*(FxDeviceBase **)(Device + 224));
  _a2 = pTopOfStack.m_DeviceObject;
  v6 = IoAllocateIrp(pTopOfStack.m_DeviceObject->StackSize, 0);
  v7 = v6;
  if ( v6 )
  {
    fxFwdIrp.m_Irp = v6;
    PnpPassThroughQIWorker(&pTopOfStack, Irp, &fxFwdIrp);
    v8 = v7->IoStatus.Status;
    if ( v8 == -1073741637 )
      v8 = Status;
    Irp->m_Irp->IoStatus.Status = v8;
    Irp->m_Irp->IoStatus.Information = v7->IoStatus.Information;
    IoFreeIrp(v7);
  }
  else
  {
    v8 = -1073741670;
    _a1 = (const void *)(Device ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !*(_WORD *)(Device + 10) )
      _a1 = 0LL;
    WPP_IFR_SF_qqd(
      *(_FX_DRIVER_GLOBALS **)(Device + 16),
      2u,
      0xCu,
      0x25u,
      WPP_FxPkgPnp_cpp_Traceguids,
      _a1,
      _a2,
      0xC000009A);
  }
  ObfDereferenceObject(_a2);
  return v8;
}
