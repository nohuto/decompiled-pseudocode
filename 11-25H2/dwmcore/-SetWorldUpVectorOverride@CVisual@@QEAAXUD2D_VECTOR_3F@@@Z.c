/*
 * XREFs of ?SetWorldUpVectorOverride@CVisual@@QEAAXUD2D_VECTOR_3F@@@Z @ 0x1801EBC98
 * Callers:
 *     ?ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVERRIDES@@@Z @ 0x1801EBAFC (-ProcessSetContextOverrides@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETCONTEXTOVE.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetWorldUpVectorOverride(CVisual *this, struct D2D_VECTOR_3F *a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // r10
  __int64 z_low; // rcx

  v2 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  z_low = *(_QWORD *)&a2->x - `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue;
  if ( *(_QWORD *)&a2->x == `CVisual::SetNotifiedWorldUpVector'::`2'::sc_defaultValue )
    z_low = LODWORD(a2->z);
  if ( z_low )
    CSparseStorage::SetData(v2, 15, 0xCu, a2);
  else
    *((_DWORD *)*v2 + 1) &= ~0x20000u;
}
