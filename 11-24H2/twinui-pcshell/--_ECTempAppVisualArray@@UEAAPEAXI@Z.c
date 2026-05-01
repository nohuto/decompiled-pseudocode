/*
 * XREFs of ??_ECTempAppVisualArray@@UEAAPEAXI@Z @ 0x180546750
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1CTempAppVisualArray@@UEAA@XZ @ 0x1805466D8 (--1CTempAppVisualArray@@UEAA@XZ.c)
 */

CTempAppVisualArray *__fastcall CTempAppVisualArray::`vector deleting destructor'(CTempAppVisualArray *this, char a2)
{
  CTempAppVisualArray::~CTempAppVisualArray(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
