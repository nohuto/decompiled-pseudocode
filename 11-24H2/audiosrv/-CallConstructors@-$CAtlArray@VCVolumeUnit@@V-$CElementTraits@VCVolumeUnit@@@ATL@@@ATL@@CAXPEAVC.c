/*
 * XREFs of ?CallConstructors@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@CAXPEAVCVolumeUnit@@_K@Z @ 0x180112EFC
 * Callers:
 *     ?SetCount@?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z @ 0x18011547C (-SetCount@-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAA_N_KH@Z.c)
 * Callees:
 *     ??0CVolumeUnit@@QEAA@XZ @ 0x18004E314 (--0CVolumeUnit@@QEAA@XZ.c)
 */

CVolumeUnit *__fastcall ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::CallConstructors(
        CVolumeUnit *this,
        __int64 a2)
{
  __int64 i; // rbx
  CVolumeUnit *result; // rax

  for ( i = a2; i; --i )
  {
    result = CVolumeUnit::CVolumeUnit(this, a2);
    this = (CVolumeUnit *)((char *)this + 64);
  }
  return result;
}
