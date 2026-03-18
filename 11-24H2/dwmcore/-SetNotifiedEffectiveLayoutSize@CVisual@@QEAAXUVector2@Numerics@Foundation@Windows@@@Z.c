/*
 * XREFs of ?SetNotifiedEffectiveLayoutSize@CVisual@@QEAAXUVector2@Numerics@Foundation@Windows@@@Z @ 0x180155798
 * Callers:
 *     ?IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z @ 0x1801550E0 (-IssueContextUpdateNotification@CVisual@@IEAAXMAEBUD2D_VECTOR_2F@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000CBEC (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
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
