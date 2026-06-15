/*
 * XREFs of ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801388A4
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180090D90 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180138BB4 (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 */

CSpatialAudioDtsxHeadphones *__fastcall CSpatialAudioDtsxHeadphones::CSpatialAudioDtsxHeadphones(
        CSpatialAudioDtsxHeadphones *this,
        HINSTANCE a2)
{
  CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(this);
  *(_QWORD *)this = &CSpatialAudioDtsxHeadphones::`vftable';
  *((_OWORD *)this + 1) = DTSX_HEADPHONES_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x194u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"DTS Headphone:X");
  if ( LoadStringW(a2, 0x1B3u, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)L"ms-windows-store://pdp/?productid=9PJ0NKL8MCSJ");
  if ( LoadStringW(a2, 0x1B5u, (LPWSTR)this + 400, 256) <= 0 )
    StringCchCopyW((char *)this + 800, 256LL, (char *)this + 288);
  return this;
}
