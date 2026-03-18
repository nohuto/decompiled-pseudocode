/*
 * XREFs of ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x18003E668
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800BB3C0 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetNotifiedEffectiveLayoutSize(__int64 a1, __int64 a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // rcx
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct CSparseStorage::AllocatedStorage **)(a1 + 224);
  v3[0] = a2;
  if ( a2 == *(_QWORD *)&`CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x800000u;
  else
    CSparseStorage::SetData(v2, 9, 8u, v3);
}
