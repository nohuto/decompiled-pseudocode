/*
 * XREFs of ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x14009B964
 * Callers:
 *     ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x14000728C (-DecrementIoCount@FxIoTarget@@IEAAXXZ.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1400366C0 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140036B90 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14002A1A4 (WPP_IFR_SF_qq.c)
 */

void __fastcall FxIoTarget::PrintDisposeMessage(FxIoTarget *this)
{
  const void *_a1; // rdx
  bool v2; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxCREvent *_a2; // [rsp+30h] [rbp-18h]

  _a2 = this->m_DisposeEvent;
  _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  v2 = this->m_ObjectSize == 0;
  m_Globals = this->m_Globals;
  if ( v2 )
    _a1 = 0LL;
  WPP_IFR_SF_qq(m_Globals, 4u, 0xEu, 0xAu, WPP_FxIoTarget_cpp_Traceguids, _a1, _a2);
}
