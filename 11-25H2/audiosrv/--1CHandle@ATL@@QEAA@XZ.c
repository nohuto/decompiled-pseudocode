/*
 * XREFs of ??1CHandle@ATL@@QEAA@XZ @ 0x1800A4DDC
 * Callers:
 *     ??0AtmosCheck@@QEAA@XZ @ 0x180092DB0 (--0AtmosCheck@@QEAA@XZ.c)
 *     ??1CEvent@ATL@@QEAA@XZ @ 0x18010F5C4 (--1CEvent@ATL@@QEAA@XZ.c)
 *     ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x18010F728 (--1CaptureMonitor@CMonitorManager@@IEAA@XZ.c)
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEBU_tlgProvider_t@@@Z @ 0x180149860 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_NPEB.c)
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
