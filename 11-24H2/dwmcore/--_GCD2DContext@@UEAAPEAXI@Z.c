/*
 * XREFs of ??_GCD2DContext@@UEAAPEAXI@Z @ 0x1802BC570
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DContext@@UEAA@XZ @ 0x1801CA738 (--1CD2DContext@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

CD2DContext *__fastcall CD2DContext::`scalar deleting destructor'(CD2DContext *this, char a2)
{
  CD2DContext::~CD2DContext(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
