/*
 * XREFs of ?bSetStockFont@@YAHPEAXHH@Z @ 0x1C0019AE0
 * Callers:
 *     FinishStockFontReinit @ 0x1C0018720 (FinishStockFontReinit.c)
 *     FinishStockFontInit @ 0x1C0019280 (FinishStockFontInit.c)
 *     bInitStockFontsInternal @ 0x1C03B33B8 (bInitStockFontsInternal.c)
 *     bInitOneStockFontInternal @ 0x1C03B37A0 (bInitOneStockFontInternal.c)
 *     bInitSystemFont @ 0x1C03B55BC (bInitSystemFont.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockFont(Gre::Base *a1, int a2, int a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rbp
  struct Gre::Base::SESSION_GLOBALS *v7; // rax

  v3 = 0;
  v4 = a2;
  if ( a1 )
  {
    v7 = Gre::Base::Globals(a1);
    if ( a3 )
      *(_QWORD *)(*((_QWORD *)v7 + 397) + 8 * v4) = a1;
    else
      *(_QWORD *)(*((_QWORD *)v7 + 396) + 8 * v4) = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
