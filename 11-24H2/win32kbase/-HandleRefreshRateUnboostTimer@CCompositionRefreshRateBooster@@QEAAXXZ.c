/*
 * XREFs of ?HandleRefreshRateUnboostTimer@CCompositionRefreshRateBooster@@QEAAXXZ @ 0x14021FC34
 * Callers:
 *     _lambda_c9e4fec9532ca8e5b5101c78de254c3e_::_lambda_invoker_cdecl_ @ 0x140111190 (_lambda_c9e4fec9532ca8e5b5101c78de254c3e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140047450 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140047544 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     DCompositionBoostCompositionClockForInput @ 0x140073CCC (DCompositionBoostCompositionClockForInput.c)
 *     ?CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ @ 0x1401206A4 (-CompositionRefreshRateUnboost@Win32k@InputTraceLogging@@SAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCompositionRefreshRateBooster::HandleRefreshRateUnboostTimer(CCompositionRefreshRateBooster *this)
{
  CPushLock::AcquireLockExclusive(this);
  if ( *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = 0;
    if ( (int)DCompositionBoostCompositionClockForInput(0) < 0 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 512);
    InputTraceLogging::Win32k::CompositionRefreshRateUnboost();
  }
  CPushLock::ReleaseLock(this);
}
