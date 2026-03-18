/*
 * XREFs of ??PWin81@@YA_NAEBUtagSIZE@@0@Z @ 0x1401DB358
 * Callers:
 *     ?CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401DB524 (-CalculateMinMaxOverride@Win81@@YAXKUtagSIZE@@PEAJ1QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 *     ?SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z @ 0x1401DBD00 (-SatisfyMinResolutionBarForScaleIdx@Win81@@YAKHUtagSIZE@@QEBUDPI_SCALE_FACTOR_COLLECTION@1@@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1401DBDB8 (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall Win81::operator>=(_DWORD *a1, _DWORD *a2)
{
  return *a1 >= *a2 && a1[1] >= a2[1];
}
