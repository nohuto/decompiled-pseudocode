/*
 * XREFs of ??0CSpatialAudioTechCompressed@@QEAA@XZ @ 0x180138B8C
 * Callers:
 *     ??0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z @ 0x18013855C (--0CSpatialAudioDolbyAtmosMAT@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801387E4 (--0CSpatialAudioDtsxHdmi@@QEAA@PEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180138B2C (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioTechCompressed *__fastcall CSpatialAudioTechCompressed::CSpatialAudioTechCompressed(
        CSpatialAudioTechCompressed *this)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioTechCompressed::`vftable';
  return this;
}
