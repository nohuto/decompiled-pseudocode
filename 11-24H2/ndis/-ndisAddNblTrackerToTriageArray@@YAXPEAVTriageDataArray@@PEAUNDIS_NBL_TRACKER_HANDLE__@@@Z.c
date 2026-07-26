/*
 * XREFs of ?ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z @ 0x1400A1954
 * Callers:
 *     ?AddTriageBlocks@?$NblTrackerCollector@U_NDIS_MINIPORT_BLOCK@@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400914F0 (-AddTriageBlocks@-$NblTrackerCollector@U_NDIS_MINIPORT_BLOCK@@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEA.c)
 *     ?AddTriageBlocks@?$NblTrackerCollector@U_NDIS_FILTER_BLOCK@@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097B60 (-AddTriageBlocks@-$NblTrackerCollector@U_NDIS_FILTER_BLOCK@@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTri.c)
 *     ?AddTriageBlocks@?$NblTrackerCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@SAXPEAU_NDIS_COMMON_OPEN_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x1400B74C0 (-AddTriageBlocks@-$NblTrackerCollector@U_NDIS_COMMON_OPEN_BLOCK@@@@SAXPEAU_NDIS_COMMON_OPEN_BLOC.c)
 * Callees:
 *     ?IsMemoryValid@@YA_NPEAX_K@Z @ 0x140091FBC (-IsMemoryValid@@YA_NPEAX_K@Z.c)
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

void __fastcall ndisAddNblTrackerToTriageArray(TriageDataArray *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  void *v4; // rdx
  unsigned __int16 *v5; // rax
  void *v6; // rdx

  if ( a2 )
  {
    if ( (a2 & 1) != 0 )
    {
      v3 = a2 & 0xFFFFFFFFFFFFFFF8uLL;
      TriageDataArray::AddDataBlock(this, (void *)(a2 & 0xFFFFFFFFFFFFFFF8uLL), 0x48uLL);
      if ( IsMemoryValid((char *)v3, 0x48uLL) )
      {
        v4 = *(void **)(v3 + 32);
        if ( v4 )
        {
          TriageDataArray::AddDataBlock(this, v4, 0x10uLL);
          if ( IsMemoryValid(*(char **)(v3 + 32), 0x10uLL) )
          {
            v5 = *(unsigned __int16 **)(v3 + 32);
            v6 = (void *)*((_QWORD *)v5 + 1);
            if ( v6 )
              TriageDataArray::AddDataBlock(this, v6, *v5);
          }
        }
      }
    }
  }
}
