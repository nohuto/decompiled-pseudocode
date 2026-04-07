/*
 * XREFs of ??1CDesktopThumbnail@@MEAA@XZ @ 0x1800B5AC4
 * Callers:
 *     ??_ECDesktopThumbnail@@MEAAPEAXI@Z @ 0x1800B5BA0 (--_ECDesktopThumbnail@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180050D7C (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 */

void __fastcall CDesktopThumbnail::~CDesktopThumbnail(CDesktopThumbnail *this)
{
  *(_QWORD *)this = &CDesktopThumbnail::`vftable';
  CDesktopThumbnail::s_pThumbnailNoRef = 0LL;
  DynArrayImpl<0>::~DynArrayImpl<0>((_QWORD *)this + 36);
  CDesktopThumbnailBase::~CDesktopThumbnailBase(this);
}
