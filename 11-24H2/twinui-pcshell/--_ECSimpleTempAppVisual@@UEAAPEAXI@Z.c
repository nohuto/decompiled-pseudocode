/*
 * XREFs of ??_ECSimpleTempAppVisual@@UEAAPEAXI@Z @ 0x1805498D0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2320 (--3@YAXPEAX@Z.c)
 *     ??1CSimpleTempAppVisual@@UEAA@XZ @ 0x1805498A8 (--1CSimpleTempAppVisual@@UEAA@XZ.c)
 */

CSimpleTempAppVisual *__fastcall CSimpleTempAppVisual::`vector deleting destructor'(
        CSimpleTempAppVisual *this,
        char a2)
{
  CSimpleTempAppVisual::~CSimpleTempAppVisual(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
