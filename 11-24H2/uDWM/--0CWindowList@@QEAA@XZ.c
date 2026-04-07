/*
 * XREFs of ??0CWindowList@@QEAA@XZ @ 0x180070710
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x18007FA54 (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0CBitmapSourceArray@@QEAA@XZ @ 0x18000C2D0 (--0CBitmapSourceArray@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z @ 0x180026FB0 (--0-$DynArrayImpl@$0A@@@IEAA@PEAXIII@Z.c)
 *     ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x18009A454 (--0-$CGenericSet@PEAVCWindowData@@@@QEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::CWindowList(CWindowList *this)
{
  __int64 v2; // rdx
  int v3; // r8d
  CWindowList *result; // rax

  *(_QWORD *)this = &CWindowList::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<CVisual *,CProjectedShadowScene::CProjectedShadowSceneInstance::VISUAL_RESOURCE_MAP_ENTRY_CASTER>::CompareTableData,
    CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  CBitmapSourceArray::CBitmapSourceArray((CWindowList *)((char *)this + 280));
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 312);
  CBitmapSourceArray::CBitmapSourceArray((CWindowList *)((char *)this + 384));
  *((_QWORD *)this + 52) = 0LL;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 424);
  CBitmapSourceArray::CBitmapSourceArray((CWindowList *)((char *)this + 496));
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 568, 0LL, 0);
  *((_QWORD *)this + 77) = 0LL;
  *((_QWORD *)this + 78) = 0LL;
  *((_DWORD *)this + 158) = 0;
  DynArrayImpl<0>::DynArrayImpl<0>((__int64)this + 640, v2, v3);
  result = this;
  *((_WORD *)this + 336) = 0;
  *((_BYTE *)this + 674) = 0;
  *((_QWORD *)this + 85) = 0LL;
  *((_BYTE *)this + 688) = 0;
  *((_QWORD *)this + 87) = 0LL;
  return result;
}
