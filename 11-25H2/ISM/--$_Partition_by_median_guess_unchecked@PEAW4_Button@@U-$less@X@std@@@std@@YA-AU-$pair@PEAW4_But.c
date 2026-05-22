/*
 * XREFs of ??$_Partition_by_median_guess_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YA?AU?$pair@PEAW4_Button@@PEAW41@@0@PEAW4_Button@@0U?$less@X@0@@Z @ 0x18019DBEC
 * Callers:
 *     ??$_Sort_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@0_JU?$less@X@0@@Z @ 0x18019DE5C (--$_Sort_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@0_JU-$less@X@0@@Z.c)
 * Callees:
 *     ??$_Med3_unchecked@PEAW4_Button@@U?$less@X@std@@@std@@YAXPEAW4_Button@@00U?$less@X@0@@Z @ 0x18019DBB4 (--$_Med3_unchecked@PEAW4_Button@@U-$less@X@std@@@std@@YAXPEAW4_Button@@00U-$less@X@0@@Z.c)
 */

int **__fastcall std::_Partition_by_median_guess_unchecked<enum _Button *,std::less<void>>(int **a1, int *a2, int *a3)
{
  int *v3; // r14
  int *v7; // rcx
  int *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rax
  int *v11; // rbx
  __int64 v12; // r10
  __int64 v13; // r10
  __int64 v14; // r11
  int *v15; // rdx
  int *v16; // r8
  int *v17; // rdx
  int v18; // eax
  int *v19; // rcx
  int v20; // eax
  int *v21; // r8
  int *v22; // r9
  int v23; // ecx
  int v24; // eax
  bool v25; // zf
  int *v26; // rcx
  int v27; // r10d
  int v28; // eax
  int v29; // ecx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int **result; // rax

  v3 = a3 - 1;
  v7 = a2;
  v8 = &a2[((char *)a3 - (char *)a2) >> 3];
  v9 = a3 - 1 - a2;
  if ( v9 <= 40 )
  {
    v16 = a3 - 1;
  }
  else
  {
    v10 = (v9 + 1) >> 3;
    v11 = &a2[v10];
    std::_Med3_unchecked<enum _Button *,std::less<void>>(a2, v11, &a2[2 * v10]);
    std::_Med3_unchecked<enum _Button *,std::less<void>>((int *)((char *)v8 - v12), v8, (int *)((char *)v8 + v12));
    std::_Med3_unchecked<enum _Button *,std::less<void>>((int *)((char *)v3 - v14), (int *)((char *)v3 - v13), v3);
    v16 = v15;
    v7 = v11;
  }
  std::_Med3_unchecked<enum _Button *,std::less<void>>(v7, v8, v16);
  v17 = v8 + 1;
  if ( a2 < v8 )
  {
    v18 = *v8;
    do
    {
      v19 = v8 - 1;
      if ( *(v8 - 1) < v18 )
        break;
      if ( *(v8 - 1) > v18 )
        break;
      v18 = *v19;
      --v8;
    }
    while ( a2 < v19 );
  }
  if ( v17 < a3 )
  {
    v20 = *v8;
    do
    {
      if ( *v17 < v20 )
        break;
      if ( *v17 > v20 )
        break;
      ++v17;
    }
    while ( v17 < a3 );
  }
  v21 = v17;
  v22 = v8;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v21 < a3 )
      {
        v23 = *v21;
        if ( *v8 < *v21 )
          goto LABEL_39;
        if ( *v8 <= v23 )
        {
          if ( v17 != v21 )
          {
            v24 = *v17;
            *v17 = v23;
            *v21 = v24;
          }
          ++v17;
          goto LABEL_39;
        }
      }
      v25 = v22 == a2;
      if ( v22 > a2 )
      {
        v26 = v22 - 1;
        do
        {
          v27 = *v26;
          if ( *v26 >= *v8 )
          {
            if ( v27 > *v8 )
              break;
            if ( --v8 != v26 )
            {
              v28 = *v8;
              *v8 = v27;
              *v26 = v28;
            }
          }
          --v22;
          --v26;
        }
        while ( a2 < v22 );
        v25 = v22 == a2;
      }
      if ( v25 )
        break;
      --v22;
      if ( v21 != a3 )
      {
        v33 = *v21;
        *v21 = *v22;
        *v22 = v33;
        goto LABEL_39;
      }
      if ( v22 != --v8 )
      {
        v31 = *v22;
        *v22 = *v8;
        *v8 = v31;
      }
      v32 = *v8;
      *v8 = *--v17;
      *v17 = v32;
    }
    if ( v21 == a3 )
      break;
    if ( v17 != v21 )
    {
      v29 = *v8;
      *v8 = *v17;
      *v17 = v29;
    }
    v30 = *v8;
    ++v17;
    *v8++ = *v21;
    *v21 = v30;
LABEL_39:
    ++v21;
  }
  result = a1;
  *a1 = v8;
  a1[1] = v17;
  return result;
}
