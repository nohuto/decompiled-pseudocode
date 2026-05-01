/*
 * XREFs of ??$FindEx@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@?$CTSimpleFixedArray@PEAUHWND__@@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@QEBAJAEBV?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@AEBQEAUHWND__@@PEA_K_K@Z @ 0x18055BA1C
 * Callers:
 *     ?ExcludeWindow@VirtualDesktopGestureWindow@@IEAAJPEAUHWND__@@AEAV?$CCoSimpleArray@PEAUHWND__@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@PEAUHWND__@@@@@@1@Z @ 0x18055F734 (-ExcludeWindow@VirtualDesktopGestureWindow@@IEAAJPEAUHWND__@@AEAV-$CCoSimpleArray@PEAUHWND__@@$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTSimpleFixedArray<HWND__ *,CSimpleArrayStandardCompareHelper<HWND__ *>>::FindEx<CSimpleArrayStandardCompareHelper<HWND__ *>>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10

  v4 = 0LL;
  *a4 = 0LL;
  while ( v4 < a1[1] )
  {
    if ( *(_QWORD *)(*a1 + 8 * v4) == *a3 )
    {
      *a4 = v4;
      return 0LL;
    }
    ++v4;
  }
  return 2147647531LL;
}
