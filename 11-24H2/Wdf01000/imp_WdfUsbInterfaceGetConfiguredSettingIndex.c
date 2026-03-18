/*
 * XREFs of imp_WdfUsbInterfaceGetConfiguredSettingIndex @ 0x140065E80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140016E4C (WPP_IFR_SF_qDqD.c)
 *     ?GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ @ 0x140065F7C (-GetConfiguredSettingIndex@FxUsbInterface@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1400830A8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     _guard_dispatch_icall @ 0x1400AC750 (_guard_dispatch_icall.c)
 */

unsigned __int8 __fastcall imp_WdfUsbInterfaceGetConfiguredSettingIndex(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 UsbInterface)
{
  __int64 v3; // rcx
  FxUsbInterface *flags; // rbx
  FxUsbInterface_vtbl *v6; // rax
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *v10; // [rsp+20h] [rbp-48h]
  FxUsbInterface **p_pUsbInterface; // [rsp+50h] [rbp-18h] BYREF
  __int16 v12; // [rsp+58h] [rbp-10h]
  __int16 v13; // [rsp+5Ah] [rbp-Eh]
  int v14; // [rsp+5Ch] [rbp-Ch]
  FxUsbInterface *pUsbInterface; // [rsp+78h] [rbp+10h] BYREF

  if ( !UsbInterface )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], WDF_INVALID_HANDLE, 0LL, 0x1204uLL);
  LOWORD(v3) = 0;
  flags = (FxUsbInterface *)(~UsbInterface & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (UsbInterface & 1) != 0 )
  {
    v3 = LOWORD(flags->__vftable);
    flags = (FxUsbInterface *)((char *)flags - v3);
  }
  if ( flags->m_Type == 4612 )
  {
    pUsbInterface = flags;
  }
  else
  {
    pUsbInterface = 0LL;
    p_pUsbInterface = &pUsbInterface;
    v13 = v3;
    v14 = 0;
    v6 = flags->__vftable;
    v12 = 4612;
    if ( v6->QueryInterface(flags, (FxQueryInterfaceParams *)&p_pUsbInterface) < 0 )
    {
      WPP_IFR_SF_qDqD(flags->m_Globals, v7, v8, v9, v10, (const void *)UsbInterface, 0x1204u, flags, flags->m_Type);
      FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, UsbInterface, 0x1204uLL);
    }
    flags = pUsbInterface;
  }
  return FxUsbInterface::GetConfiguredSettingIndex(flags);
}
