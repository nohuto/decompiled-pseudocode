/*
 * XREFs of ?AddTriageBlocks@SlotCollector@@SAXPEAXPEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400C4890
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

void __fastcall SlotCollector::AddTriageBlocks(
        void *a1,
        struct TriageDataArray *a2,
        const struct BugcheckParameters *a3)
{
  unsigned int v3; // ecx

  if ( ndisPerProcessorDescriptorList != &ndisPerProcessorDescriptorList )
  {
    v3 = 64;
    if ( ndisMaxNumberOfProcessors < 0x40 )
      v3 = ndisMaxNumberOfProcessors;
    TriageDataArray::AddDataBlock(a2, ndisPerProcessorDescriptorList, (v3 + 1LL) << 12);
  }
}
