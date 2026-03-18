/*
 * XREFs of ?TrgPlg@BLTRECORD@@QEAAHHHHH@Z @ 0x1C0292ABC
 * Callers:
 *     GreMaskBlt @ 0x1C0079B5C (GreMaskBlt.c)
 *     GreStretchBltInternal @ 0x1C0100110 (GreStretchBltInternal.c)
 * Callees:
 *     <none>
 */

int __fastcall BLTRECORD::TrgPlg(BLTRECORD *this, int a2, int a3, int a4, int a5)
{
  *((_DWORD *)this + 37) = a3;
  *((_DWORD *)this + 39) = a3;
  *((_DWORD *)this + 41) = a5 + a3;
  *((_DWORD *)this + 36) = a2;
  *((_DWORD *)this + 40) = a2;
  *((_DWORD *)this + 38) = a2 + a4;
  return EXFORMOBJ::bXform(this, (struct _POINTL *)this + 18, (struct _POINTFIX *)this + 14, 3uLL);
}
