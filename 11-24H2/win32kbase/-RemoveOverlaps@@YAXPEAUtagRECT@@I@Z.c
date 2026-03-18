/*
 * XREFs of ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x14000B9EC
 * Callers:
 *     AlignRects @ 0x14000B5E8 (AlignRects.c)
 * Callees:
 *     ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x14000BEA0 (-CenterRectangles@@YAXPEAUtagRECT@@I@Z.c)
 *     IntersectRect @ 0x14000C128 (IntersectRect.c)
 *     ?RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z @ 0x140222698 (-RemoveOverlap@@YAPEAUtagRECT@@PEAU1@00@Z.c)
 */

void __fastcall RemoveOverlaps(struct tagRECT *a1, unsigned int a2)
{
  __int64 v2; // rsi
  struct tagRECT *v4; // rbx
  struct tagRECT *v5; // rsi
  struct tagRECT *i; // rdi
  struct tagRECT v7; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2;
  CenterRectangles(a1, a2);
  v4 = a1 + 1;
  v5 = &a1[v2];
LABEL_2:
  while ( v4 < v5 )
  {
    for ( i = a1; ; ++i )
    {
      if ( i >= v4 )
      {
        ++v4;
        goto LABEL_2;
      }
      v7 = 0LL;
      if ( (unsigned int)IntersectRect(&v7, i, v4) )
        break;
    }
    v4 = RemoveOverlap(i, v4, &v7);
  }
}
