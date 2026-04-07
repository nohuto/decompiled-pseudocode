/*
 * XREFs of ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800BBA28
 * Callers:
 *     ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800BBAF0 (--_ECDesktopThumbnail@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180026FE0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CDesktopThumbnail::~CDesktopThumbnail(void **this)
{
  *this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>(this + 30);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
}
