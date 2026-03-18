/*
 * XREFs of ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1400A3530
 * Callers:
 *     <none>
 * Callees:
 *     ?IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z @ 0x140013E20 (-IsVerificationEnabled@_FX_DRIVER_GLOBALS@@QEAAEKKW4FxVerifierDownlevelOption@@@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueryStopAskDriver(FxPkgPnp *This)
{
  FxDeviceBase *m_DeviceBase; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  unsigned __int16 m_ObjectSize; // dx
  unsigned __int64 v5; // rcx
  signed int _a1; // eax
  int v7; // ebx
  unsigned int v8; // edx
  FxVerifierDownlevelOption v9; // r9d
  _FX_DRIVER_GLOBALS *v10; // rcx
  __int64 result; // rax

  m_DeviceBase = This->m_DeviceBase;
  m_Method = This->m_DeviceQueryStop.m_Method;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  if ( !m_Method )
  {
    v7 = 0;
LABEL_10:
    result = 312LL;
    goto LABEL_11;
  }
  v5 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !m_ObjectSize )
    v5 = 0LL;
  _a1 = m_Method((WDFDEVICE__ *)v5);
  v7 = _a1;
  if ( _a1 >= 0 )
    goto LABEL_10;
  WPP_IFR_SF_D(This->m_Globals, 2u, 0xCu, 0x15u, WPP_PnpStateMachine_cpp_Traceguids, _a1);
  if ( v7 == -1073741637 )
  {
    WPP_IFR_SF_(This->m_Globals, 2u, 0xCu, 0x16u, WPP_PnpStateMachine_cpp_Traceguids);
    if ( _FX_DRIVER_GLOBALS::IsVerificationEnabled(This->m_Globals, v8, 0xBu, v9) )
      FxVerifierDbgBreakPoint(v10);
  }
  result = 281LL;
LABEL_11:
  This->m_PendingPnPIrp->IoStatus.Status = v7;
  return result;
}
