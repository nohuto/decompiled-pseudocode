/*
 * XREFs of ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18013855C
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180090D90 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechCompressed@@QEAA@XZ @ 0x180138B8C (--0CSpatialAudioTechCompressed@@QEAA@XZ.c)
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
