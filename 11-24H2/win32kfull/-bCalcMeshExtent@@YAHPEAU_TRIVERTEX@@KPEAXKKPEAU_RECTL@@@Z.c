/*
 * XREFs of ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1400C85E4
 * Callers:
 *     GreGradientFill @ 0x1400C87D4 (GreGradientFill.c)
 * Callees:
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall bCalcMeshExtent(
        struct _TRIVERTEX *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6)
{
  LONG v6; // ebx
  LONG v7; // esi
  LONG v9; // ebp
  LONG v10; // r14d
  struct _TRIVERTEX *v13; // rdx
  unsigned int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // rax
  LONG v18; // r10d
  LONG v19; // r8d
  __int64 v20; // rax
  LONG v21; // ecx
  LONG v22; // edx
  LONG v23; // r9d
  LONG v24; // eax
  bool v25; // cc
  __int64 result; // rax
  unsigned int i; // r9d
  __int64 v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  LONG x; // ecx
  LONG y; // edx
  LONG v33; // eax
  _DWORD v35[4]; // [rsp+8h] [rbp-40h]

  v6 = 0x7FFFFFFF;
  v7 = 0x80000000;
  v9 = 0x7FFFFFFF;
  v10 = 0x80000000;
  v13 = a1;
  if ( a5 >= 2 )
  {
    if ( a5 != 2 )
      goto LABEL_30;
    for ( i = 0; i < a4; ++i )
    {
      v28 = 0LL;
      v35[0] = *a3;
      v35[1] = a3[1];
      v35[2] = a3[2];
      while ( v28 < 3 )
      {
        v29 = (unsigned int)v35[v28];
        if ( (unsigned int)v29 >= a2 )
          goto LABEL_30;
        v30 = v29;
        x = v13[v30].x;
        y = v13[v30].y;
        v33 = y;
        if ( x < v6 )
          v6 = x;
        ++v28;
        if ( x <= v7 )
          x = v7;
        v7 = x;
        if ( y >= v9 )
          v33 = v9;
        v9 = v33;
        if ( y <= v10 )
          y = v10;
        v10 = y;
        v13 = a1;
      }
      a3 += 3;
    }
  }
  else
  {
    v14 = 0;
    while ( v14 < a4 )
    {
      v15 = (unsigned int)*a3;
      if ( (unsigned int)v15 > a2 )
        goto LABEL_30;
      v16 = a3[1];
      if ( v16 > a2 )
        goto LABEL_30;
      v17 = v15;
      v18 = v13[v17].y;
      v19 = v13[v17].x;
      v20 = v16;
      v21 = v18;
      v22 = v13[v20].x;
      v23 = a1[v20].y;
      v24 = v19;
      if ( v19 >= v6 )
        v24 = v6;
      v6 = v22;
      if ( v19 <= v7 )
        v19 = v7;
      v7 = v22;
      if ( v18 >= v9 )
        v21 = v9;
      v9 = v23;
      if ( v18 <= v10 )
        v18 = v10;
      a3 += 2;
      ++v14;
      v10 = v23;
      if ( v22 >= v24 )
        v6 = v24;
      v25 = v22 <= v19;
      v13 = a1;
      if ( v25 )
        v7 = v19;
      if ( v23 >= v21 )
        v9 = v21;
      if ( v23 <= v18 )
        v10 = v18;
    }
  }
  if ( v6 >= -134217728
    && v6 <= 0x8000000
    && (unsigned int)(v7 + 0x8000000) <= 0x10000000
    && (unsigned int)(v9 + 0x8000000) <= 0x10000000
    && (unsigned int)(v10 + 0x8000000) <= 0x10000000 )
  {
    a6->left = v6;
    result = 1LL;
    a6->right = v7;
    a6->top = v9;
    a6->bottom = v10;
    return result;
  }
LABEL_30:
  a6->left = 0;
  a6->right = 0;
  a6->top = 0;
  a6->bottom = 0;
  return 0LL;
}
