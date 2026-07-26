/*
 * XREFs of ?IsMemoryValid@@YA_NPEAX_K@Z @ 0x140091FBC
 * Callers:
 *     ?AddTriageBlocks@?$UnicodeStringPointerDataCollector@U_NDIS_MINIPORT_BLOCK@@PEAU_UNICODE_STRING@@$0PBA@@@SAXPEAU_NDIS_MINIPORT_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140091BD0 (-AddTriageBlocks@-$UnicodeStringPointerDataCollector@U_NDIS_MINIPORT_BLOCK@@PEAU_UNICODE_STRING@.c)
 *     ?Callback@?$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x140091CD0 (-Callback@-$ObjectTriageData@U_NDIS_MINIPORT_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataA.c)
 *     ?Callback@?$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x140091D60 (-Callback@-$ObjectTriageData@U_NDIS_M_DRIVER_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataA.c)
 *     ?AddTriageBlocks@?$UnicodeStringPointerDataCollector@U_NDIS_FILTER_BLOCK@@PEAU_UNICODE_STRING@@$0DA@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097D00 (-AddTriageBlocks@-$UnicodeStringPointerDataCollector@U_NDIS_FILTER_BLOCK@@PEAU_UNICODE_STRING@@$.c)
 *     ?AddTriageBlocks@?$UnicodeStringPointerDataCollector@U_NDIS_FILTER_BLOCK@@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0CI@@@SAXPEAU_NDIS_FILTER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140097D60 (-AddTriageBlocks@-$UnicodeStringPointerDataCollector@U_NDIS_FILTER_BLOCK@@V-$unique_ptr@UKString.c)
 *     ?Callback@?$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x140097DC0 (-Callback@-$ObjectTriageData@U_NDIS_FILTER_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArr.c)
 *     ?Callback@?$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x140099C10 (-Callback@-$ObjectTriageData@U_NDIS_FILTER_DRIVER_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriage.c)
 *     ?ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z @ 0x1400A1954 (-ndisAddNblTrackerToTriageArray@@YAXPEAVTriageDataArray@@PEAUNDIS_NBL_TRACKER_HANDLE__@@@Z.c)
 *     ?Callback@?$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x1400B7640 (-Callback@-$ObjectTriageData@U_NDIS_COMMON_OPEN_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDa.c)
 *     ?Callback@?$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataArray@@PEAX@Z @ 0x1400B76D0 (-Callback@-$ObjectTriageData@U_NDIS_PROTOCOL_BLOCK@@@@CAXPEBUBugcheckParameters@@PEAVTriageDataA.c)
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsMemoryValid(char *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v6; // rax

  v2 = 0LL;
  v3 = (unsigned __int16)a1 & 0xFFF;
  if ( !a2 )
    return 1;
  while ( MmIsAddressValid(&a1[v2]) )
  {
    v6 = 4096 - v3;
    v3 = 0LL;
    v2 += v6;
    if ( v2 >= a2 )
      return 1;
  }
  return 0;
}
