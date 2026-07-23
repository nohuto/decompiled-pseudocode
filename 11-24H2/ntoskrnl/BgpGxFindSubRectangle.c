/*
 * XREFs of BgpGxFindSubRectangle @ 0x140BB6168
 * Callers:
 *     AnFwDisplayFade @ 0x140BB56EC (AnFwDisplayFade.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     BgpGxRectangleCreate @ 0x140BB5E78 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxFindSubRectangle(unsigned int *a1, int a2, __int64 *a3, unsigned int *a4, _BYTE *a5)
{
  unsigned int *v5; // r13
  __int64 *v6; // r11
  unsigned int *v7; // r14
  unsigned int v8; // ebp
  unsigned int v9; // r9d
  unsigned int v10; // r10d
  unsigned int v11; // esi
  __int64 v12; // rcx
  unsigned int v13; // edi
  unsigned int v14; // ebx
  unsigned int v15; // r12d
  unsigned int v16; // r15d
  unsigned int v17; // r11d
  __int64 result; // rax
  unsigned int v19; // r8d
  unsigned int i; // edx
  int v21; // edi
  __int64 v22; // rsi
  unsigned int v23; // edx
  size_t v24; // rdi
  char *v25; // rbp
  char *v26; // rbx
  __int64 v27; // r14
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // r8d
  __int64 v33; // rax
  unsigned int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // eax
  unsigned int v37; // eax
  char v38; // [rsp+20h] [rbp-68h]
  int v39; // [rsp+28h] [rbp-60h] BYREF
  __int64 v40; // [rsp+2Ch] [rbp-5Ch]

  v40 = 0LL;
  v5 = a4;
  v6 = a3;
  v7 = a1;
  if ( !a4 )
    return 3221225485LL;
  if ( !a1 )
    return 3221225485LL;
  v8 = a1[2];
  if ( ((v8 - 24) & 0xFFFFFFF7) != 0 )
    return 3221225485LL;
  v9 = *a1;
  v10 = a1[1];
  v11 = 0;
  v12 = *((_QWORD *)a1 + 3);
  v13 = 0;
  v14 = v8 >> 3;
  v15 = v9;
  v38 = 0;
  v16 = v10;
  if ( a2 == -16777216 && v14 == 4 )
  {
    v19 = 0;
    if ( v9 )
    {
      do
      {
        for ( i = 0; i < v10; ++i )
        {
          if ( *(_DWORD *)v12 )
          {
            v38 = 1;
            v28 = i;
            if ( i >= v16 )
              v28 = v16;
            v16 = v28;
            v29 = i;
            if ( i <= v13 )
              v29 = v13;
            v13 = v29;
            v30 = v19;
            if ( v19 >= v15 )
              v30 = v15;
            v15 = v30;
            v31 = v19;
            if ( v19 <= v11 )
              v31 = v11;
            v11 = v31;
          }
          v12 += 4LL;
        }
        ++v19;
      }
      while ( v19 < v9 );
      goto LABEL_16;
    }
LABEL_6:
    *a5 = 1;
    *a3 = 0LL;
    return 0LL;
  }
  v17 = 0;
  if ( !v9 )
    goto LABEL_6;
  do
  {
    v32 = 0;
    if ( v10 )
    {
      v33 = v14;
      do
      {
        if ( *(_BYTE *)(v12 + 2) != BYTE2(a2) || *(_WORD *)v12 != (_WORD)a2 )
        {
          v38 = 1;
          v34 = v32;
          if ( v32 >= v16 )
            v34 = v16;
          v16 = v34;
          v35 = v32;
          if ( v32 <= v13 )
            v35 = v13;
          v13 = v35;
          v36 = v17;
          if ( v17 >= v15 )
            v36 = v15;
          v15 = v36;
          v37 = v17;
          if ( v17 <= v11 )
            v37 = v11;
          v11 = v37;
          v33 = v14;
        }
        v12 += v33;
        ++v32;
      }
      while ( v32 < v10 );
    }
    ++v17;
  }
  while ( v17 < v9 );
  v7 = a1;
  v5 = a4;
  v6 = a3;
LABEL_16:
  if ( !v38 )
    goto LABEL_6;
  v21 = v13 - v16 + 1;
  v22 = v11 - v15 + 1;
  v39 = v21;
  LODWORD(v40) = v22;
  if ( !v15 && !v16 && v21 == v10 && (_DWORD)v22 == v9 )
    return 3221226021LL;
  result = BgpGxRectangleCreate(&v39, v8, v6);
  if ( (int)result >= 0 )
  {
    v23 = v7[1] * v14;
    v24 = v14 * v21;
    v25 = *(char **)(*a3 + 24);
    v26 = (char *)(*((_QWORD *)v7 + 3) + v23 * v15 + v16 * v14);
    if ( (_DWORD)v22 )
    {
      v27 = v23;
      do
      {
        memmove(v25, v26, v24);
        v25 += v24;
        v26 += v27;
        --v22;
      }
      while ( v22 );
    }
    *v5 = v16;
    v5[1] = v15;
    *a5 = 0;
    return 0LL;
  }
  return result;
}
