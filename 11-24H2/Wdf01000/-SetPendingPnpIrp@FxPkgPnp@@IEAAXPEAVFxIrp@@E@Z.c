/*
 * XREFs of ?SetPendingPnpIrp@FxPkgPnp@@IEAAXPEAVFxIrp@@E@Z @ 0x1400711E0
 * Callers:
 *     ?_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140071090 (-_PnpStartDeviceCompletionRoutine@FxPkgFdo@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x140071160 (-_PnpStartDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1400711A8 (-PnpSurpriseRemoval@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400A2DB0 (-_PnpEject@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6680 (-_PnpCancelRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A66C0 (-_PnpCancelStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6700 (-_PnpQueryRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6740 (-_PnpQueryStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1400A6770 (-_PnpStopDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_cqcqq @ 0x1400A6AAC (WPP_IFR_SF_cqcqq.c)
 */

void __fastcall FxPkgPnp::SetPendingPnpIrp(FxPkgPnp *this, FxIrp *Irp, unsigned __int8 MarkIrpPending)
{
  _IRP *flags; // rax
  FxDeviceBase *m_DeviceBase; // r8
  _IRP *globals; // r9
  unsigned __int16 m_ObjectSize; // cx
  const void *id; // r8
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  FxDeviceBase *v11; // r8
  unsigned __int16 v12; // ax
  unsigned __int64 v13; // r8
  const _GUID *v14; // [rsp+20h] [rbp-38h]

  flags = this->m_PendingPnPIrp;
  if ( flags )
  {
    m_DeviceBase = this->m_DeviceBase;
    globals = Irp->m_Irp;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    id = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
    if ( !m_ObjectSize )
      id = 0LL;
    WPP_IFR_SF_cqcqq(
      this->m_Globals,
      (unsigned __int8)CurrentStackLocation,
      (unsigned int)id,
      (unsigned __int16)globals,
      v14,
      CurrentStackLocation->MinorFunction,
      globals,
      flags->Tail.Overlay.CurrentStackLocation->MinorFunction,
      flags,
      id);
    v11 = this->m_DeviceBase;
    v12 = v11->m_ObjectSize;
    v13 = (unsigned __int64)v11 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v12 )
      v13 = 0LL;
    FxVerifierBugCheckWorker(this->m_Globals, WDF_PNP_FATAL_ERROR, v13, (unsigned __int64)Irp->m_Irp);
  }
  if ( MarkIrpPending )
    Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  this->m_PendingPnPIrp = Irp->m_Irp;
}
