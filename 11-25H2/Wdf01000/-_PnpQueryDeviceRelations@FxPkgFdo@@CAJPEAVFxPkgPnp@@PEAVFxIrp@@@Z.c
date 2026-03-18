/*
 * XREFs of ?_PnpQueryDeviceRelations@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140064020
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1400161AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140018E30 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z @ 0x14006418C (-HandleQueryDeviceRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAVFxRelatedDeviceList@@@Z.c)
 *     WPP_IFR_SF_L @ 0x1400A7188 (WPP_IFR_SF_L.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryDeviceRelations(FxPkgPnp *This, FxIrp *Irp, __int64 a3, unsigned __int16 a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  unsigned int Length; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _IRP *m_Irp; // rdi
  FxDeviceBase *m_DeviceBase; // rbx
  _IO_STACK_LOCATION *v11; // rax
  unsigned int v12; // esi
  _FX_DRIVER_GLOBALS *v13; // rcx
  signed int DeviceRelations; // eax
  const _GUID *traceGuid; // [rsp+20h] [rbp-18h]

  CurrentStackLocation = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
  Length = CurrentStackLocation->Parameters.Read.Length;
  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_L(
      m_Globals,
      (unsigned __int8)Irp,
      (unsigned int)CurrentStackLocation,
      a4,
      traceGuid,
      CurrentStackLocation->Parameters.Read.Length);
  if ( Length )
  {
    if ( Length != 3 )
    {
LABEL_5:
      m_Irp = Irp->m_Irp;
      m_DeviceBase = This->m_DeviceBase;
      v11 = Irp->m_Irp->Tail.Overlay.CurrentStackLocation;
      *(_OWORD *)&v11[-1].MajorFunction = *(_OWORD *)&v11->MajorFunction;
      *(_OWORD *)&v11[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v11->Parameters.NotifyDirectoryEx.CompletionFilter;
      *(_OWORD *)(&v11[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&v11->Parameters.SetQuota + 6);
      v11[-1].FileObject = v11->FileObject;
      v11[-1].Control = 0;
      v12 = IofCallDriver(This->m_DeviceBase->m_AttachedDevice.m_DeviceObject, Irp->m_Irp);
      IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, 0x20u);
      goto LABEL_6;
    }
    DeviceRelations = FxPkgPnp::HandleQueryDeviceRelations(This, Irp, This->m_RemovalDeviceList);
  }
  else
  {
    DeviceRelations = FxPkgPnp::HandleQueryBusRelations(This, Irp);
  }
  v12 = DeviceRelations;
  if ( DeviceRelations == -1073741637 || DeviceRelations >= 0 )
    goto LABEL_5;
  FxPkgPnp::CompletePnpRequest(This, Irp, DeviceRelations);
LABEL_6:
  v13 = This->m_Globals;
  if ( v13->FxVerboseOn )
    WPP_IFR_SF_D(v13, 5u, 0xCu, 0xCu, WPP_fxpkgfdo_cpp_Traceguids, v12);
  return v12;
}
