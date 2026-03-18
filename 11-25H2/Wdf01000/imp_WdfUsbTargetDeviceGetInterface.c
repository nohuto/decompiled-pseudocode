/*
 * XREFs of imp_WdfUsbTargetDeviceGetInterface @ 0x1400675C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     WPP_IFR_SF_qdd @ 0x140061F7C (WPP_IFR_SF_qdd.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

WDFUSBINTERFACE__ *__fastcall imp_WdfUsbTargetDeviceGetInterface(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        unsigned __int8 InterfaceIndex)
{
  __int64 v3; // rbp
  __int64 v5; // rcx
  FxUsbDevice *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  unsigned __int64 v8; // rax
  unsigned __int16 v9; // cx
  WDFUSBINTERFACE__ *result; // rax
  FxUsbDevice_vtbl *v11; // rax
  unsigned __int8 v12; // dl
  unsigned int v13; // r8d
  unsigned __int16 v14; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxUsbDevice **p_pUsbDevice; // [rsp+50h] [rbp-28h] BYREF
  __int16 v17; // [rsp+58h] [rbp-20h]
  __int16 v18; // [rsp+5Ah] [rbp-1Eh]
  int v19; // [rsp+5Ch] [rbp-1Ch]
  FxUsbDevice *pUsbDevice; // [rsp+88h] [rbp+10h] BYREF

  v3 = InterfaceIndex;
  if ( !UsbDevice )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1202uLL);
  LOWORD(v5) = 0;
  flags = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbDevice & 1) != 0 )
  {
    v5 = LOWORD(flags->__vftable);
    flags = (FxUsbDevice *)((char *)flags - v5);
  }
  if ( flags->m_Type == 4610 )
  {
    pUsbDevice = flags;
  }
  else
  {
    pUsbDevice = 0LL;
    p_pUsbDevice = &pUsbDevice;
    v18 = v5;
    v19 = 0;
    v11 = flags->__vftable;
    v17 = 4610;
    if ( v11->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v12,
        v13,
        v14,
        traceGuid,
        (const void *)UsbDevice,
        0x1202u,
        flags,
        flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, UsbDevice, 0x1202uLL);
    }
    flags = pUsbDevice;
  }
  m_Globals = flags->m_Globals;
  if ( (unsigned __int8)v3 < flags->m_NumInterfaces
    && (_mm_lfence(), flags = pUsbDevice, (v8 = (unsigned __int64)pUsbDevice->m_Interfaces[v3]) != 0) )
  {
    v9 = *(_WORD *)(v8 + 10);
    result = (WDFUSBINTERFACE__ *)(v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v9 )
      return 0LL;
  }
  else
  {
    WPP_IFR_SF_qdd(
      m_Globals,
      2u,
      0xEu,
      0x20u,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      (const void *)UsbDevice,
      flags->m_NumInterfaces,
      v3);
    return 0LL;
  }
  return result;
}
