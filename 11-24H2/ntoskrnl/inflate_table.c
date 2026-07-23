/*
 * XREFs of inflate_table @ 0x1405FF9D4
 * Callers:
 *     inflate @ 0x1405F15F0 (inflate.c)
 * Callees:
 *     __report_rangecheckfailure @ 0x1404F2ABC (__report_rangecheckfailure.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall inflate_table(
        int a1,
        unsigned __int16 *a2,
        unsigned int a3,
        _QWORD *a4,
        unsigned int *a5,
        __int64 *a6)
{
  unsigned __int64 v6; // r14
  _DWORD **v7; // rsi
  unsigned int i; // r9d
  __int64 v12; // rdi
  unsigned __int16 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  unsigned int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v19; // r10d
  _WORD *v20; // rax
  unsigned int v21; // r13d
  int v22; // edx
  unsigned int j; // r9d
  __int64 v24; // rdx
  __int64 v25; // r9
  unsigned int v26; // r9d
  unsigned __int16 *v27; // rdx
  __int64 v28; // rax
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
  int v49; // [rsp+30h] [rbp-79h]
  _DWORD *v50; // [rsp+38h] [rbp-71h]
  int v51; // [rsp+40h] [rbp-69h]
  unsigned int v52; // [rsp+44h] [rbp-65h]
  unsigned __int64 v53; // [rsp+48h] [rbp-61h]
  __int64 *v54; // [rsp+50h] [rbp-59h]
  _WORD v58[16]; // [rsp+7Ah] [rbp-2Fh] BYREF
  _WORD v59[15]; // [rsp+9Ah] [rbp-Fh]

  v6 = (unsigned __int64)a6;
  v7 = (_DWORD **)a4;
  for ( i = 0; i <= 0xF; ++i )
  {
    if ( 2 * (unsigned __int64)i >= 0x20 )
      _report_rangecheckfailure();
    v58[i - 1] = 0;
  }
  v12 = 2LL;
  if ( a3 )
  {
    v13 = a2;
    v14 = a3;
    do
    {
      v15 = *v13++;
      ++v58[v15 - 1];
      --v14;
    }
    while ( v14 );
  }
  v49 = -1;
  v16 = 15;
  do
  {
    if ( v58[v16 - 1] )
      break;
    --v16;
  }
  while ( v16 );
  v17 = v16;
  if ( *a5 <= v16 )
    v17 = *a5;
  if ( !v16 )
  {
    do
    {
      *(*v7)++ = 320;
      --v12;
    }
    while ( v12 );
    *a5 = 1;
    return 0LL;
  }
  v19 = 1;
  if ( v16 > 1 )
  {
    v20 = v58;
    do
    {
      if ( *v20 )
        break;
      ++v19;
      ++v20;
    }
    while ( v19 < v16 );
  }
  v21 = v19;
  v22 = 1;
  if ( v17 >= v19 )
    v21 = v17;
  for ( j = 1; j <= 0xF; ++j )
  {
    v22 = 2 * v22 - (unsigned __int16)v58[j - 1];
    if ( v22 < 0 )
      return 0xFFFFFFFFLL;
  }
  if ( v22 && (!a1 || v16 != 1) )
    return 0xFFFFFFFFLL;
  v59[0] = 0;
  v24 = 0LL;
  v25 = 14LL;
  do
  {
    v59[v24 + 1] = v59[v24] + v58[v24];
    ++v24;
    --v25;
  }
  while ( v25 );
  v26 = 0;
  if ( a3 )
  {
    v27 = a2;
    do
    {
      v28 = *v27;
      if ( (_WORD)v28 )
      {
        *((_WORD *)a6 + (unsigned __int16)v58[v28 + 15]) = v26;
        ++v58[*v27 + 15];
      }
      ++v26;
      ++v27;
    }
    while ( v26 < a3 );
    v7 = (_DWORD **)a4;
  }
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v29 = 257;
      v54 = qword_1400356C0;
      v6 = (unsigned __int64)qword_140035700;
    }
    else
    {
      v29 = 0;
      v54 = qword_140035680;
      v6 = (unsigned __int64)qword_140035640;
    }
  }
  else
  {
    v54 = a6;
    v29 = 20;
  }
  v50 = *v7;
  v30 = 0;
  v53 = v6;
  LOBYTE(v31) = 0;
  v46 = 0;
  LODWORD(v6) = 0;
  v47 = 0;
  v32 = v21;
  v33 = 1 << v21;
  v51 = (1 << v21) - 1;
  if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
    return 1LL;
  while ( 1 )
  {
    BYTE1(v45) = v19 - v31;
    v34 = *((unsigned __int16 *)a6 + (unsigned int)v6);
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
        HIWORD(v45) = *((_WORD *)v54 + v35);
      }
    }
    else
    {
      LOBYTE(v45) = 0;
      HIWORD(v45) = *((_WORD *)a6 + (unsigned int)v6);
    }
    v36 = 1 << (v19 - v31);
    v37 = 1 << v32;
    LODWORD(v38) = (1 << v32) + (v30 >> v46);
    v52 = 1 << v32;
    do
    {
      v38 = (unsigned int)(v38 - v36);
      v50[v38] = v45;
      v37 -= v36;
    }
    while ( v37 );
    v39 = a4;
    for ( k = 1 << (v19 - 1); (k & v30) != 0; k >>= 1 )
      ;
    if ( k )
      v30 = k + ((k - 1) & v30);
    else
      v30 = 0;
    v6 = (unsigned int)++v47;
    if ( v58[v19 - 1]-- != 1 )
      goto LABEL_67;
    if ( v19 == v16 )
      break;
    v19 = a2[*((unsigned __int16 *)a6 + v6)];
LABEL_67:
    v31 = v46;
    if ( v19 > v21 )
    {
      v6 = v30 & v51;
      if ( (_DWORD)v6 == v49 )
      {
        LODWORD(v6) = v47;
      }
      else
      {
        if ( !v46 )
          v31 = v21;
        v32 = v19 - v31;
        v46 = v31;
        v50 += v52;
        v42 = 1 << (v19 - v31);
        if ( v19 < v16 )
        {
          v43 = v19;
          do
          {
            v44 = v42 - (unsigned __int16)v58[v43 - 1];
            if ( v44 <= 0 )
              break;
            ++v32;
            ++v43;
            v42 = 2 * v44;
          }
          while ( v43 < v16 );
          v39 = a4;
        }
        v33 += 1 << v32;
        if ( a1 == 1 && v33 > 0x534 || a1 == 2 && v33 > 0x250 )
          return 1LL;
        LOBYTE(v31) = v46;
        v49 = v30 & v51;
        *(_BYTE *)(*v39 + 4 * v6) = v32;
        *(_BYTE *)(*v39 + 4 * v6 + 1) = v21;
        *(_WORD *)(*v39 + 4 * v6 + 2) = ((__int64)v50 - *v39) >> 2;
        LODWORD(v6) = v47;
      }
    }
  }
  if ( v30 )
  {
    LOBYTE(v45) = 64;
    v50[v30] = (unsigned __int16)v45;
  }
  *a4 += 4LL * v33;
  *a5 = v21;
  return 0LL;
}
