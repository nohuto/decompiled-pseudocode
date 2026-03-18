/*
 * XREFs of ?PostCreateDeviceInitialize@FxPkgFdo@@QEAAJXZ @ 0x1400436B0
 * Callers:
 *     ?FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x140048558 (-FdoInitialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 * Callees:
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x140043258 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ @ 0x140043B58 (-PostCreateDeviceInitialize@FxPkgPnp@@QEAAJXZ.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x140049F80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?QueryForDsfInterface@FxPkgFdo@@AEAAJXZ @ 0x140060E14 (-QueryForDsfInterface@FxPkgFdo@@AEAAJXZ.c)
 */

int __fastcall FxPkgFdo::PostCreateDeviceInitialize(FxPkgFdo *this)
{
  int result; // eax
  __int64 v3; // r9
  int Target; // edi
  __int64 v5; // r9
  FxDeviceBase *m_DeviceBase; // rcx

  result = FxPkgPnp::PostCreateDeviceInitialize(this);
  if ( result >= 0 )
  {
    if ( !this->m_Globals->FxDsfOn || (result = FxPkgFdo::QueryForDsfInterface(this), result >= 0) )
    {
      Target = FxDeviceBase::AllocateTarget(this->m_DeviceBase, &this->m_DefaultTarget, 0, v3);
      if ( Target >= 0 )
        FxObject::AddRef(
          this->m_DefaultTarget,
          this,
          1565,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
      m_DeviceBase = this->m_DeviceBase;
      if ( BYTE2(m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        Target = FxDeviceBase::AllocateTarget(m_DeviceBase, &this->m_SelfTarget, 1u, v5);
        if ( Target >= 0 )
          FxObject::AddRef(
            this->m_SelfTarget,
            this,
            1575,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgfdo.cpp");
      }
      return Target;
    }
  }
  return result;
}
