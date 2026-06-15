/*
 * XREFs of ??A?$CSimpleArray@PEAUHINSTANCE__@@V?$CSimpleArrayEqualHelper@PEAUHINSTANCE__@@@ATL@@@ATL@@QEAAAEAPEAUHINSTANCE__@@H@Z @ 0x1800475F8
 * Callers:
 *     ?GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z @ 0x180047624 (-GetHInstanceAt@CAtlBaseModule@ATL@@QEAAPEAUHINSTANCE__@@H@Z.c)
 * Callees:
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180034E38 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 */

__int64 __fastcall ATL::CSimpleArray<HINSTANCE__ *,ATL::CSimpleArrayEqualHelper<HINSTANCE__ *>>::operator[](
        __int64 a1,
        int a2)
{
  if ( a2 < 0 || a2 >= *(_DWORD *)(a1 + 8) )
  {
    ATL::_AtlRaiseException();
    JUMPOUT(0x18004761ALL);
  }
  return *(_QWORD *)a1 + 8LL * a2;
}
