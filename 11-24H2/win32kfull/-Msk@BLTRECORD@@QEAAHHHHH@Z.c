/*
 * XREFs of ?Msk@BLTRECORD@@QEAAHHHHH@Z @ 0x140308EE0
 * Callers:
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x1400C2F30 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z @ 0x1400C56E8 (-bXform@EXFORMOBJ@@QEBA_NPEAU_POINTL@@_K@Z.c)
 */

__int64 __fastcall BLTRECORD::Msk(struct _POINTL *this, LONG a2, LONG a3, __int64 a4, LONG a5)
{
  struct _POINTL *v5; // rdi
  __int64 result; // rax

  v5 = this + 19;
  this[19].y = 0;
  this[19].x = 0;
  this[21].x = a2;
  this[21].y = a3;
  this[20].y = a5;
  this[20].x = a4;
  if ( !EXFORMOBJ::bXform((EXFORMOBJ *)&this[1], this + 19, 2LL, a4) )
    return 0LL;
  result = 1LL;
  this[22].x = a2 + this[20].x - v5->x;
  this[22].y = a3 + this[20].y - this[19].y;
  return result;
}
