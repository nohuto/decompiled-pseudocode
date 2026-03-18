/*
 * XREFs of ?OnRawMouseThrottlingTimer@CMouseSensor@@EEAAJXZ @ 0x1400641B0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140060B94 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ @ 0x1400626B8 (-Cleanup@ThreadLockedPerfRegion@InputTraceLogging@@AEAAXXZ.c)
 *     ?RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ @ 0x140064214 (-RawMouseThrottlingTimerFired@Mouse@InputTraceLogging@@SAXXZ.c)
 *     ApiSetEditionHandleRawInputThrottlingTimer @ 0x140064258 (ApiSetEditionHandleRawInputThrottlingTimer.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140099660 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall CMouseSensor::OnRawMouseThrottlingTimer(CMouseSensor *this)
{
  __int64 *v2; // rbx
  __int64 *v4; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v4, "OnRawMouseThrottlingTimer", 0LL);
  InputTraceLogging::Mouse::RawMouseThrottlingTimerFired();
  *((_BYTE *)this + 1336) = 0;
  ApiSetEditionHandleRawInputThrottlingTimer();
  v2 = v4;
  if ( v4 )
  {
    *((_QWORD *)PtiCurrent() + 48) = v2[6];
    InputTraceLogging::ThreadLockedPerfRegion::Cleanup((char **)&v4);
  }
  return 0LL;
}
