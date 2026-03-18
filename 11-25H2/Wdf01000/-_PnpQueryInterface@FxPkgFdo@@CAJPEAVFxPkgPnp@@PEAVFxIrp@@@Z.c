/*
 * XREFs of ?_PnpQueryInterface@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1400652A0
 * Callers:
 *     <none>
 * Callees:
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1400161AC (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x140018534 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_ @ 0x14003842C (WPP_IFR_SF_.c)
 *     ?_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x140065370 (-_PnpPassDown@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::_PnpQueryInterface(FxPkgPnp *This, FxIrp *Irp)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned int _a1; // eax
  unsigned int v6; // ebx
  _FX_DRIVER_GLOBALS *v7; // rcx
  unsigned __int8 completeIrp; // [rsp+40h] [rbp+8h] BYREF

  completeIrp = 0;
  m_Globals = This->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xDu, WPP_fxpkgfdo_cpp_Traceguids);
  _a1 = FxPkgPnp::HandleQueryInterface(This, Irp, &completeIrp);
  v6 = _a1;
  v7 = This->m_Globals;
  if ( v7->FxVerboseOn )
    WPP_IFR_SF_D(v7, 5u, 0xCu, 0xEu, WPP_fxpkgfdo_cpp_Traceguids, _a1);
  if ( completeIrp )
  {
    Irp->m_Irp->IoStatus.Information = 0LL;
    FxPkgPnp::CompletePnpRequest(This, Irp, v6);
  }
  else
  {
    return (unsigned int)FxPkgFdo::_PnpPassDown(This, Irp);
  }
  return v6;
}
