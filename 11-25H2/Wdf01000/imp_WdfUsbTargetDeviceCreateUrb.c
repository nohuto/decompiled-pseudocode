/*
 * XREFs of imp_WdfUsbTargetDeviceCreateUrb @ 0x140022B00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     ?CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z @ 0x140023128 (-CreateUrb@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAPEAU_URB@@@Z.c)
 *     WPP_IFR_SF_qDqD @ 0x14002678C (WPP_IFR_SF_qDqD.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x14008306C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830B8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

int __fastcall imp_WdfUsbTargetDeviceCreateUrb(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbDevice,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFMEMORY__ **UrbMemory,
        _URB **Urb)
{
  __int64 v8; // rcx
  FxUsbDevice *flags; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxUsbDevice_vtbl *v12; // rax
  unsigned __int8 v13; // dl
  unsigned int v14; // r8d
  unsigned __int16 v15; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  FxUsbDevice **p_pUsbDevice; // [rsp+50h] [rbp-28h] BYREF
  __int16 v18; // [rsp+58h] [rbp-20h]
  __int16 v19; // [rsp+5Ah] [rbp-1Eh]
  int v20; // [rsp+5Ch] [rbp-1Ch]
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxUsbDevice *pUsbDevice; // [rsp+88h] [rbp+10h] BYREF

  if ( !UsbDevice )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1202uLL);
  LOWORD(v8) = 0;
  flags = (FxUsbDevice *)(~UsbDevice & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbDevice & 1) != 0 )
  {
    v8 = LOWORD(flags->__vftable);
    flags = (FxUsbDevice *)((char *)flags - v8);
  }
  if ( flags->m_Type == 4610 )
  {
    pUsbDevice = flags;
  }
  else
  {
    pUsbDevice = 0LL;
    p_pUsbDevice = &pUsbDevice;
    v19 = v8;
    v20 = 0;
    v12 = flags->__vftable;
    v18 = 4610;
    if ( v12->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbDevice) < 0 )
    {
      WPP_IFR_SF_qDqD(
        flags->m_Globals,
        v13,
        v14,
        v15,
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
  if ( !UrbMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  if ( flags->m_USBDHandle )
    return FxUsbDevice::CreateUrb(flags, Attributes, UrbMemory, Urb);
  WPP_IFR_SF_D(m_Globals, 2u, 0xEu, 0x11u, WPP_FxUsbDeviceApiKm_cpp_Traceguids, 0xC0000184);
  return -1073741436;
}
