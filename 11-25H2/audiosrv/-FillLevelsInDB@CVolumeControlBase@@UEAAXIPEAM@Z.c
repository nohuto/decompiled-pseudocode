/*
 * XREFs of ?FillLevelsInDB@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x18010C0B0
 * Callers:
 *     <none>
 * Callees:
 *     ??A?$CAtlArray@VCVolumeUnit@@V?$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K@Z @ 0x180052470 (--A-$CAtlArray@VCVolumeUnit@@V-$CElementTraits@VCVolumeUnit@@@ATL@@@ATL@@QEAAAEAVCVolumeUnit@@_K.c)
 */

void __fastcall CVolumeControlBase::FillLevelsInDB(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rdi
  float *v6; // rax

  if ( a2 == *((_DWORD *)this + 29) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      v6 = (float *)ATL::CAtlArray<CVolumeUnit,ATL::CElementTraits<CVolumeUnit>>::operator[](
                      (_QWORD *)this + 10,
                      (unsigned int)i);
      a3[i] = fmaxf(v6[2], fminf(v6[3], v6[1]));
    }
  }
}
