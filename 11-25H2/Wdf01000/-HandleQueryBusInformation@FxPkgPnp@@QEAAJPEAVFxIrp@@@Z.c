/*
 * XREFs of ?HandleQueryBusInformation@FxPkgPnp@@QEAAJPEAVFxIrp@@@Z @ 0x140079968
 * Callers:
 *     ?_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140079920 (-_PnpQueryBusInformation@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 */

__int64 __fastcall FxPkgPnp::HandleQueryBusInformation(FxPkgPnp *this, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  __int64 Pool2; // rax
  _IRP *m_Irp; // rcx
  unsigned int v7; // edi
  __int64 v8; // xmm1_8
  _IRP *v9; // rax
  FxDeviceBase *m_DeviceBase; // rdx
  const void *_a1; // rdx

  if ( this->m_BusInformation.BusTypeGuid.Data1 )
  {
    m_Globals = this->m_Globals;
    Pool2 = ExAllocatePool2(256LL, 24LL, m_Globals->Tag);
    if ( Pool2 )
    {
      m_Irp = Irp->m_Irp;
      v7 = 0;
      v8 = *(_QWORD *)&this->m_BusInformation.LegacyBusType;
      *(_GUID *)Pool2 = this->m_BusInformation.BusTypeGuid;
      *(_QWORD *)(Pool2 + 16) = v8;
      m_Irp->IoStatus.Information = Pool2;
    }
    else
    {
      v9 = Irp->m_Irp;
      v7 = -1073741670;
      v9->IoStatus.Information = 0LL;
      m_DeviceBase = this->m_DeviceBase;
      LOWORD(v9) = m_DeviceBase->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !(_WORD)v9 )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x1Eu, WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
    }
  }
  else
  {
    return (unsigned int)Irp->m_Irp->IoStatus.Status;
  }
  return v7;
}
