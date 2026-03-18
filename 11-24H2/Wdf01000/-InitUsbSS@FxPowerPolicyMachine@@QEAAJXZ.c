/*
 * XREFs of ?InitUsbSS@FxPowerPolicyMachine@@QEAAJXZ @ 0x140079F70
 * Callers:
 *     ?PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z @ 0x140003DBC (-PowerPolicySetS0IdleSettings@FxPkgPnp@@QEAAJPEAU_WDF_DEVICE_POWER_POLICY_IDLE_SETTINGS@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Initialize@FxUsbIdleInfo@@QEAAJXZ @ 0x14008384C (-Initialize@FxUsbIdleInfo@@QEAAJXZ.c)
 *     ??_GFxUsbIdleInfo@@QEAAPEAXI@Z @ 0x1400A7A2C (--_GFxUsbIdleInfo@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPowerPolicyMachine::InitUsbSS(FxPowerPolicyMachine *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  ULONG Tag; // r8d
  void *v4; // rax
  FxUsbIdleInfo *v5; // rax
  FxUsbIdleInfo *v6; // rbx
  FxPkgPnp *m_PkgPnp; // rcx
  unsigned int v8; // edx
  int v9; // esi
  __m128i v11; // [rsp+30h] [rbp-28h]
  __m128i v12; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( this->m_Owner->m_UsbIdle )
    return 0LL;
  v11.m128i_i64[0] = 0LL;
  v11.m128i_i64[1] = 64LL;
  m_Globals = this->m_PkgPnp->m_Globals;
  Tag = m_Globals->Tag;
  if ( m_Globals->FxPoolTrackingOn )
    v4 = retaddr;
  else
    v4 = 0LL;
  v12 = v11;
  v5 = (FxUsbIdleInfo *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v12, 0x28uLL, Tag, v4);
  v6 = v5;
  if ( v5 )
  {
    m_PkgPnp = this->m_PkgPnp;
    v5->m_IdleCallbackEvent = 0LL;
    v5->m_IdleIrp.m_Irp = 0LL;
    v5->m_CallbackInfo.IdleContext = m_PkgPnp;
    v5->m_CallbackInfo.IdleCallback = (void (__fastcall *)(void *))FxUsbIdleInfo::_UsbIdleCallback;
    v5->m_EventDropped = 0;
    v9 = FxUsbIdleInfo::Initialize(v5);
    if ( v9 < 0 )
    {
      FxUsbIdleInfo::`scalar deleting destructor'(v6, v8);
      return (unsigned int)v9;
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Owner->m_UsbIdle, (signed __int64)v6, 0LL) )
      FxUsbIdleInfo::`scalar deleting destructor'(v6, v8);
    return 0LL;
  }
  return 3221225626LL;
}
