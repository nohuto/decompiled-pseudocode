/*
 * XREFs of ??_ECAudioMediaType@@MEAAPEAXI@Z @ 0x1800A6520
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180021540 (--3@YAXPEAX@Z.c)
 *     ??1CAudioMediaType@@MEAA@XZ @ 0x1800A64EC (--1CAudioMediaType@@MEAA@XZ.c)
 */

void **__fastcall CAudioMediaType::`vector deleting destructor'(void **this, char a2)
{
  CAudioMediaType::~CAudioMediaType(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
