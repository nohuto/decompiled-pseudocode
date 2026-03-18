/*
 * XREFs of ?ReleaseOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1403C4928
 * Callers:
 *     DxgkReleaseAdapterOpmI2CSync @ 0x1403C4838 (DxgkReleaseAdapterOpmI2CSync.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x140024690 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_DISPLAY::ReleaseOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[50] != KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4134;
    DxgkLogInternalTriageEvent(0LL, 262146LL, 0xFFFFFFFFLL, L"m_OpmI2CMutex.IsOwner()", 4134LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Release(this + 47);
}
