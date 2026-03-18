/*
 * XREFs of ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x140224B70
 * Callers:
 *     ?GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECORD@@PEAVSURFACE@@@Z @ 0x1400C2F30 (-GrepMaskBltDevLocked@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKAEAVDEVLOCKBLTOBJ@@AEAVBLTRECOR.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall BLTRECORD::TrgPlg(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 33) = a3;
  *((_DWORD *)this + 35) = a3;
  *((_DWORD *)this + 37) = a5 + a3;
  *((_DWORD *)this + 32) = a2;
  *((_DWORD *)this + 36) = a2;
  *((_DWORD *)this + 34) = a2 + a4;
  return EXFORMOBJ::bXform(this, (const struct _POINTL *)this + 16, (struct _POINTFIX *)this + 12, 3uLL);
}
