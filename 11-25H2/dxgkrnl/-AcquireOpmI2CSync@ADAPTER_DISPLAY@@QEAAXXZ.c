/*
 * XREFs of ?AcquireOpmI2CSync@ADAPTER_DISPLAY@@QEAAXXZ @ 0x1403D6054
 * Callers:
 *     DxgkAcquireAdapterOpmI2CSync @ 0x1403D5F64 (DxgkAcquireAdapterOpmI2CSync.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x140019B00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall ADAPTER_DISPLAY::AcquireOpmI2CSync(struct _KTHREAD **this)
{
  if ( this[49] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4118;
    DxgkLogInternalTriageEvent(0LL, 262146, 0xFFFFFFFFLL, L"!m_OpmI2CMutex.IsOwner()", 4118LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 46));
}
