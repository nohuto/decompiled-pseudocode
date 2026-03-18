/*
 * XREFs of ?SetProperty@CPathGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A6F20
 * Callers:
 *     <none>
 * Callees:
 *     ?SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180023690 (-SetProperty@CGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z @ 0x1801A6F90 (-SetPath@CPathGeometry@@AEAAXPEBVCPathData@@@Z.c)
 */

__int64 __fastcall CPathGeometry::SetProperty(CPathGeometry *a1, int a2, int a3, const struct CPathData *a4)
{
  unsigned int v4; // ebx
  int v6; // eax

  if ( a2 == 5 )
  {
    if ( a3 != 11 )
    {
      v4 = -2147024809;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x68u, 0LL);
      return v4;
    }
    CPathGeometry::SetPath(a1, a4);
  }
  else
  {
    v6 = CGeometry::SetProperty(a1, a2, a3, a4);
    v4 = v6;
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x70u, 0LL);
      return v4;
    }
  }
  return 0;
}
