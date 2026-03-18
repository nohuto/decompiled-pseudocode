/*
 * XREFs of ?PowerStartingChild@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x14007E0C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qqd @ 0x14002A590 (WPP_IFR_SF_qqd.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PowerStartingChild(FxPkgPnp *This)
{
  FxPkgPnp_vtbl *v1; // rax
  signed int _a3; // r10d
  FxDeviceBase *m_DeviceBase; // r8
  __int64 v5; // rdx
  unsigned __int16 m_ObjectSize; // cx
  const void *_a2; // r8
  __int16 v8; // ax
  const void *_a1; // rdx
  unsigned __int8 waitForParentOn; // [rsp+50h] [rbp+8h] BYREF

  v1 = This->__vftable;
  waitForParentOn = 0;
  _a3 = v1->PowerCheckParentOverload(This, &waitForParentOn);
  if ( _a3 >= 0 )
    return waitForParentOn != 0 ? 873 : 783;
  m_DeviceBase = This->m_DeviceBase;
  v5 = *(_QWORD *)(*(_QWORD *)&m_DeviceBase[1].m_ObjectFlags + 96LL);
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  _a2 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  v8 = *(_WORD *)(v5 + 10);
  if ( !m_ObjectSize )
    _a2 = 0LL;
  _a1 = (const void *)(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v8 )
    _a1 = 0LL;
  WPP_IFR_SF_qqd(This->m_Globals, 2u, 0xCu, 0x14u, WPP_PowerStateMachine_cpp_Traceguids, _a1, _a2, _a3);
  return 837LL;
}
