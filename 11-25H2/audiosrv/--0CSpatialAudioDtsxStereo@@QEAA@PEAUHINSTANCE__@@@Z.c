/*
 * XREFs of ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801389AC
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180090D90 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180138BB4 (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 */

CSpatialAudioDtsxStereo *__fastcall CSpatialAudioDtsxStereo::CSpatialAudioDtsxStereo(
        CSpatialAudioDtsxStereo *this,
        HINSTANCE a2)
{
  CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(this);
  *(_QWORD *)this = &CSpatialAudioDtsxStereo::`vftable';
  *((_OWORD *)this + 1) = DTSX_TWOSPEAKER_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x195u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"DTS Virtual:X for speakers");
  if ( LoadStringW(a2, 0x1B4u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)L"ms-windows-store://pdp/?productid=9PJ0NKL8MCSJ");
  return this;
}
