/*
 * XREFs of ??1ExecutionContextLibrary@@QEAA@XZ @ 0x1401551A8
 * Callers:
 *     ?ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z @ 0x140143938 (-ndisCollectHistogramsForIoctl@@YAJW4NDIS_HISTOGRAM_TYPE@@_NPEAEKAEAK@Z.c)
 *     ??1NdisPoll@@QEAA@XZ @ 0x1401553A0 (--1NdisPoll@@QEAA@XZ.c)
 * Callees:
 *     KLoaderDereferenceModule @ 0x1400E3950 (KLoaderDereferenceModule.c)
 */

void __fastcall ExecutionContextLibrary::~ExecutionContextLibrary(ExecutionContextLibrary *this)
{
  struct KLOADER_MODULE_REFERENCE__ *v1; // rcx

  v1 = (struct KLOADER_MODULE_REFERENCE__ *)*((_QWORD *)this + 19);
  if ( v1 )
    KLoaderDereferenceModule(v1);
}
