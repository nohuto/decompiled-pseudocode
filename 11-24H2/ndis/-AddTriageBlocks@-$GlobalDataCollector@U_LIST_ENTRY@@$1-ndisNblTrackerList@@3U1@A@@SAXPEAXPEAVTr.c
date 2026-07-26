/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@U_LIST_ENTRY@@$1?ndisNblTrackerList@@3U1@A@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140098710
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<_LIST_ENTRY,&_LIST_ENTRY ndisNblTrackerList>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisNblTrackerList, 0x10uLL);
}
