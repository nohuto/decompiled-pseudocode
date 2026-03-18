/*
 * XREFs of ?RemoveAt@CPtrArrayBase@@IEAAX_K0@Z @ 0x1801C3E20
 * Callers:
 *     ?SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z @ 0x180113838 (-SetFlipExSurface@CWindowNode@@QEAAJPEAX@Z.c)
 *     ?SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z @ 0x180130214 (-SetSpriteBitmap@CWindowNode@@QEAAJPEAVCGdiSpriteBitmap@@@Z.c)
 *     ?DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z @ 0x1801321F8 (-DiscardOldestGdiSpriteBitmaps@CWindowNode@@AEAAX_K@Z.c)
 *     ?DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z @ 0x1802104B8 (-DiscardOldestFlipExSurfaces@CWindowNode@@AEAAX_K@Z.c)
 * Callees:
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

void __fastcall CPtrArrayBase::RemoveAt(CPtrArrayBase *this, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r9
  unsigned __int64 v5; // rbx
  __int64 v6; // rsi
  _QWORD *v7; // rsi
  void *v8; // rdi
  unsigned __int64 v9; // rbx
  HANDLE ProcessHeap; // rax
  __int64 v11; // rbx
  HANDLE v12; // rax

  v3 = a3;
  if ( (*(_QWORD *)this & 2) != 0 )
    v5 = *(_QWORD *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)this & 1LL;
  v6 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2LL) == 0 )
    v6 = *(_QWORD *)this;
  v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFCuLL);
  if ( a2 < v5 && a3 )
  {
    if ( a3 >= v5 - a2 )
      v3 = v5 - a2;
    if ( v5 == v3 )
    {
      if ( v5 > 1 )
      {
        v8 = (void *)(*(_QWORD *)this & 0xFFFFFFFFFFFFFFFCuLL);
        if ( v8 )
        {
          ProcessHeap = GetProcessHeap();
          HeapFree(ProcessHeap, 0, v8);
        }
      }
      *(_QWORD *)this = 0LL;
    }
    else
    {
      v9 = v5 - v3;
      if ( v9 == 1 )
      {
        v11 = v7[(v3 & (a2 - 1)) + 2];
        if ( v7 )
        {
          v12 = GetProcessHeap();
          HeapFree(v12, 0, v7);
        }
        *(_QWORD *)this = v11 | 1;
      }
      else
      {
        if ( a2 < v9 )
          memmove_0(&v7[a2 + 2], &v7[v3 + 2 + a2], 8 * (v9 - a2));
        *v7 = v9;
      }
    }
  }
}
