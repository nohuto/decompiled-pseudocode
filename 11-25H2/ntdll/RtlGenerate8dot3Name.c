/*
 * XREFs of RtlGenerate8dot3Name @ 0x180146940
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 *     GetNextWchar @ 0x1801467F4 (GetNextWchar.c)
 *     RtlComputeLfnChecksum @ 0x1801468D8 (RtlComputeLfnChecksum.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 *     memmove @ 0x180168980 (memmove.c)
 */

__int64 __fastcall RtlGenerate8dot3Name(unsigned __int16 *a1, char a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  bool v8; // cl
  __int64 v9; // r8
  unsigned int v10; // r14d
  char v11; // r8
  __int16 i; // ax
  int v13; // eax
  unsigned int v14; // esi
  int v15; // eax
  unsigned __int16 NextWchar; // cx
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // r10
  unsigned int j; // r8d
  __int16 v20; // dx
  __int64 v21; // rax
  __int16 v22; // dx
  unsigned int v23; // esi
  unsigned __int16 v24; // cx
  int v25; // eax
  unsigned int v26; // r9d
  unsigned __int16 v27; // ax
  int v28; // r10d
  unsigned __int16 v29; // r11
  __int64 v30; // r8
  _WORD *v31; // r9
  __int16 v32; // ax
  unsigned __int16 v33; // cx
  unsigned int v34; // esi
  char v35; // r13
  __int64 v36; // rax
  char v37; // cl
  __int16 v38; // r8
  __int64 v39; // r12
  unsigned __int8 v40; // al
  _WORD *v41; // r15
  unsigned __int16 v42; // cx
  unsigned __int16 v43; // cx
  int v44; // eax
  char v45; // al
  unsigned int v46; // ecx
  unsigned int v47; // edx
  int v48; // eax
  signed __int32 v50[8]; // [rsp+0h] [rbp-60h] BYREF
  char v51; // [rsp+20h] [rbp-40h]
  unsigned int v52; // [rsp+24h] [rbp-3Ch] BYREF
  __int64 v53; // [rsp+28h] [rbp-38h]
  unsigned int v54; // [rsp+30h] [rbp-30h] BYREF
  __int64 v55; // [rsp+38h] [rbp-28h]
  _WORD v56[8]; // [rsp+40h] [rbp-20h] BYREF

  v4 = 0;
  v55 = a4;
  v53 = 0LL;
  if ( !RtlpIsUtf8Process() )
  {
    _InterlockedOr(v50, 0);
    v8 = word_1801CEFDC != 0;
    v53 = qword_1801CEFF8;
  }
  if ( !a2 || (v51 = 1, !v8) )
    v51 = 0;
  if ( !*(_BYTE *)(v9 + 3) )
  {
    v52 = 0;
    v10 = -1;
    if ( !*a1 || (v11 = 1, **((_WORD **)a1 + 1) != 46) )
      v11 = 0;
    for ( i = GetNextWchar(a1, &v52, v11, a2); i; i = GetNextWchar(a1, &v52, 0, a2) )
    {
      if ( i == 46 )
        v10 = v52;
    }
    v13 = *a1 >> 1;
    v52 = 0;
    *(_BYTE *)(a3 + 3) = 0;
    if ( v10 == v13 )
      v10 = -1;
    v14 = 0;
    v54 = v10;
    while ( 1 )
    {
      NextWchar = GetNextWchar(a1, &v52, 1, a2);
      if ( !NextWchar || v52 >= v10 || *(_BYTE *)(a3 + 3) >= 6u )
        break;
      if ( v51 )
      {
        if ( NextWchar <= 0x7Fu || (v15 = 2, !*(_BYTE *)(v53 + 2LL * NextWchar + 1)) )
          v15 = 1;
        v14 += v15;
        if ( v14 > 6 )
          goto LABEL_28;
      }
      *(_WORD *)(a3 + 2LL * (unsigned __int8)(*(_BYTE *)(a3 + 3))++ + 4) = NextWchar;
    }
    if ( !v51 )
      v14 = *(unsigned __int8 *)(a3 + 3);
LABEL_28:
    if ( v14 <= 2 )
    {
      v17 = RtlComputeLfnChecksum(a1);
      *(_WORD *)a3 = v17;
      v18 = v17;
      for ( j = 0; j < 4; ++j )
      {
        v20 = 48;
        if ( (v18 & 0xFu) > 9 )
          v20 = 55;
        v21 = j + *(unsigned __int8 *)(a3 + 3);
        v22 = (v18 & 0xF) + v20;
        v18 >>= 4;
        *(_WORD *)(a3 + 2 * v21 + 4) = v22;
      }
      *(_BYTE *)(a3 + 3) += 4;
      *(_BYTE *)(a3 + 2) = 1;
    }
    if ( v10 == -1 )
    {
      *(_DWORD *)(a3 + 20) = 0;
    }
    else
    {
      v23 = 1;
      *(_WORD *)(a3 + 24) = 46;
      *(_DWORD *)(a3 + 20) = 1;
      v24 = GetNextWchar(a1, &v54, 1, a2);
      if ( v24 )
      {
        while ( *(_DWORD *)(a3 + 20) < 4u )
        {
          if ( !v51 )
            goto LABEL_81;
          if ( v24 <= 0x7Fu || (v25 = 2, !*(_BYTE *)(v53 + 2LL * v24 + 1)) )
            v25 = 1;
          v23 += v25;
          if ( v23 <= 4 )
          {
LABEL_81:
            *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20))++ + 24) = v24;
            v24 = GetNextWchar(a1, &v54, 1, a2);
            if ( v24 )
              continue;
          }
          if ( !v24 )
            goto LABEL_45;
          break;
        }
        *(_WORD *)(a3 + 2LL * (unsigned int)(*(_DWORD *)(a3 + 20) - 1) + 24) = 126;
      }
    }
  }
