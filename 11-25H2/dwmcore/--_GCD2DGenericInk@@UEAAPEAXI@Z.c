/*
 * XREFs of ??_GCD2DGenericInk@@UEAAPEAXI@Z @ 0x1801AA770
 * Callers:
 *     <none>
 * Callees:
 *     ??1CD2DBrush@@UEAA@XZ @ 0x1801AA7AC (--1CD2DBrush@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18025C2F4 (--3@YAXPEAX_K@Z.c)
 */

CD2DGenericInk *__fastcall CD2DGenericInk::`scalar deleting destructor'(CD2DGenericInk *this, char a2)
{
  CD2DBrush::~CD2DBrush(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, 0x50uLL);
  return this;
}
