/*
 * XREFs of ??0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180141230
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18008D57C (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800433B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechCompressed@@QEAA@XZ @ 0x1801415D8 (--0CSpatialAudioTechCompressed@@QEAA@XZ.c)
 */

CSpatialAudioDtsxHdmi *__fastcall CSpatialAudioDtsxHdmi::CSpatialAudioDtsxHdmi(
        CSpatialAudioDtsxHdmi *this,
        HINSTANCE a2)
{
  CSpatialAudioTechCompressed::CSpatialAudioTechCompressed(this);
  *(_QWORD *)this = &CSpatialAudioDtsxHdmi::`vftable';
  *((_OWORD *)this + 1) = DTSX_HDMI_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x196u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"DTS:X for home theater");
  if ( LoadStringW(a2, 0x1B6u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)L"ms-windows-store://pdp/?productid=9PJ0NKL8MCSJ");
  return this;
}
