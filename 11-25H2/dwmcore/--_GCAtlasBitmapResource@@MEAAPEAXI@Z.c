/*
 * XREFs of ??_GCAtlasBitmapResource@@MEAAPEAXI@Z @ 0x180213D10
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAtlasBitmapResource@@MEAA@XZ @ 0x180213D4C (--1CAtlasBitmapResource@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CAtlasBitmapResource *__fastcall CAtlasBitmapResource::`scalar deleting destructor'(
        CAtlasBitmapResource *this,
        char a2)
{
  CAtlasBitmapResource::~CAtlasBitmapResource(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x38uLL);
  return this;
}
