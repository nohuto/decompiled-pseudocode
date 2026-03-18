/*
 * XREFs of ??1CMouseProcessor@@QEAA@XZ @ 0x14021B8D8
 * Callers:
 *     ?PreUninitialize@CMouseSensor@@EEAAXXZ @ 0x1400D0470 (-PreUninitialize@CMouseSensor@@EEAAXXZ.c)
 * Callees:
 *     ??1CInputDest@@QEAA@XZ @ 0x14005F0F0 (--1CInputDest@@QEAA@XZ.c)
 *     ??1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ @ 0x14021B8A0 (--1BufferedMouseInputList@CMouseProcessor@@QEAA@XZ.c)
 *     ??1MouseInterceptState@CMouseProcessor@@QEAA@XZ @ 0x14021B928 (--1MouseInterceptState@CMouseProcessor@@QEAA@XZ.c)
 */

void __fastcall CMouseProcessor::~CMouseProcessor(CMouseProcessor::BufferedMouseInputList **this)
{
  *this = (CMouseProcessor::BufferedMouseInputList *)&CMouseProcessor::`vftable';
  CMouseProcessor::BufferedMouseInputList::~BufferedMouseInputList(this + 505);
  CMouseProcessor::MouseInterceptState::~MouseInterceptState((CMouseProcessor::MouseInterceptState *)(this + 489));
  CInputDest::~CInputDest((CInputDest *)(this + 473));
  *this = (CMouseProcessor::BufferedMouseInputList *)&CBaseProcessor::`vftable';
}
