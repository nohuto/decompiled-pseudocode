/*
 * XREFs of ?InitializeLockOrder@FxVerifierLock@@AEAAXXZ @ 0x140097DFC
 * Callers:
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x140081BEC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z @ 0x1400946E8 (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@E@Z.c)
 * Callees:
 *     WPP_IFR_SF_D @ 0x14001D908 (WPP_IFR_SF_D.c)
 */

void __fastcall FxVerifierLock::InitializeLockOrder(FxVerifierLock *this)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  FxVerifierOrderMapping *v2; // rdx
  unsigned int _a1; // ecx
  unsigned __int16 ObjectLockOrder; // ax

  m_Globals = this->m_Globals;
  v2 = FxVerifierCallbackOrderTable;
  _a1 = this->m_ParentObject->m_Type;
  if ( !this->m_CallbackLock )
    v2 = FxVerifierOrderTable;
  while ( v2->ObjectType )
  {
    if ( v2->ObjectType == (_WORD)_a1 )
    {
      ObjectLockOrder = v2->ObjectLockOrder;
      goto LABEL_8;
    }
    ++v2;
  }
  WPP_IFR_SF_D(m_Globals, 4u, 0x12u, 0x13u, WPP_FxVerifierLock_cpp_Traceguids, _a1);
  ObjectLockOrder = -1;
LABEL_8:
  this->m_Order = ObjectLockOrder;
}
