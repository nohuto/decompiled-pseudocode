/*
 * XREFs of Vf_VerifyWdfDeviceWdmDispatchIrp @ 0x1400E3B34
 * Callers:
 *     imp_WdfDeviceWdmDispatchIrp @ 0x14005C640 (imp_WdfDeviceWdmDispatchIrp.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qd @ 0x140025B50 (WPP_IFR_SF_qd.c)
 *     ?GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z @ 0x14007BD90 (-GetCxDeviceInfo@FxDevice@@QEAAPEAUFxCxDeviceInfo@@PEAVFxDriver@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832E8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall Vf_VerifyWdfDeviceWdmDispatchIrp(
        _FX_DRIVER_GLOBALS *DriverGlobals,
        _WDF_DRIVER_GLOBALS *device,
        FxDevice *DispatchContext,
        _LIST_ENTRY *FxDriverGlobals)
{
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rbx
  _LIST_ENTRY *i; // rax

  p_m_PreprocessInfoListHead = &DispatchContext->m_PreprocessInfoListHead;
  if ( !FxDevice::GetCxDeviceInfo(DispatchContext, *(FxDriver **)&device[-7].DriverName[8]) )
  {
    WPP_IFR_SF_D(DispatchContext->m_Globals, 2u, 0xDu, 0xCu, WPP_FxDeviceApiKm_cpp_Traceguids, 0xC0000010);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
  for ( i = p_m_PreprocessInfoListHead->Flink; i != p_m_PreprocessInfoListHead; i = i->Flink )
  {
    if ( FxDriverGlobals == i )
      return;
  }
  if ( FxDriverGlobals != p_m_PreprocessInfoListHead )
  {
    WPP_IFR_SF_qd(
      DispatchContext->m_Globals,
      2u,
      0xDu,
      0xDu,
      WPP_FxDeviceApiKm_cpp_Traceguids,
      FxDriverGlobals,
      -1073741811);
    FxVerifierDbgBreakPoint(DispatchContext->m_Globals);
  }
}
