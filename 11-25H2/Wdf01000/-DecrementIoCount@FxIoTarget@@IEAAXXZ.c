/*
 * XREFs of ?DecrementIoCount@FxIoTarget@@IEAAXXZ @ 0x1400051EC
 * Callers:
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140004694 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x140005054 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z @ 0x140032120 (-SubmitLocked@FxIoTarget@@QEAAKPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@K@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x14007A4FC (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x14009B710 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 * Callees:
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x14009B894 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 */

void __fastcall FxIoTarget::DecrementIoCount(FxIoTarget *this)
{
  if ( _InterlockedExchangeAdd(&this->m_IoCount, 0xFFFFFFFF) == 1 )
  {
    FxIoTarget::PrintDisposeMessage(this);
    KeSetEvent(&this->m_DisposeEvent->m_Event.m_Event, 0, 0);
  }
}
