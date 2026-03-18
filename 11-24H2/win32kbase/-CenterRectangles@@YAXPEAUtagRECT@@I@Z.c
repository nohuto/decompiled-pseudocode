/*
 * XREFs of ?CenterRectangles@@YAXPEAUtagRECT@@I@Z @ 0x14000BEA0
 * Callers:
 *     ?RemoveOverlaps@@YAXPEAUtagRECT@@I@Z @ 0x14000B9EC (-RemoveOverlaps@@YAXPEAUtagRECT@@I@Z.c)
 *     ?RemoveGaps@@YAHPEAUtagRECT@@I@Z @ 0x14000BA7C (-RemoveGaps@@YAHPEAUtagRECT@@I@Z.c)
 * Callees:
 *     UnionRect @ 0x14000C078 (UnionRect.c)
 */

void __fastcall CenterRectangles(struct tagRECT *a1, int a2)
{
  struct tagRECT *v2; // r8
  struct tagRECT *v4; // rbx
  int v5; // edi
  struct tagRECT *v6; // r8
  int v7; // ecx
  int v8; // r8d
  LONG *p_bottom; // rax
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 1;
  v10 = (__int128)*a1;
  v4 = &a1[a2];
  v5 = a2;
  while ( v2 < v4 )
  {
    UnionRect(&v10, &v10);
    v2 = v6 + 1;
  }
  if ( v5 )
  {
    v7 = -DWORD1(v10) - (HIDWORD(v10) - DWORD1(v10)) / 2;
    v8 = -(int)v10 - (DWORD2(v10) - (int)v10) / 2;
    p_bottom = &a1->bottom;
    do
    {
      *(p_bottom - 3) += v8;
      *(p_bottom - 1) += v8;
      *p_bottom += v7;
      *(p_bottom - 2) += v7;
      p_bottom += 4;
      --v5;
    }
    while ( v5 );
  }
}
