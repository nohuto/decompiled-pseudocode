/*
 * XREFs of ??1?$unique_ptr@$$BY0A@VCDrawListBitmap@@U?$default_delete@$$BY0A@VCDrawListBitmap@@@std@@@std@@QEAA@XZ @ 0x18004D470
 * Callers:
 *     ??1CPrimitiveGroupDrawListGenerator@@EEAA@XZ @ 0x1801710BC (--1CPrimitiveGroupDrawListGenerator@@EEAA@XZ.c)
 * Callees:
 *     ??1CDrawListBitmap@@QEAA@XZ @ 0x18004D620 (--1CDrawListBitmap@@QEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180250CC4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall std::unique_ptr<CDrawListBitmap [0]>::~unique_ptr<CDrawListBitmap [0]>(__int64 *a1)
{
  __int64 v1; // rdx
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  CDrawListBitmap *i; // rdi

  v1 = *a1;
  if ( *a1 )
  {
    v2 = (_QWORD *)(v1 - 8);
    v3 = *(_QWORD *)(v1 - 8);
    for ( i = (CDrawListBitmap *)(v1 + 24 * v3); v3; --v3 )
    {
      i = (CDrawListBitmap *)((char *)i - 24);
      CDrawListBitmap::~CDrawListBitmap(i);
    }
    operator delete(v2, 24LL * *v2 + 8);
  }
}
