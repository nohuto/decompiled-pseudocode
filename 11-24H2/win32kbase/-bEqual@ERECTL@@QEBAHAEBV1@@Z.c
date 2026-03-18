/*
 * XREFs of ?bEqual@ERECTL@@QEBAHAEBV1@@Z @ 0x1400EE304
 * Callers:
 *     ?GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z @ 0x1401CD320 (-GrepValidateVisRgn@@YA_NPEAVDC@@PEAVREGION@@AEAVERECTL@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall ERECTL::bEqual(ERECTL *this, const struct ERECTL *a2)
{
  return *(_DWORD *)this == *(_DWORD *)a2
      && *((_DWORD *)this + 2) == *((_DWORD *)a2 + 2)
      && *((_DWORD *)this + 1) == *((_DWORD *)a2 + 1)
      && *((_DWORD *)this + 3) == *((_DWORD *)a2 + 3);
}
