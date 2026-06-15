/*
 * XREFs of ??0CSpatialAudioTechHRTF@@QEAA@XZ @ 0x180141600
 * Callers:
 *     ??0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180141068 (--0CSpatialAudioDolbyHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDolbySpeakers@@QEAA@PEAUHINSTANCE__@@@Z @ 0x180141170 (--0CSpatialAudioDolbySpeakers@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801412F0 (--0CSpatialAudioDtsxHeadphones@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801413F8 (--0CSpatialAudioDtsxStereo@@QEAA@PEAUHINSTANCE__@@@Z.c)
 *     ??0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z @ 0x1801414B8 (--0CSpatialAudioMSHRTF@@QEAA@PEAUHINSTANCE__@@@Z.c)
 * Callees:
 *     ??0CSpatialAudioTech@@QEAA@XZ @ 0x180141578 (--0CSpatialAudioTech@@QEAA@XZ.c)
 */

CSpatialAudioTechHRTF *__fastcall CSpatialAudioTechHRTF::CSpatialAudioTechHRTF(CSpatialAudioTechHRTF *this)
{
  CSpatialAudioTech::CSpatialAudioTech(this);
  *(_QWORD *)this = &CSpatialAudioTechHRTF::`vftable';
  return this;
}
