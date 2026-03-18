/*
 * XREFs of ?IsFull@CMouseQueue@CMouseProcessor@@AEBA_NXZ @ 0x14018CE34
 * Callers:
 *     ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z @ 0x14018CA28 (-GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@W4GetItemPolicy@12@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

bool __fastcall CMouseProcessor::CMouseQueue::IsFull(CMouseProcessor::CMouseQueue *this)
{
  if ( *((_WORD *)this + 1473) > 0x10u )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 7011LL);
  return *((_WORD *)this + 1473) == 16;
}
