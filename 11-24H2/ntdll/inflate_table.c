/*
 * XREFs of inflate_table @ 0x1801539E4
 * Callers:
 *     inflate @ 0x18014FA34 (inflate.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x18011EC5C (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall inflate_table(
        int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _DWORD **a4,
        unsigned int *a5,
        _WORD *a6)
{
  __int64 v6; // r14
  unsigned int *v8; // rdx
  unsigned int i; // r9d
  __int64 v13; // rdi
  unsigned __int16 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // r8d
  unsigned int v18; // ecx
  unsigned int v20; // r10d
  _WORD *v21; // rax
  unsigned int v22; // r13d
  int v23; // edx
  unsigned int j; // r9d
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned int v27; // r9d
  unsigned __int16 *v28; // rdx
  unsigned int v29; // r15d
  unsigned int v30; // r9d
  unsigned int v31; // edx
  char v32; // r12
  unsigned int v33; // r11d
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  int v36; // r14d
  int v37; // edx
  __int64 v38; // rbx
  _QWORD *v39; // rsi
  unsigned int k; // edx
  int v42; // edx
  unsigned int v43; // ebx
  int v44; // edx
  int v45; // [rsp+20h] [rbp-89h]
  unsigned int v46; // [rsp+24h] [rbp-85h]
  int v47; // [rsp+28h] [rbp-81h]
  int v48; // [rsp+2Ch] [rbp-7Dh]
  _DWORD *v49; // [rsp+30h] [rbp-79h]
  int v50; // [rsp+38h] [rbp-71h]
  unsigned int v51; // [rsp+3Ch] [rbp-6Dh]
  __int64 v53; // [rsp+48h] [rbp-61h]
  _WORD *v54; // [rsp+50h] [rbp-59h]
  _WORD v58[16]; // [rsp+7Ah] [rbp-2Fh] BYREF
  _WORD v59[15]; // [rsp+9Ah] [rbp-Fh]

  v6 = (__int64)a6;
  v8 = a5;
  for ( i = 0; i <= 0xF; ++i )
  {
    if ( 2 * (unsigned __int64)i >= 0x20 )
      _report_rangecheckfailure();
    v58[i - 1] = 0;
  }
  v13 = 2LL;
  if ( a3 )
  {
    v14 = a2;
    v15 = a3;
    do
    {
      v16 = *v14++;
      ++v58[v16 - 1];
      --v15;
    }
    while ( v15 );
    v8 = a5;
  }
  v17 = 15;
  v48 = -1;
  do
  {
    if ( v58[v17 - 1] )
      break;
    --v17;
  }
  while ( v17 );
  v18 = v17;
  if ( *v8 <= v17 )
    v18 = *v8;
  if ( !v17 )
  {
    do
    {
      *(*a4)++ = 320;
      --v13;
    }
    while ( v13 );
    *v8 = 1;
    return 0LL;
  }
  v20 = 1;
  if ( v17 > 1 )
  {
    v21 = v58;
    do
    {
      if ( *v21 )
        break;
      ++v20;
      ++v21;
    }
    while ( v20 < v17 );
  }
  v22 = v20;
  v23 = 1;
  if ( v18 >= v20 )
    v22 = v18;
  for ( j = 1; j <= 0xF; ++j )
  {
    v23 = 2 * v23 - (unsigned __int16)v58[j - 1];
    if ( v23 < 0 )
      return 0xFFFFFFFFLL;
  }
  if ( v23 && (!a1 || v17 != 1) )
    return 0xFFFFFFFFLL;
  v25 = 14LL;
  v59[0] = 0;
  v26 = 0LL;
  do
  {
    v59[v26 + 1] = v59[v26] + v58[v26];
    ++v26;
    --v25;
  }
  while ( v25 );
  v27 = 0;
  if ( a3 )
  {
    v28 = a2;
    do
    {
      if ( *v28 )
        a6[(unsigned __int16)v58[*v28 + 15]++] = v27;
      ++v27;
      ++v28;
    }
    while ( v27 < a3 );
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v29 = 257;
      v54 = &unk_1801989D0;
      v6 = (__int64)&unk_180198A50;
    }
    else
    {
      v29 = 0;
      v54 = &unk_180198A10;
      v6 = (__int64)&unk_180198990;
    }
  }
  else
  {
    v54 = a6;
    v29 = 20;
  }
  v49 = *a4;
  v30 = 0;
  v53 = v6;
  LOBYTE(v31) = 0;
  v46 = 0;
  LODWORD(v6) = 0;
  v47 = 0;
  v32 = v22;
  v33 = 1 << v22;
  v50 = (1 << v22) - 1;
  if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
    return 1LL;
  while ( 1 )
  {
    BYTE1(v45) = v20 - v31;
    v34 = (unsigned __int16)a6[(unsigned int)v6];
    if ( v34 + 1 >= v29 )
    {
      if ( v34 < v29 )
      {
        LOBYTE(v45) = 96;
        HIWORD(v45) = 0;
      }
      else
      {
        v35 = v34 - v29;
        LOBYTE(v45) = *(_BYTE *)(v53 + 2LL * v35);
        HIWORD(v45) = v54[v35];
      }
    }
    else
    {
      LOBYTE(v45) = 0;
      HIWORD(v45) = a6[(unsigned int)v6];
    }
    v36 = 1 << (v20 - v31);
    v37 = 1 << v32;
    LODWORD(v38) = (1 << v32) + (v30 >> v46);
    v51 = 1 << v32;
    do
    {
      v38 = (unsigned int)(v38 - v36);
      v49[v38] = v45;
      v37 -= v36;
    }
    while ( v37 );
    v39 = a4;
    for ( k = 1 << (v20 - 1); (k & v30) != 0; k >>= 1 )
      ;
    if ( k )
      v30 = k + ((k - 1) & v30);
    else
      v30 = 0;
    v6 = (unsigned int)++v47;
    if ( v58[v20 - 1]-- != 1 )
      goto LABEL_67;
    if ( v20 == v17 )
      break;
    v20 = a2[(unsigned __int16)a6[v6]];
LABEL_67:
    v31 = v46;
    if ( v20 > v22 )
    {
      v6 = v30 & v50;
      if ( (_DWORD)v6 == v48 )
      {
        LODWORD(v6) = v47;
      }
      else
      {
        if ( !v46 )
          v31 = v22;
        v32 = v20 - v31;
        v46 = v31;
        v49 += v51;
        v42 = 1 << (v20 - v31);
        if ( v20 < v17 )
        {
          v43 = v20;
          do
          {
            v44 = v42 - (unsigned __int16)v58[v43 - 1];
            if ( v44 <= 0 )
              break;
            ++v32;
            ++v43;
            v42 = 2 * v44;
          }
          while ( v43 < v17 );
          v39 = a4;
        }
        v33 += 1 << v32;
        if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
          return 1LL;
        LOBYTE(v31) = v46;
        v48 = v30 & v50;
        *(_BYTE *)(*v39 + 4 * v6) = v32;
        *(_BYTE *)(*v39 + 4 * v6 + 1) = v22;
        *(_WORD *)(*v39 + 4 * v6 + 2) = ((__int64)v49 - *v39) >> 2;
        LODWORD(v6) = v47;
      }
    }
  }
  if ( v30 )
  {
    LOBYTE(v45) = 64;
    v49[v30] = (unsigned __int16)v45;
  }
  *a4 += v33;
  *a5 = v22;
  return 0LL;
}
