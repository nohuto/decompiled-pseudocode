/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x140033A00
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019A850 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402AF120 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402DE70C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  if ( !*((_BYTE *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 753;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"m_Entered", 753LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
