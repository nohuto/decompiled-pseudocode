/*
 * XREFs of ?UpdateDXGIFactory@CDisplayManager@@IEAAJXZ @ 0x180158984
 * Callers:
 *     ?ProcessComposition@CComposition@@QEAAXXZ @ 0x1800817A0 (-ProcessComposition@CComposition@@QEAAXXZ.c)
 *     ?InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z @ 0x180154DCC (-InternalGetDXGIFactory@CDisplayManager@@AEAAJPEAPEAUIDXGIFactory5@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ @ 0x1801589D8 (-InternalUpdateDXGIFactory@CDisplayManager@@AEAAJXZ.c)
 *     ?ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z @ 0x180159E5C (-ScheduleCompositionPass@@YAXIW4CompositionReason@@@Z.c)
 */

__int64 __fastcall CDisplayManager::UpdateDXGIFactory(CDisplayManager *this)
{
  int updated; // eax
  unsigned int v2; // ebx

  updated = CDisplayManager::InternalUpdateDXGIFactory(this);
  v2 = updated;
  if ( updated < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0xEEu, 0LL);
    LOBYTE(word_1803FAB60) = 1;
    ScheduleCompositionPass(0LL);
  }
  return v2;
}
