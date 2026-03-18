/*
 * XREFs of ??_GCSuperWetInkScribble@@UEAAPEAXI@Z @ 0x1801FB330
 * Callers:
 *     <none>
 * Callees:
 *     ??1CSuperWetInkScribble@@UEAA@XZ @ 0x1801FB370 (--1CSuperWetInkScribble@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CSuperWetInkScribble *__fastcall CSuperWetInkScribble::`scalar deleting destructor'(
        CSuperWetInkScribble *this,
        char a2)
{
  CSuperWetInkScribble::~CSuperWetInkScribble(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x40uLL);
  return this;
}
