/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x1800A13C4
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x18008F6A4 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x180117470 (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1801175D4 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180152550 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CHandle::~CHandle(void **this)
{
  void *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    CloseHandle(v2);
    *this = 0LL;
  }
}
