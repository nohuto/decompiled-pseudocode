/*
 * XREFs of ?SetTopLevelWindow@CVisual@@QEAAX_K@Z @ 0x18021387C
 * Callers:
 *     ?ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z @ 0x180213848 (-ProcessTopLevelNode@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_TOPLEVELNODE@@@Z.c)
 * Callees:
 *     ?SetData@CSparseStorage@@QEAAXIIPEBX@Z @ 0x18000D550 (-SetData@CSparseStorage@@QEAAXIIPEBX@Z.c)
 */

void __fastcall CVisual::SetTopLevelWindow(CVisual *this, __int64 a2)
{
  struct CSparseStorage::AllocatedStorage **v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = a2;
  v2 = (struct CSparseStorage::AllocatedStorage **)((char *)this + 224);
  if ( a2 == *(_QWORD *)&`CVisual::SetRelativeLayoutSizeInternal'::`2'::sc_defaultValue )
    *((_DWORD *)*v2 + 1) &= ~0x80000000;
  else
    CSparseStorage::SetData(v2, 1, 8u, &v3);
}
