/*
 * XREFs of ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180140FA8
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x18008D57C (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1800433B0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechCompressed@@QEAA@XZ @ 0x1801415D8 (--0CSpatialAudioTechCompressed@@QEAA@XZ.c)
 */

CSpatialAudioDolbyAtmosMAT *__fastcall CSpatialAudioDolbyAtmosMAT::CSpatialAudioDolbyAtmosMAT(
        CSpatialAudioDolbyAtmosMAT *this,
        HINSTANCE a2)
{
  CSpatialAudioTechCompressed::CSpatialAudioTechCompressed(this);
  *(_QWORD *)this = &CSpatialAudioDolbyAtmosMAT::`vftable';
  *((_OWORD *)this + 1) = DOLBY_ATMOS_MAT_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x193u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"MAT 2.x");
  if ( LoadStringW(a2, 0x1B1u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)L"ms-windows-store://pdp/?productid=9n0866fs04w8");
  return this;
}
