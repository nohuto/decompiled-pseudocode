/*
 * XREFs of ?Connect@FxInterrupt@@QEAAJK@Z @ 0x1400691CC
 * Callers:
 *     ?NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z @ 0x140068F18 (-NotifyResourceObjectsD0@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceReconnect@FxInterrupt@@QEAAJXZ @ 0x1400A94DC (-ForceReconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x140039FFC (WPP_IFR_SF_qqqd.c)
 *     ?InterruptEnable@FxInterrupt@@AEAAJXZ @ 0x14006939C (-InterruptEnable@FxInterrupt@@AEAAJXZ.c)
 *     ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x1400693E4 (-IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ.c)
 *     ?IsActiveForWake@FxInterrupt@@QEAAEXZ @ 0x140069440 (-IsActiveForWake@FxInterrupt@@QEAAEXZ.c)
 *     ?ConnectInternal@FxInterrupt@@QEAAJXZ @ 0x140069460 (-ConnectInternal@FxInterrupt@@QEAAJXZ.c)
 *     ?ReportActive@FxInterrupt@@QEAAXE@Z @ 0x1400696D8 (-ReportActive@FxInterrupt@@QEAAXE@Z.c)
 *     WPP_IFR_SF_qDDDDsdisd @ 0x1400A9B94 (WPP_IFR_SF_qDDDDsdisd.c)
 */

int __fastcall FxInterrupt::Connect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  char v4; // dl
  FxInterrupt *v5; // rcx
  int v6; // r8d
  int id; // esi
  int result; // eax
  int v9; // ebx
  const char *_a10; // r10
  const char *flags; // r9
  FxDeviceBase *m_DeviceBase; // r8
  const void *v13; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *v15; // r8
  const _GUID *traceGuid; // [rsp+20h] [rbp-68h]

  m_Globals = this->m_Globals;
  if ( (NotifyFlags & 8) != 0 && FxInterrupt::IsActiveForWake(this) )
  {
    this->m_WakeInterruptMachine->m_ActiveForWake = 0;
    return 0;
  }
  if ( FxInterrupt::IsSoftDisconnectCapable(this) && v6 )
  {
    FxInterrupt::ReportActive(v5, 1u);
$Enable:
    result = FxInterrupt::InterruptEnable(this);
    v9 = result;
    if ( result < 0 )
    {
      m_DeviceBase = this->m_DeviceBase;
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      m_ObjectSize = m_DeviceBase->m_ObjectSize;
      if ( !this->m_ObjectSize )
        v13 = 0LL;
      v15 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v15 = 0LL;
      WPP_IFR_SF_qqqd(
        m_Globals,
        2u,
        0xCu,
        0x18u,
        WPP_InterruptObject_cpp_Traceguids,
        v15,
        v13,
        this->m_Interrupt,
        result);
      return v9;
    }
    else
    {
      this->m_Enabled = 1;
    }
    return result;
  }
  if ( v5->m_ForceDisconnected || !v5->m_InterruptInfo.Vector )
    return 0;
  if ( (v4 & 1) != 0 )
    goto $Enable;
  id = FxInterrupt::ConnectInternal(v5);
  if ( id >= 0 )
  {
    this->m_Connected = 1;
    this->m_Active = 1;
    goto $Enable;
  }
  this->m_Interrupt = 0LL;
  _a10 = "True";
  flags = "True";
  if ( !this->m_FloatingSave )
    flags = "False";
  if ( this->m_InterruptInfo.ShareDisposition != 3 )
    _a10 = "False";
  WPP_IFR_SF_qDDDDsdisd(
    m_Globals,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Irql,
    (unsigned __int16)flags,
    traceGuid,
    this->m_SpinLock,
    this->m_InterruptInfo.Vector,
    this->m_InterruptInfo.Irql,
    this->m_SynchronizeIrql,
    this->m_InterruptInfo.Mode,
    _a10,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    flags,
    id);
  return id;
}
