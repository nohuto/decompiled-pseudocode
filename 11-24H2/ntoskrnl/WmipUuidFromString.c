/*
 * XREFs of WmipUuidFromString @ 0x1409B4188
 * Callers:
 *     WmipOpenGuidObject @ 0x1409B27CC (WmipOpenGuidObject.c)
 * Callees:
 *     WmipHexStringToDword @ 0x1409B45CC (WmipHexStringToDword.c)
 */

__int64 __fastcall WmipUuidFromString(unsigned __int16 *a1, __int64 a2)
{
  char v4; // al
  int v5; // r8d
  int v6; // ecx
  unsigned __int16 *v7; // r10
  unsigned int i; // r11d
  int v9; // edx
  int v10; // ecx
  unsigned __int16 *v11; // r10
  int v12; // ecx
  unsigned int j; // r11d
  int v14; // edx
  int v15; // ecx
  unsigned __int16 *v16; // r11
  int v17; // ecx
  unsigned int k; // r10d
  int v19; // edx
  int v20; // ecx
  unsigned __int16 *v21; // r10
  int v22; // ecx
  unsigned int m; // r11d
  int v24; // edx
  int v25; // ecx
  unsigned __int16 *v26; // r11
  int v27; // ecx
  unsigned int n; // r10d
  int v29; // edx
  int v30; // ecx
  unsigned __int16 *v31; // r11
  int v32; // ecx
  unsigned int ii; // r10d
  int v34; // edx
  int v35; // ecx
  unsigned __int16 *v36; // r11
  int v37; // ecx
  unsigned int jj; // r10d
  int v39; // edx
  int v40; // ecx
  unsigned __int16 *v41; // r11
  int v42; // ecx
  unsigned int kk; // r10d
  int v44; // edx
  int v45; // ecx
  unsigned __int16 *v46; // r11
  int v47; // ecx
  unsigned int mm; // r10d
  int v49; // edx
  int v50; // ecx
  unsigned __int16 *v51; // r9
  unsigned int nn; // edx
  int v53; // ecx
  int v54; // r8d

  v4 = WmipHexStringToDword(a1, a2, 8LL, 45LL);
  v5 = 0;
  if ( !v4 )
    return 3221225485LL;
  v6 = 0;
  v7 = a1 + 9;
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    if ( i >= 4 )
      break;
    if ( (unsigned __int16)(v9 - 48) > 9u )
    {
      if ( (unsigned __int16)(v9 - 65) <= 5u )
      {
        v10 = 16 * v6 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v9 - 97) > 5u )
          return 3221225485LL;
        v10 = 16 * v6 - 87;
      }
    }
    else
    {
      v10 = 16 * v6 - 48;
    }
    v6 = v9 + v10;
    ++v7;
  }
  if ( (_WORD)v9 != 45 )
    return 3221225485LL;
  *(_WORD *)(a2 + 4) = v6;
  v11 = a1 + 14;
  v12 = 0;
  for ( j = 0; ; ++j )
  {
    v14 = *v11;
    if ( j >= 4 )
      break;
    if ( (unsigned __int16)(v14 - 48) > 9u )
    {
      if ( (unsigned __int16)(v14 - 65) <= 5u )
      {
        v15 = 16 * v12 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v14 - 97) > 5u )
          return 3221225485LL;
        v15 = 16 * v12 - 87;
      }
    }
    else
    {
      v15 = 16 * v12 - 48;
    }
    v12 = v14 + v15;
    ++v11;
  }
  if ( (_WORD)v14 != 45 )
    return 3221225485LL;
  *(_WORD *)(a2 + 6) = v12;
  v16 = a1 + 19;
  v17 = 0;
  for ( k = 0; k < 2; ++k )
  {
    v19 = *v16;
    if ( (unsigned __int16)(v19 - 48) > 9u )
    {
      if ( (unsigned __int16)(v19 - 65) <= 5u )
      {
        v20 = 16 * v17 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v19 - 97) > 5u )
          return 3221225485LL;
        v20 = 16 * v17 - 87;
      }
    }
    else
    {
      v20 = 16 * v17 - 48;
    }
    v17 = v19 + v20;
    ++v16;
  }
  *(_BYTE *)(a2 + 8) = v17;
  v21 = a1 + 21;
  v22 = 0;
  for ( m = 0; ; ++m )
  {
    v24 = *v21;
    if ( m >= 2 )
      break;
    if ( (unsigned __int16)(v24 - 48) > 9u )
    {
      if ( (unsigned __int16)(v24 - 65) <= 5u )
      {
        v25 = 16 * v22 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v24 - 97) > 5u )
          return 3221225485LL;
        v25 = 16 * v22 - 87;
      }
    }
    else
    {
      v25 = 16 * v22 - 48;
    }
    v22 = v24 + v25;
    ++v21;
  }
  if ( (_WORD)v24 != 45 )
    return 3221225485LL;
  *(_BYTE *)(a2 + 9) = v22;
  v26 = a1 + 24;
  v27 = 0;
  for ( n = 0; n < 2; ++n )
  {
    v29 = *v26;
    if ( (unsigned __int16)(v29 - 48) > 9u )
    {
      if ( (unsigned __int16)(v29 - 65) <= 5u )
      {
        v30 = 16 * v27 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v29 - 97) > 5u )
          return 3221225485LL;
        v30 = 16 * v27 - 87;
      }
    }
    else
    {
      v30 = 16 * v27 - 48;
    }
    v27 = v29 + v30;
    ++v26;
  }
  *(_BYTE *)(a2 + 10) = v27;
  v31 = a1 + 26;
  v32 = 0;
  for ( ii = 0; ii < 2; ++ii )
  {
    v34 = *v31;
    if ( (unsigned __int16)(v34 - 48) > 9u )
    {
      if ( (unsigned __int16)(v34 - 65) <= 5u )
      {
        v35 = 16 * v32 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v34 - 97) > 5u )
          return 3221225485LL;
        v35 = 16 * v32 - 87;
      }
    }
    else
    {
      v35 = 16 * v32 - 48;
    }
    v32 = v34 + v35;
    ++v31;
  }
  *(_BYTE *)(a2 + 11) = v32;
  v36 = a1 + 28;
  v37 = 0;
  for ( jj = 0; jj < 2; ++jj )
  {
    v39 = *v36;
    if ( (unsigned __int16)(v39 - 48) > 9u )
    {
      if ( (unsigned __int16)(v39 - 65) <= 5u )
      {
        v40 = 16 * v37 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v39 - 97) > 5u )
          return 3221225485LL;
        v40 = 16 * v37 - 87;
      }
    }
    else
    {
      v40 = 16 * v37 - 48;
    }
    v37 = v39 + v40;
    ++v36;
  }
  *(_BYTE *)(a2 + 12) = v37;
  v41 = a1 + 30;
  v42 = 0;
  for ( kk = 0; kk < 2; ++kk )
  {
    v44 = *v41;
    if ( (unsigned __int16)(v44 - 48) > 9u )
    {
      if ( (unsigned __int16)(v44 - 65) <= 5u )
      {
        v45 = 16 * v42 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v44 - 97) > 5u )
          return 3221225485LL;
        v45 = 16 * v42 - 87;
      }
    }
    else
    {
      v45 = 16 * v42 - 48;
    }
    v42 = v44 + v45;
    ++v41;
  }
  *(_BYTE *)(a2 + 13) = v42;
  v46 = a1 + 32;
  v47 = 0;
  for ( mm = 0; mm < 2; ++mm )
  {
    v49 = *v46;
    if ( (unsigned __int16)(v49 - 48) > 9u )
    {
      if ( (unsigned __int16)(v49 - 65) <= 5u )
      {
        v50 = 16 * v47 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v49 - 97) > 5u )
          return 3221225485LL;
        v50 = 16 * v47 - 87;
      }
    }
    else
    {
      v50 = 16 * v47 - 48;
    }
    v47 = v49 + v50;
    ++v46;
  }
  *(_BYTE *)(a2 + 14) = v47;
  v51 = a1 + 34;
  for ( nn = 0; nn < 2; ++nn )
  {
    v53 = *v51;
    if ( (unsigned __int16)(v53 - 48) > 9u )
    {
      if ( (unsigned __int16)(v53 - 65) <= 5u )
      {
        v54 = 16 * v5 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v53 - 97) > 5u )
          return 3221225485LL;
        v54 = 16 * v5 - 87;
      }
    }
    else
    {
      v54 = 16 * v5 - 48;
    }
    v5 = v53 + v54;
    ++v51;
  }
  *(_BYTE *)(a2 + 15) = v5;
  return 0LL;
}
