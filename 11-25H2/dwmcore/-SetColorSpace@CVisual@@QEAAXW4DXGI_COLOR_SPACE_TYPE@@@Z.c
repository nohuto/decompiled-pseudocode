/*
 * XREFs of ?SetColorSpace@CVisual@@QEAAXW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1802975BC
 * Callers:
 *     ?ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z @ 0x180296ED0 (-ProcessForceLowColor@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_FORCELOWCOLOR@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetColorSpace(CVisual *this, enum DXGI_COLOR_SPACE_TYPE a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // rcx
  enum DXGI_COLOR_SPACE_TYPE v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  if ( a2 == `CVisual::SetColorSpace'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x4000000u;
  else
    CSparseStorage::SetData(v2, 6, 4u, &v3);
}
