/*
 * XREFs of ?bCreateDefaultBrushes@PDEVOBJ@@QEAAHXZ @ 0x140204D58
 * Callers:
 *     PDEVOBJ_bCreateDefaultBrushesWrap @ 0x140204D40 (PDEVOBJ_bCreateDefaultBrushesWrap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::bCreateDefaultBrushes(PDEVOBJ *this)
{
  int v2; // ebx
  __int64 i; // rdi

  v2 = 0;
  for ( i = 1456LL; ; i += 8LL )
  {
    if ( v2 >= 6 )
      return 1LL;
    *(_QWORD *)(i + *(_QWORD *)this) = EngCreateBitmap(
                                         (SIZEL)0x800000008LL,
                                         4,
                                         1u,
                                         1u,
                                         (char *)&unk_140356670 + 32 * v2);
    if ( !*(_QWORD *)(i + *(_QWORD *)this) )
      break;
    ++v2;
  }
  return 0LL;
}
