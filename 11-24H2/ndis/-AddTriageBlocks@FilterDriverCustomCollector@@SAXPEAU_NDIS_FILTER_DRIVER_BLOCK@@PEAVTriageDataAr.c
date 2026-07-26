/*
 * XREFs of ?AddTriageBlocks@FilterDriverCustomCollector@@SAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140099B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NAEBU_UNICODE_STRING@@@Z @ 0x1400E4998 (-AddDataBlock@TriageDataArray@@QEAA_NAEBU_UNICODE_STRING@@@Z.c)
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

void __fastcall FilterDriverCustomCollector::AddTriageBlocks(
        struct _NDIS_FILTER_DRIVER_BLOCK *a1,
        struct TriageDataArray *a2,
        const struct BugcheckParameters *a3)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::KRefHolder *p; // rdx

  TriageDataArray::AddDataBlock(a2, &a1->DefaultFilterCharacteristics, 0x40uLL);
  TriageDataArray::AddDataBlock(a2, &a1->DefaultFilterCharacteristics.UniqueName);
  TriageDataArray::AddDataBlock(a2, &a1->DefaultFilterCharacteristics.FriendlyName);
  TriageDataArray::AddDataBlock(a2, &a1->DefaultFilterCharacteristics.ServiceName);
  p = a1->Bind._p;
  if ( p )
    TriageDataArray::AddDataBlock(a2, p, 0x40uLL);
}
