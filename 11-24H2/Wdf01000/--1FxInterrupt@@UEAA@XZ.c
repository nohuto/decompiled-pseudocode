/*
 * XREFs of ??1FxInterrupt@@UEAA@XZ @ 0x1400A9104
 * Callers:
 *     ??_EFxInterrupt@@UEAAPEAXI@Z @ 0x1400A91B0 (--_EFxInterrupt@@UEAAPEAXI@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x14001274C (WPP_IFR_SF_.c)
 *     ??1FxNonPagedObject@@UEAA@XZ @ 0x140040500 (--1FxNonPagedObject@@UEAA@XZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxInterrupt::~FxInterrupt(FxInterrupt *this)
{
  bool v1; // zf
  _FX_DRIVER_GLOBALS **p_m_Globals; // rdi

  v1 = this->m_Interrupt == 0LL;
  this->__vftable = (FxInterrupt_vtbl *)FxInterrupt::`vftable';
  p_m_Globals = &this->m_Globals;
  if ( !v1 )
  {
    WPP_IFR_SF_(*p_m_Globals, 2u, 0xCu, 0xAu, WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  if ( this->m_DeviceBase )
  {
    WPP_IFR_SF_(*p_m_Globals, 2u, 0xCu, 0xBu, WPP_InterruptObject_cpp_Traceguids);
    FxVerifierDbgBreakPoint(*p_m_Globals);
  }
  this->m_BuiltInSpinLock.m_DbgFlagIsInitialized = 0;
  FxNonPagedObject::~FxNonPagedObject(this);
}
