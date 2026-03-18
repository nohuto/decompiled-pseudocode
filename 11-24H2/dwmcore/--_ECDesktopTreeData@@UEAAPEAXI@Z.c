/*
 * XREFs of ??_ECDesktopTreeData@@UEAAPEAXI@Z @ 0x18028B3E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x180032F54 (--1CTreeData@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CDesktopTreeData *__fastcall CDesktopTreeData::`vector deleting destructor'(CDesktopTreeData *this, char a2)
{
  *((_BYTE *)this + 10) = 0;
  *(_QWORD *)this = &CDesktopTreeData::`vftable';
  CTreeData::~CTreeData((void **)this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
