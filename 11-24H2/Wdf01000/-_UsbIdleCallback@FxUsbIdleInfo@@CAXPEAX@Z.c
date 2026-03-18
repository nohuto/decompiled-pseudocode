/*
 * XREFs of ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x140072970
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x14002DF5C (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x140035F58 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 */

void __fastcall FxUsbIdleInfo::_UsbIdleCallback(FxPkgPnp *Context)
{
  unsigned __int8 v2; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxUsbIdleInfo *m_UsbIdle; // rbx
  _FX_DRIVER_GLOBALS *v5; // rcx
  FxCREvent event; // [rsp+30h] [rbp-28h] BYREF

  event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&event.m_Event.m_Event, SynchronizationEvent, 0);
  event.m_Event.m_DbgFlagIsInitialized = 1;
  m_Globals = Context->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xBu, WPP_PowerPolicyStateMachineKM_cpp_Traceguids);
  m_UsbIdle = Context->m_PowerPolicyMachine.m_Owner->m_UsbIdle;
  m_UsbIdle->m_IdleCallbackEvent = &event;
  FxPkgPnp::PowerPolicyProcessEvent(Context, PwrPolUsbSelectiveSuspendCallback, v2);
  FxCREvent::EnterCRAndWaitAndLeave(&event);
  m_UsbIdle->m_IdleCallbackEvent = 0LL;
  v5 = Context->m_Globals;
  if ( v5->FxVerboseOn )
    WPP_IFR_SF_(v5, 5u, 0xCu, 0xCu, WPP_PowerPolicyStateMachineKM_cpp_Traceguids);
}
