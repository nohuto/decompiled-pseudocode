/*
 * XREFs of ?IommuEndExclusiveAccess@ADAPTER_RENDER@@CAXPEAUSYSMM_ADAPTER@@PEAX@Z @ 0x14019F5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ @ 0x1401A56A4 (-DdiEndExclusiveAccess@ADAPTER_RENDER@@QEAAJXZ.c)
 *     ?ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z @ 0x1402A1E90 (-ReleaseCoreResource@DXGADAPTER@@AEAAXPEBD@Z.c)
 */

void __fastcall ADAPTER_RENDER::IommuEndExclusiveAccess(struct SYSMM_ADAPTER *a1, DXGADAPTER **a2)
{
  ADAPTER_RENDER::DdiEndExclusiveAccess((ADAPTER_RENDER *)a2);
  DXGADAPTER::ReleaseCoreResource(a2[2], 0LL);
}
