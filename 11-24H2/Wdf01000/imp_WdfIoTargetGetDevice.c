/*
 * XREFs of imp_WdfIoTargetGetDevice @ 0x1400603C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x140037258 (WPP_IFR_SF_q.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

WDFDEVICE__ *__fastcall imp_WdfIoTargetGetDevice(_WDF_DRIVER_GLOBALS *DriverGlobals, unsigned __int64 IoTarget)
{
  __int64 v3; // rcx
  FxIoTarget *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 FxVerboseOn; // cl
  FxDeviceBase *m_DeviceBase; // rbx
  unsigned __int16 m_ObjectSize; // ax
  const void *v9; // rbx
  FxIoTarget_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxIoTarget **p_pTarget; // [rsp+50h] [rbp-28h] BYREF
  __int16 v17; // [rsp+58h] [rbp-20h]
  __int16 v18; // [rsp+5Ah] [rbp-1Eh]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  FxIoTarget *pTarget; // [rsp+88h] [rbp+10h] BYREF

  if ( !IoTarget )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1200uLL);
  LOWORD(v3) = 0;
  flags = (FxIoTarget *)(~IoTarget & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (IoTarget & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxIoTarget *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4608 )
  {
    pTarget = flags;
  }
  else
  {
    pTarget = 0LL;
    p_pTarget = &pTarget;
    v18 = v3;
    v19 = 0;
    v11 = flags->__vftable;
    v17 = 4608;
    if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pTarget) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v12, v13, v14, traceGuid, (const void *)IoTarget, 0x1200u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, IoTarget, 0x1200uLL);
    }
    flags = pTarget;
  }
  m_Globals = flags->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    WPP_IFR_SF_q(m_Globals, 5u, 0xEu, 0x19u, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget);
    FxVerboseOn = m_Globals->FxVerboseOn;
    flags = pTarget;
  }
  else
  {
    FxVerboseOn = 0;
  }
  m_DeviceBase = flags->m_DeviceBase;
  m_ObjectSize = m_DeviceBase->m_ObjectSize;
  v9 = (const void *)((unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    v9 = 0LL;
  if ( FxVerboseOn )
    WPP_IFR_SF_qq(m_Globals, 5u, 0xEu, 0x1Au, WPP_FxIoTargetAPI_cpp_Traceguids, (const void *)IoTarget, v9);
  return (WDFDEVICE__ *)v9;
}
