/*
 * XREFs of ??_GCGDISubSectionBitmapRealization@@UEAAPEAXI@Z @ 0x1802E0300
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSectionBitmapRealization@@MEAA@XZ @ 0x1801FA74C (--1CSectionBitmapRealization@@MEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CGDISubSectionBitmapRealization *__fastcall CGDISubSectionBitmapRealization::`scalar deleting destructor'(
        CGDISubSectionBitmapRealization *this,
        char a2)
{
  CSectionBitmapRealization::~CSectionBitmapRealization(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
