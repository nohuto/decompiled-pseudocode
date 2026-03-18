/*
 * XREFs of ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x1801A5DCC
 * Callers:
 *     ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801A5D00 (-SetRelativeSize@CVisual@@QEAAXMM@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetRelativeLayoutSizeInternal(CVisual *this, struct D2D_SIZE_F a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // rcx
  struct D2D_SIZE_F v3; // [rsp+20h] [rbp-18h] BYREF

  v2 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  v3 = a2;
  if ( a2 == *(_QWORD *)&`CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x20000000u;
  else
    CSparseStorage::SetData(v2, 3, 8u, &v3);
}
