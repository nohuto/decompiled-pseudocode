/*
 * XREFs of ??_ECVisualTreeData@@UEAAPEAXI@Z @ 0x18010A7C0
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x180108F2C (--1CVisual@@MEAA@XZ.c)
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800CE9F4 (--1CTreeData@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CVisualTreeData *__fastcall CVisualTreeData::`vector deleting destructor'(CVisualTreeData *this, char a2)
{
  *(_QWORD *)this = &CVisualTreeData::`vftable';
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x180uLL);
  return this;
}
