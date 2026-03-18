/*
 * XREFs of ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045808
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402694B8 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1402DC0F0 (BmlCompareTargetModeWithVirtualRefreshRate.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402DD6F4 (BmlCompareTargetModesWithConstraint.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x14031BB44 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x140342580 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsUnspecifiedFrequency(const struct _D3DDDI_RATIONAL *a1)
{
  int v1; // edx
  bool result; // al

  v1 = -2;
  result = (a1->Numerator == -2 || (v1 = -1, a1->Numerator == -1)) && a1->Denominator == v1;
  return result;
}
