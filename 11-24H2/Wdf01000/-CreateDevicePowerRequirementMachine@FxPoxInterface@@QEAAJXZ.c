/*
 * XREFs of ?CreateDevicePowerRequirementMachine@FxPoxInterface@@QEAAJXZ @ 0x1400AA6D0
 * Callers:
 *     ?InitializeComponents@FxPoxInterface@@QEAAJXZ @ 0x140068B1C (-InitializeComponents@FxPoxInterface@@QEAAJXZ.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140010D70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qqd @ 0x14001AC10 (WPP_IFR_SF_qqd.c)
 *     ?Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z @ 0x140043D6C (-Init@FxThreadedEventQueue@@QEAAJPEAVFxPkgPnp@@P6AX0PEAUFxPostProcessInfo@@PEAX@Z2@Z.c)
 *     ??0FxThreadedEventQueue@@QEAA@E@Z @ 0x140045F4C (--0FxThreadedEventQueue@@QEAA@E@Z.c)
 *     ?Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x14007A070 (-Initialize@FxEventQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxWakeInterruptMachine@@QEAAPEAXI@Z @ 0x1400A91E8 (--_GFxWakeInterruptMachine@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall FxPoxInterface::CreateDevicePowerRequirementMachine(FxPoxInterface *this)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v4; // rax
  FX_POOL **v5; // rax
  unsigned __int8 v6; // dl
  FX_POOL **v7; // rdi
  __int64 v8; // r8
  char v9; // r9
  _FX_DRIVER_GLOBALS *v10; // rdx
  int v11; // eax
  FxPkgPnp *v12; // rdx
  int v13; // ebx
  FxDeviceBase *v14; // rcx
  unsigned __int16 v15; // bp
  _FX_DRIVER_GLOBALS *v16; // rsi
  const void *_a1; // rdx
  bool v18; // zf
  _DEVICE_OBJECT *_a2; // rax
  unsigned int _a3; // r10d
  FxPkgPnp *v21; // rax
  FxDeviceBase *v22; // rcx
  FxPkgPnp *v23; // rax
  FxDeviceBase *m_DeviceBase; // r10
  __m128i v26; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  m_PkgPnp = this->m_PkgPnp;
  v26.m128i_i64[0] = 0LL;
  v26.m128i_i64[1] = 64LL;
  m_Globals = m_PkgPnp->m_Globals;
  v4 = retaddr;
  if ( !m_Globals->FxPoolTrackingOn )
    v4 = 0LL;
  v5 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v26, 0xC8uLL, m_Globals->Tag, v4);
  v7 = v5;
  if ( !v5 )
  {
    v7 = 0LL;
    v13 = -1073741670;
    v23 = this->m_PkgPnp;
    v15 = 10;
    m_DeviceBase = v23->m_DeviceBase;
    v16 = v23->m_Globals;
    _a1 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
    v18 = m_DeviceBase->m_ObjectSize == 0;
    _a2 = m_DeviceBase->m_DeviceObject.m_DeviceObject;
    goto LABEL_10;
  }
  FxThreadedEventQueue::FxThreadedEventQueue((FxThreadedEventQueue *)v5, v6);
  *((_BYTE *)v7 + 152) = 1;
  *(_OWORD *)((char *)v7 + 156) = 0LL;
  *(_OWORD *)((char *)v7 + 172) = 0LL;
  *(FX_POOL **)((char *)v7 + 188) = 0LL;
  v8 = *((unsigned __int8 *)v7 + 3);
  v9 = *((_BYTE *)v7 + 152);
  v10 = (_FX_DRIVER_GLOBALS *)(((int)v8 + 1) % (unsigned int)*((unsigned __int8 *)v7 + 2));
  *((_BYTE *)v7 + 3) = (_BYTE)v10;
  *((_BYTE *)v7 + v8 + 188) = v9;
  v7[18] = (FX_POOL *)this;
  v11 = FxEventQueue::Initialize((FxEventQueue *)v7, v10);
  v12 = this->m_PkgPnp;
  v13 = v11;
  if ( v11 < 0 )
  {
    v14 = v12->m_DeviceBase;
    v15 = 11;
    v16 = v12->m_Globals;
    _a1 = (const void *)((unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL);
    v18 = v14->m_ObjectSize == 0;
    _a2 = v14->m_DeviceObject.m_DeviceObject;
LABEL_10:
    _a3 = v13;
    goto LABEL_11;
  }
  v13 = FxThreadedEventQueue::Init(
          (FxThreadedEventQueue *)v7,
          v12,
          FxDevicePwrRequirementMachine::_ProcessEventInner,
          0LL);
  _a3 = v13;
  if ( v13 >= 0 )
  {
    this->m_DevicePowerRequirementMachine = (FxDevicePwrRequirementMachine *)v7;
    return 0;
  }
  v21 = this->m_PkgPnp;
  v15 = 12;
  v22 = v21->m_DeviceBase;
  v16 = v21->m_Globals;
  _a1 = (const void *)((unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL);
  v18 = v22->m_ObjectSize == 0;
  _a2 = v22->m_DeviceObject.m_DeviceObject;
LABEL_11:
  if ( v18 )
    _a1 = 0LL;
  WPP_IFR_SF_qqd(v16, 2u, 0xCu, v15, WPP_PoxInterface_cpp_Traceguids, _a1, _a2, _a3);
  if ( v7 )
    FxWakeInterruptMachine::`scalar deleting destructor'((FxDevicePwrRequirementMachine *)v7);
  return (unsigned int)v13;
}