LABEL_45:
  v26 = *(_DWORD *)(a3 + 32) + 1;
  *(_DWORD *)(a3 + 32) = v26;
  if ( v26 > 4 && !*(_BYTE *)(a3 + 2) )
  {
    v27 = RtlComputeLfnChecksum(a1);
    *(_WORD *)a3 = v27;
    v29 = v27;
    if ( 2 - v28 < (unsigned int)(6 - v28) )
    {
      v30 = 4LL;
      v31 = (_WORD *)(a3 + 2 * ((unsigned int)(2 - v28) + 2LL));
      do
      {
        v32 = 48;
        v33 = v29 & 0xF;
        if ( v33 > 9u )
          v32 = 55;
        v29 >>= 4;
        *v31++ = v33 + v32;
        --v30;
      }
      while ( v30 );
    }
    *(_DWORD *)(a3 + 32) = 1;
    *(_BYTE *)(a3 + 3) = 6 - v28;
    v26 = 1;
    *(_BYTE *)(a3 + 2) = 1;
  }
  v34 = 1;
  v35 = 1;
  do
  {
    if ( !v26 )
      break;
    v36 = 8 - v34++;
    v37 = 0;
    v38 = v26 % 0xA + 48;
    v26 /= 0xAu;
    v56[v36] = v38;
    if ( v38 == 57 )
      v37 = v35;
    v35 = v37;
  }
  while ( v34 <= 7 );
  v39 = v55;
  v40 = *(_BYTE *)(a3 + 3) - 1;
  v41 = &v56[8 - v34];
  *v41 = 126;
  if ( v40 > 0xBu )
  {
    v42 = 0;
  }
  else
  {
    memmove(*(void **)(v39 + 8), (const void *)(a3 + 4), 2LL * *(unsigned __int8 *)(a3 + 3));
    v42 = 2 * *(unsigned __int8 *)(a3 + 3);
  }
  *(_WORD *)v39 = v42;
  memmove((void *)(*(_QWORD *)(v39 + 8) + 2 * ((unsigned __int64)v42 >> 1)), v41, 2 * v34);
  v43 = *(_WORD *)v39 + 2 * v34;
  *(_WORD *)v39 = v43;
  v44 = *(_DWORD *)(a3 + 20);
  if ( v44 )
  {
    memmove(
      (void *)(*(_QWORD *)(v39 + 8) + 2 * ((unsigned __int64)v43 >> 1)),
      (const void *)(a3 + 24),
      (unsigned int)(2 * v44));
    *(_WORD *)v39 += 2 * *(_WORD *)(a3 + 20);
  }
  if ( !v35 )
    return 0LL;
  v45 = *(_BYTE *)(a3 + 3);
  if ( v51 )
  {
    v46 = 0;
    v47 = 0;
    if ( v45 )
    {
      do
      {
        if ( *(_WORD *)(a3 + 2LL * v46 + 4) <= 0x7Fu
          || (v48 = 2, !*(_BYTE *)(v53 + 2LL * *(unsigned __int16 *)(a3 + 2LL * v46 + 4) + 1)) )
        {
          v48 = 1;
        }
        v47 += v48;
        if ( v47 > 7 - v34 )
          break;
        ++v46;
      }
      while ( v46 < *(unsigned __int8 *)(a3 + 3) );
    }
  }
  else
  {
    LOBYTE(v46) = v45 - 1;
  }
  *(_BYTE *)(a3 + 3) = v46;
  if ( !(_BYTE)v46 )
    return (unsigned int)-1073740761;
  return v4;
}
