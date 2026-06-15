/*
 * XREFs of ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180138A6C
 * Callers:
 *     ?CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z @ 0x180090D90 (-CreateTopologyList@CSpatialAudioTechnologies@@QEAAJPEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18004F0C0 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180138BB4 (--0CSpatialAudioTechHRTF@@QEAA@XZ.c)
 */

CSpatialAudioMSHRTF *__fastcall CSpatialAudioMSHRTF::CSpatialAudioMSHRTF(CSpatialAudioMSHRTF *this, HINSTANCE a2)
{
  CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(this);
  *(_QWORD *)this = &CSpatialAudioMSHRTF::`vftable';
  *((_OWORD *)this + 1) = MICROSOFT_HRTF_SPATIAL_ENCODER;
  if ( LoadStringW(a2, 0x190u, (LPWSTR)this + 16, 128) <= 0 )
    StringCchCopyW((char *)this + 32, 128LL, (char *)L"Microsoft HRTF");
  if ( LoadStringW(a2, 0x1AEu, (LPWSTR)this + 144, 256) <= 0 )
    StringCchCopyW((char *)this + 288, 256LL, (char *)&LocaleName);
  return this;
}
