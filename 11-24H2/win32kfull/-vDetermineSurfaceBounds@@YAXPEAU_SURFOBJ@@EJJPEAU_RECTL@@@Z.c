/*
 * XREFs of ?vDetermineSurfaceBounds@@YAXPEAU_SURFOBJ@@EJJPEAU_RECTL@@@Z @ 0x140172774
 * Callers:
 *     ?vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x14017266C (-vCalculateCursorBounds@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vDetermineSurfaceBounds(struct _SURFOBJ *a1, char a2, LONG a3, LONG a4, struct _RECTL *a5)
{
  __int64 iBitmapFormat; // rax
  __int64 lDelta; // r11
  LONG cx; // ecx
  int v9; // r14d
  int v11; // r12d
  char *pvScan0; // r9
  unsigned int v15; // ebx
  char *v16; // rdx
  char *v17; // rax
  unsigned int j; // ecx
  int v19; // r8d
  LONG *p_right; // rax
  char *v21; // rcx
  char *v22; // rax
  unsigned int k; // r8d
  char *v24; // rcx
  char *v25; // r8
  int m; // r9d
  char *v27; // r8
  char *v28; // rcx
  int n; // edx
  int v30; // ecx
  char v31; // r8
  int v32; // eax
  char *v33; // rcx
  char i; // r8

  iBitmapFormat = a1->iBitmapFormat;
  lDelta = a1->lDelta;
  cx = a1->sizlBitmap.cx;
  v9 = 0;
  v11 = *(_DWORD *)&gaulConvert[2 * iBitmapFormat];
  pvScan0 = (char *)a1->pvScan0;
  v15 = (cx * v11 + 7) >> 3;
  if ( (_DWORD)iBitmapFormat == 1 )
  {
    v30 = cx & 7;
    if ( v30 )
    {
      v31 = (256 >> v30) - 1;
      v32 = a4 - a3;
      v33 = &pvScan0[a3 * (int)lDelta - 1 + v15];
      if ( a2 )
      {
        for ( ; v32; --v32 )
        {
          *v33 |= v31;
          v33 += lDelta;
        }
      }
      else
      {
        for ( i = ~v31; v32; --v32 )
        {
          *v33 &= i;
          v33 += lDelta;
        }
      }
    }
  }
  v16 = &pvScan0[a3 * (int)lDelta];
  while ( 2 )
  {
    v17 = v16;
    for ( j = v15; j; --j )
    {
      if ( *v17 != a2 )
      {
        v21 = &pvScan0[(int)lDelta * (a4 - 1)];
LABEL_10:
        v22 = v21;
        for ( k = v15; ; --k )
        {
          if ( !k )
          {
            v21 -= lDelta;
            --a4;
            goto LABEL_10;
          }
          if ( *v22 != a2 )
            break;
          ++v22;
        }
        v24 = v16;
LABEL_16:
        v25 = v24;
        for ( m = a4 - a3; ; --m )
        {
          if ( !m )
          {
            ++v24;
            ++v9;
            goto LABEL_16;
          }
          if ( *v25 != a2 )
            break;
          v25 += lDelta;
        }
        v27 = &v16[v15 - 1];
LABEL_22:
        v28 = v27;
        for ( n = a4 - a3; ; --n )
        {
          if ( !n )
          {
            --v27;
            --v15;
            goto LABEL_22;
          }
          if ( *v28 != a2 )
            break;
          v28 += lDelta;
        }
        a5->top = a3;
        a5->left = 8 * v9 / v11;
        a5->bottom = a4;
        v19 = (int)(v11 - 1 + 8 * v15) / v11;
        p_right = &a5->right;
        a5->right = v19;
        if ( v19 >= a1->sizlBitmap.cx )
          v19 = a1->sizlBitmap.cx;
        goto LABEL_29;
      }
      ++v17;
    }
    v16 += lDelta;
    if ( ++a3 < a4 )
      continue;
    break;
  }
  v19 = 0x80000000;
  a5->left = 0x7FFFFFFF;
  a5->top = 0x7FFFFFFF;
  a5->bottom = 0x80000000;
  p_right = &a5->right;
LABEL_29:
  *p_right = v19;
}
