/*
 * XREFs of RaspInitializeCompositeGlyphData @ 0x14069C530
 * Callers:
 *     RaspLoadCompositeGlyphData @ 0x14069CA14 (RaspLoadCompositeGlyphData.c)
 * Callees:
 *     FioFwReadBytesAtOffset @ 0x14045DF18 (FioFwReadBytesAtOffset.c)
 *     RaspAllocateMemory @ 0x14045EBE4 (RaspAllocateMemory.c)
 *     RaspFreeMemory @ 0x14045EC60 (RaspFreeMemory.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RaspInitializeCompositeGlyphData(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        unsigned __int16 a4,
        __int16 a5,
        unsigned __int16 a6,
        unsigned int a7,
        _WORD *a8,
        _QWORD *a9,
        __int64 *a10)
{
  __int64 *v10; // r12
  __int64 v11; // rsi
  int v12; // ebp
  unsigned __int64 v13; // r15
  char *Memory; // rax
  char *v15; // rbx
  _DWORD *v17; // rcx
  __int64 v18; // r8
  char *v19; // r15
  __int16 *v20; // rdx
  int v21; // eax
  int v22; // eax
  _DWORD *v23; // rdx
  char *v24; // rbx
  char *v25; // r14
  _WORD *v26; // r13
  char *v27; // rsi
  __int16 v28; // r9
  __int16 *v29; // rdi
  __int64 v30; // rbx
  __int64 v31; // rax
  unsigned __int16 *v32; // rbp
  unsigned __int16 v33; // r8
  __int64 v34; // rdx
  size_t v35; // r8
  __int64 v36; // r9
  __int16 v37; // cx
  __int16 v38; // dx
  __int16 v39; // ax
  unsigned __int16 v40; // r8
  __int16 v41; // r15
  __int16 v42; // r12
  __int64 v43; // r9
  __int64 v44; // r10
  __int64 v45; // rax
  __int16 v46; // cx
  __int16 v47; // ax
  _WORD *v48; // [rsp+20h] [rbp-68h]
  _DWORD *v49; // [rsp+28h] [rbp-60h]
  char *v50; // [rsp+38h] [rbp-50h]
  __int16 v54; // [rsp+A8h] [rbp+20h]
  __int16 v55; // [rsp+B0h] [rbp+28h]
  __int16 v56; // [rsp+B8h] [rbp+30h]

  v10 = a2;
  v11 = a4;
  v12 = a4;
  v13 = a4 + a6 + 8 * (unsigned int)a4 + 2 * (a5 + 41);
  Memory = (char *)RaspAllocateMemory(v13, a10);
  v15 = Memory;
  if ( !Memory )
    return 3221225626LL;
  memset_0(Memory, 0, v13);
  v17 = v15 + 2;
  v18 = 4LL;
  v50 = v15;
  v19 = v15;
  *(_WORD *)v15 = a5;
  v20 = (__int16 *)(a3 + 2);
  do
  {
    v21 = *v20++;
    *v17++ = v21;
    --v18;
  }
  while ( v18 );
  v22 = *(_DWORD *)(v15 + 2);
  v23 = v15 + 18;
  *((_WORD *)v15 + 11) = a6;
  *((_WORD *)v15 + 12) = v11;
  v24 = v15 + 66;
  v49 = v23;
  *v23 = v22;
  *(_QWORD *)(v19 + 26) = v24;
  v25 = &v24[2 * a5];
  if ( a6 )
  {
    *(_QWORD *)(v19 + 34) = v25;
    v25 += a6;
    FioFwReadBytesAtOffset(a1, a7, a6, &v24[2 * a5]);
    v23 = v49;
  }
  v26 = *(_WORD **)(v19 + 26);
  v27 = &v25[v11];
  *(_QWORD *)(v19 + 42) = v25;
  *(_QWORD *)(v19 + 50) = v27;
  v28 = 0;
  v56 = 0;
  v55 = 0;
  v29 = (__int16 *)&v27[4 * (v12 + 2)];
  v48 = v26;
  *(_QWORD *)(v19 + 58) = v29;
  while ( 1 )
  {
    v30 = *v10;
    if ( (__int64 *)*v10 == v10 )
      break;
    if ( *(__int64 **)(v30 + 8) != v10 || (v31 = *(_QWORD *)v30, *(_QWORD *)(*(_QWORD *)v30 + 8LL) != v30) )
      __fastfail(3u);
    *v10 = v31;
    *(_QWORD *)(v31 + 8) = v10;
    v32 = *(unsigned __int16 **)(v30 + 16);
    if ( _bittest16((const signed __int16 *)(v30 + 24), 9u) )
    {
      *a8 = *(_WORD *)(v30 + 26);
      *v23 = *(_DWORD *)(v32 + 1);
    }
    v33 = 0;
    if ( (__int16)*v32 > 0 )
    {
      do
      {
        v34 = v33++;
        *v26++ = *(_WORD *)(*(_QWORD *)(v32 + 13) + 2 * v34) + v28;
      }
      while ( v33 < (__int16)*v32 );
      v48 = v26;
    }
    v35 = v32[12];
    v54 = v35 + v28;
    memmove(v25, *(const void **)(v32 + 21), v35);
    v36 = v32[12];
    v37 = 0x4000;
    v38 = *(_WORD *)(v30 + 24);
    v25 += v36;
    v39 = 0x4000;
    if ( (v38 & 8) != 0 )
    {
      v39 = *(_WORD *)(v30 + 32);
      v37 = v39;
    }
    else if ( (v38 & 0x40) != 0 )
    {
      v39 = *(_WORD *)(v30 + 32);
      v37 = *(_WORD *)(v30 + 34);
    }
    v40 = 0;
    if ( (_WORD)v36 )
    {
      v41 = v56;
      v42 = v55;
      v43 = v39;
      v44 = v37;
      do
      {
        *(_WORD *)v27 = *(_WORD *)(*(_QWORD *)(v32 + 25) + 4LL * v40);
        *v29 = *(_WORD *)(*(_QWORD *)(v32 + 29) + 4LL * v40);
        *(_WORD *)v27 = v43 * *(__int16 *)v27 / 0x4000;
        v45 = v44 * *v29 / 0x4000;
        *v29 = v45;
        if ( !v40 )
        {
          *(_WORD *)v27 -= v41;
          *v29 -= v42;
          v46 = *(_WORD *)(v30 + 24);
          LOWORD(v45) = *v29;
          if ( (v46 & 2) != 0 )
          {
            if ( (v46 & 1) != 0 )
            {
              *(_WORD *)v27 += *(_WORD *)(v30 + 28);
              v47 = *(_WORD *)(v30 + 30);
            }
            else
            {
              *(_WORD *)v27 += *(char *)(v30 + 28);
              v47 = *(char *)(v30 + 29);
            }
            *v29 += v47;
            LOWORD(v45) = *v29;
          }
        }
        v41 += *(_WORD *)v27;
        v42 += v45;
        v27 += 4;
        v29 += 2;
        ++v40;
      }
      while ( v40 < v32[12] );
      v26 = v48;
      v55 = v42;
      v10 = a2;
      v56 = v41;
      v19 = v50;
    }
    RaspFreeMemory((__int64)v32, a10);
    RaspFreeMemory(v30, a10);
    v28 = v54;
    v23 = v49;
  }
  *a9 = v19;
  return 0LL;
}
