/*
 * XREFs of sqrt @ 0x1801C74AC
 * Callers:
 *     ?TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUScreenSizeAndDpi@2@@Z @ 0x1800BE89C (-TryGetScreenSizeAndDpi@PositionAndSizeOptionsHelper@KeyboardHosting@@CA_NPEAUHMONITOR__@@PEAUSc.c)
 *     ?_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV?$CCoSimpleArray@VLayoutItem@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutItem@GridLayoutFactory@@@@@@AEAV?$CCoSimpleArray@VLayoutRow@GridLayoutFactory@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@VLayoutRow@GridLayoutFactory@@@@@@PEA_KPEAH@Z @ 0x180588EC8 (-_CalculateNumberOfRows@GridLayoutFactory@@AEAAJAEBV-$CCoSimpleArray@VLayoutItem@GridLayoutFacto.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
double __cdecl sqrt(double X)
{
  return _o_sqrt(X);
}
