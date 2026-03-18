/*
 * XREFs of ?GrepStretchReMapSurface@@YAXAEAVXDCOBJ@@PEAVSURFACE@@@Z @ 0x1401E36E0
 * Callers:
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x1400D0DEC (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall GrepStretchReMapSurface(struct XDCOBJ *a1, struct SURFACE *a2)
{
  if ( a2 )
  {
    if ( (unsigned int)SURFACE::Map(a2) == 2 )
      *(_DWORD *)(*(_QWORD *)a1 + 44LL) |= 1u;
  }
}
