/*
 * XREFs of ??$?RVCDrawListBitmap@@$0A@@?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@QEBAXPEAVCDrawListBitmap@@@Z @ 0x18004D408
 * Callers:
 *     ?RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ @ 0x180019EC8 (-RealizeBitmaps@CPrimitiveGroupDrawListGenerator@@AEAAJXZ.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::default_delete<CDrawListBitmap [0]>::operator()<CDrawListBitmap,0>(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  CDrawListBitmap *i; // rdi

  if ( a2 )
  {
    v2 = (_QWORD *)(a2 - 8);
    v3 = *(_QWORD *)(a2 - 8);
    for ( i = (CDrawListBitmap *)(a2 + 24 * v3); v3; --v3 )
    {
      i = (CDrawListBitmap *)((char *)i - 24);
      CDrawListBitmap::~CDrawListBitmap(i);
    }
    operator delete(v2, 24LL * *v2 + 8);
  }
}
