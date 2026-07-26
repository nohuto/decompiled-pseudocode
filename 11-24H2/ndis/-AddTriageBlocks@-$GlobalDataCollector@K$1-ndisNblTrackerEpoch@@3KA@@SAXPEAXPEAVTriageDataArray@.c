/*
 * XREFs of ?AddTriageBlocks@?$GlobalDataCollector@K$1?ndisNblTrackerEpoch@@3KA@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140098620
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall GlobalDataCollector<unsigned long,&unsigned long ndisNblTrackerEpoch>::AddTriageBlocks(
        __int64 a1,
        TriageDataArray *a2)
{
  return TriageDataArray::AddDataBlock(a2, &ndisNblTrackerEpoch, 4uLL);
}
