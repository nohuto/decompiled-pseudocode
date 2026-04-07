/*
 * XREFs of ??0CWindowList@@QEAA@XZ @ 0x1800272D4
 * Callers:
 *     ?Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z @ 0x1800264FC (-Initialize@CDesktopManager@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ??0?$CGenericSet@PEAVCWindowData@@@@QEAA@XZ @ 0x180027440 (--0-$CGenericSet@PEAVCWindowData@@@@QEAA@XZ.c)
 */

CWindowList *__fastcall CWindowList::CWindowList(CWindowList *this)
{
  CWindowList *result; // rax

  *(_QWORD *)this = &CWindowList::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    (PRTL_GENERIC_COMPARE_ROUTINE)CGenericTableMap<unsigned __int64,CWindowList::DESKTOP_WINDOWLIST_MAP_ENTRY>::CompareTableData,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)CGenericTableMap<HWND__ *,CMagnifierControl::MagnifierTableElement>::AllocTableData,
    (PRTL_GENERIC_FREE_ROUTINE)CGenericTableMap<enum IMMERSIVE_COLOR_TYPE,ColorCache::ColorData>::FreeTableData,
    0LL);
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_QWORD *)this + 36) = 0LL;
  *((_QWORD *)this + 37) = 0LL;
  *((_DWORD *)this + 76) = 0;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 312);
  *((_QWORD *)this + 48) = 0LL;
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 50) = 0LL;
  *((_DWORD *)this + 102) = 0;
  *((_QWORD *)this + 52) = 0LL;
  CGenericSet<CWindowData *>::CGenericSet<CWindowData *>((char *)this + 424);
  *((_QWORD *)this + 62) = 0LL;
  result = this;
  *((_QWORD *)this + 63) = 0LL;
  *((_QWORD *)this + 64) = 0LL;
  *((_DWORD *)this + 130) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 71) = 0LL;
  *((_QWORD *)this + 66) = 0LL;
  *((_QWORD *)this + 67) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  *((_QWORD *)this + 73) = 0LL;
  *((_QWORD *)this + 74) = 0LL;
  *((_DWORD *)this + 150) = 0;
  *((_QWORD *)this + 78) = 0LL;
  *((_QWORD *)this + 79) = 0LL;
  *((_DWORD *)this + 160) = 0;
  *((_QWORD *)this + 81) = 0LL;
  *((_QWORD *)this + 82) = 0LL;
  *((_QWORD *)this + 83) = 0LL;
  *((_DWORD *)this + 168) = 0;
  *((_WORD *)this + 340) = 0;
  *((_BYTE *)this + 682) = 0;
  *((_QWORD *)this + 86) = 0LL;
  *((_BYTE *)this + 696) = 0;
  *((_QWORD *)this + 88) = 0LL;
  return result;
}
