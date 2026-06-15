/*
 * XREFs of ?FillLevels@CVolumeControlBase@@UEAAXIPEAM@Z @ 0x18004AED0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetWiper@CVolumeUnit@@QEAAMXZ @ 0x18004AF44 (-GetWiper@CVolumeUnit@@QEAAMXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800A116C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall CVolumeControlBase::FillLevels(CVolumeControlBase *this, int a2, float *a3)
{
  __int64 i; // rbx

  if ( a2 == *((_DWORD *)this + 29) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 29); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned __int64)(unsigned int)i >= *((_QWORD *)this + 11) )
        ATL::AtlThrowImpl(-2147024809);
      a3[i] = CVolumeUnit::GetWiper((CVolumeUnit *)(*((_QWORD *)this + 10) + ((unsigned __int64)(unsigned int)i << 6)));
    }
  }
}
