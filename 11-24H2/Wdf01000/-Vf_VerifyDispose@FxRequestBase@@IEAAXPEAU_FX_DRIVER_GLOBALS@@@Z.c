/*
 * XREFs of ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400E3CEC
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x14004ACD0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14002BD60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14002C4B0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400832D8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

void __fastcall FxRequestBase::Vf_VerifyDispose(
        FxRequestBase *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  FxIoTarget *m_Target; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a2; // r8
  bool v9; // zf
  FxRequestBase *_a1; // rax
  unsigned __int64 v11; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( _bittest16(&this->m_VerifierFlags, 8u) )
  {
    m_Target = this->m_Target;
    m_ObjectSize = m_Target->m_ObjectSize;
    _a2 = (const void *)((unsigned __int64)m_Target ^ 0xFFFFFFFFFFFFFFF8uLL);
    v9 = m_ObjectSize == 0;
    _a1 = this;
    if ( v9 )
      _a2 = 0LL;
    v11 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v11 = 0LL;
    if ( v11 )
      _a1 = (FxRequestBase *)v11;
    WPP_IFR_SF_qq(FxDriverGlobals, 2u, 0x10u, 0xAu, WPP_FxRequestBase_cpp_Traceguids, _a1, _a2);
    FxVerifierDbgBreakPoint(FxDriverGlobals);
  }
  FxNonPagedObject::Unlock(this, irql, v5);
}
