/*
 * XREFs of ?bSetStockFont@@YAHPEAXHH@Z @ 0x140151E58
 * Callers:
 *     FinishStockFontReinit @ 0x140151630 (FinishStockFontReinit.c)
 *     FinishStockFontInit @ 0x140151750 (FinishStockFontInit.c)
 *     bInitSystemFont @ 0x1403E964C (bInitSystemFont.c)
 *     bInitOneStockFontInternal @ 0x1403EA6C8 (bInitOneStockFontInternal.c)
 *     bInitStockFontsInternal @ 0x1403EB62C (bInitStockFontsInternal.c)
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
      *(_QWORD *)(*((_QWORD *)v7 + 377) + 8 * v4) = a1;
    else
      *(_QWORD *)(*((_QWORD *)v7 + 376) + 8 * v4) = a1;
  }
  LOBYTE(v3) = a1 != 0LL;
  return v3;
}
