/*
 * XREFs of ?Disconnect@FxInterrupt@@QEAAJK@Z @ 0x140067610
 * Callers:
 *     ?NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z @ 0x1400334EC (-NotifyResourceObjectsDx@FxPkgPnp@@AEAAJK@Z.c)
 *     ?ForceDisconnect@FxInterrupt@@QEAAJXZ @ 0x1400A9510 (-ForceDisconnect@FxInterrupt@@QEAAJXZ.c)
 * Callees:
 *     WPP_IFR_SF_qqqd @ 0x140003694 (WPP_IFR_SF_qqqd.c)
 *     ?IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ @ 0x140067A24 (-IsSoftDisconnectCapable@FxInterrupt@@QEAAEXZ.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x140067A54 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?IsActiveForWake@FxInterrupt@@QEAAEXZ @ 0x140067A80 (-IsActiveForWake@FxInterrupt@@QEAAEXZ.c)
 *     ?DisconnectInternal@FxInterrupt@@QEAAXXZ @ 0x140067B88 (-DisconnectInternal@FxInterrupt@@QEAAXXZ.c)
 *     ?InterruptDisable@FxInterrupt@@AEAAJXZ @ 0x140067BD8 (-InterruptDisable@FxInterrupt@@AEAAJXZ.c)
 *     ?ReportInactive@FxInterrupt@@QEAAXE@Z @ 0x140067C20 (-ReportInactive@FxInterrupt@@QEAAXE@Z.c)
 */

__int64 __fastcall FxInterrupt::Disconnect(FxInterrupt *this, char NotifyFlags)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  unsigned int v5; // ebp
  FxWakeInterruptMachine *m_WakeInterruptMachine; // rax
  int v7; // eax
  int _a4; // esi
  FxInterrupt *v9; // rcx
  struct _KINTERRUPT *m_Interrupt; // rcx
  FxDeviceBase *m_DeviceBase; // r10
  const void *_a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10

  m_Globals = this->m_Globals;
  v5 = 0;
  if ( !this->m_InterruptInfo.Vector )
    return 0LL;
  m_WakeInterruptMachine = this->m_WakeInterruptMachine;
  if ( !m_WakeInterruptMachine || (NotifyFlags & 0x40) == 0 )
  {
    if ( (NotifyFlags & 0x20) != 0 && !FxInterrupt::IsSoftDisconnectCapable(this) && !FxInterrupt::IsActiveForWake(this) )
      return 0LL;
    if ( this->m_Connected )
    {
      if ( this->m_Enabled )
      {
        if ( (NotifyFlags & 2) == 0 )
        {
          v7 = FxInterrupt::InterruptDisable(this);
          this->m_Enabled = 0;
          _a4 = v7;
          if ( v7 < 0 )
          {
            m_DeviceBase = this->m_DeviceBase;
            _a2 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
            m_ObjectSize = m_DeviceBase->m_ObjectSize;
            if ( !this->m_ObjectSize )
              _a2 = 0LL;
            _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !m_ObjectSize )
              _a1 = 0LL;
            WPP_IFR_SF_qqqd(
              m_Globals,
              2u,
              0xCu,
              0x19u,
              WPP_InterruptObject_cpp_Traceguids,
              _a1,
              _a2,
              this->m_Interrupt,
              _a4);
            v5 = _a4;
          }
        }
      }
      if ( this->m_IsEdgeTriggeredNonMsiInterrupt == 1 )
      {
        m_Interrupt = this->m_Interrupt;
        if ( m_Interrupt )
          KeSynchronizeExecution(m_Interrupt, FxInterrupt::_InterruptMarkDisconnecting, this);
        this->m_InterruptCaptured = 0LL;
      }
      KeFlushQueuedDpcs();
      FxInterrupt::FlushQueuedWorkitem(this);
      if ( FxInterrupt::IsSoftDisconnectCapable(this) && (NotifyFlags & 0x10) != 0 )
      {
        FxInterrupt::ReportInactive(v9, 1u);
        goto $Exit;
      }
      if ( (NotifyFlags & 1) != 0 )
      {
$Exit:
        this->m_Disconnecting = 0;
        return v5;
      }
    }
    else if ( !this->m_Interrupt || (NotifyFlags & 4) == 0 )
    {
      return 0LL;
    }
    FxInterrupt::DisconnectInternal(this);
    if ( FxInterrupt::IsActiveForWake(this) )
      this->m_WakeInterruptMachine->m_ActiveForWake = 0;
    this->m_Connected = 0;
    this->m_Active = 0;
    goto $Exit;
  }
  m_WakeInterruptMachine->m_ActiveForWake = 1;
  return 0LL;
}
