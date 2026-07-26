/*
 * XREFs of ?AddDataBlock@TriageDataArray@@QEAA_NAEBU_UNICODE_STRING@@@Z @ 0x1400E4998
 * Callers:
 *     ?AddTriageBlocks@FilterDriverCustomCollector@@SAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEAVTriageDataArray@@PEBUBugcheckParameters@@@Z @ 0x140099B80 (-AddTriageBlocks@FilterDriverCustomCollector@@SAXPEAU_NDIS_FILTER_DRIVER_BLOCK@@PEAVTriageDataAr.c)
 * Callees:
 *     ?AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z @ 0x1400E49C0 (-AddDataBlock@TriageDataArray@@QEAA_NPEAX_K@Z.c)
 */

bool __fastcall TriageDataArray::AddDataBlock(TriageDataArray *this, const struct _UNICODE_STRING *a2)
{
  wchar_t *Buffer; // rax

  Buffer = a2->Buffer;
  if ( Buffer )
    LOBYTE(Buffer) = TriageDataArray::AddDataBlock(this, a2->Buffer, a2->Length);
  return (char)Buffer;
}
