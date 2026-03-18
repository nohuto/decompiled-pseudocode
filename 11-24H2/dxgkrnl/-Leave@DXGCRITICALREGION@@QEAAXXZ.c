/*
 * XREFs of ?Leave@DXGCRITICALREGION@@QEAAXXZ @ 0x1400338D0
 * Callers:
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x14019CD40 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkWaitForVerticalBlankEventInternal @ 0x1402BCA10 (DxgkWaitForVerticalBlankEventInternal.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14034D4E0 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGCRITICALREGION::Leave(DXGCRITICALREGION *this)
{
  if ( !*((_BYTE *)this + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 752;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_Entered", 752LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_BYTE *)this + 1) = 0;
  KeLeaveCriticalRegion();
}
