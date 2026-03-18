/*
 * XREFs of ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045E18
 * Callers:
 *     BmlDoesTargetModeObeyConstraint @ 0x1402625B8 (BmlDoesTargetModeObeyConstraint.c)
 *     BmlCompareTargetModesWithConstraint @ 0x1402C7DB0 (BmlCompareTargetModesWithConstraint.c)
 *     ?_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z @ 0x140374960 (-_FillEntry@CDS_JOURNAL@@CAXPEAU_ENTRY@1@AEBUD3DKMT_AUGMENT_CDSJ@@PEAVDXGADAPTER@@@Z.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1403DE024 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     BmlCompareTargetModeWithVirtualRefreshRate @ 0x1403FD27C (BmlCompareTargetModeWithVirtualRefreshRate.c)
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
