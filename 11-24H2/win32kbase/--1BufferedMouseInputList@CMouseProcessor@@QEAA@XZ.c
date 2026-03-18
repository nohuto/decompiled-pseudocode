/*
 * XREFs of ??1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ @ 0x14021B8A0
 * Callers:
 *     ??1CMouseProcessor@@QEAA@XZ @ 0x14021B8D8 (--1CMouseProcessor@@QEAA@XZ.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CMouseProcessor::BufferedMouseInputList::~BufferedMouseInputList(
        CMouseProcessor::BufferedMouseInputList **this)
{
  if ( this[1] != (CMouseProcessor::BufferedMouseInputList *)(this + 1) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 7439);
}
