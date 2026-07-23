/*
 * XREFs of CreateNewEventEntry @ 0x140462434
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140274A04 (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferAllocate @ 0x1404626A4 (CBufferAllocate.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

__int64 __fastcall CreateNewEventEntry(
        __int64 a1,
        __int128 *a2,
        unsigned __int8 a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        _QWORD *a7)
{
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r10
  __int64 v10; // r8
  char v11; // r11
  unsigned int *v12; // rdx
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rbx
  __int64 v16; // r14
  char *v17; // r12
  unsigned __int8 v18; // bp
  unsigned int v19; // ecx
  size_t v20; // r8
  void *v21; // rax
  const void *v22; // rdx
  char *v23; // rdi
  __int128 v24; // xmm0
  unsigned __int8 v25; // si
  const void **v26; // r14
  __int64 v27; // r15
  size_t v28; // r8
  void *v29; // rsi
  char *v30; // rdx
  int v31; // eax
  __int128 v33; // [rsp+20h] [rbp-48h] BYREF

  v7 = a4;
  v8 = a3;
  v9 = 0LL;
  v10 = 0LL;
  LOBYTE(a4) = 0;
  v11 = a1;
  *a7 = 0LL;
  v33 = 0LL;
  if ( (_BYTE)v8 )
  {
    v12 = (unsigned int *)(v7 + 8);
    do
    {
      a1 = *v12;
      v12 += 4;
      if ( (unsigned __int8)a4 >= 2u )
        v9 += a1;
      v13 = a1 + v10;
      if ( (unsigned __int8)a4 >= 2u )
        v13 = v10;
      LOBYTE(a4) = a4 + 1;
      v10 = v13;
    }
    while ( (unsigned __int8)a4 < (unsigned __int8)v8 );
    if ( (unsigned __int64)(v9 + v13) > 0xFFFF )
      return 3221225621LL;
  }
  v14 = 16 * v8;
  LOBYTE(a1) = v11;
  if ( !(unsigned int)CBufferAllocate(a1, &v33, v9 + 16 * v8 + 46, a4) )
    return 3221225495LL;
  v15 = *((_QWORD *)&v33 + 1);
  if ( v14 && *((_QWORD *)&v33 + 1) >= v14 )
  {
    v16 = v33;
    v15 = *((_QWORD *)&v33 + 1) - v14;
    v17 = (char *)(v33 + v14);
  }
  else
  {
    v17 = (char *)v33;
    v16 = 0LL;
  }
  v18 = 0;
  if ( a5 != -2 )
  {
    v19 = a5 + 2;
    do
    {
      if ( v18 < 2u )
      {
        *(_OWORD *)(v16 + 16LL * v18) = *(_OWORD *)(v7 + 16LL * v18);
      }
      else
      {
        v20 = *(unsigned int *)(v7 + 16LL * v18 + 8);
        if ( *(_DWORD *)(v7 + 16LL * v18 + 8) && v15 >= v20 )
        {
          v21 = v17;
          v17 += v20;
          v15 -= v20;
        }
        else
        {
          v21 = 0LL;
        }
        v22 = *(const void **)(v7 + 16LL * v18);
        *(_QWORD *)&v33 = v21;
        memmove(v21, v22, v20);
        v19 = a5 + 2;
        *(_QWORD *)(v16 + 16LL * v18) = v33;
        *(_DWORD *)(v16 + 16LL * v18 + 12) = *(_DWORD *)(v7 + 16LL * v18 + 12);
        *(_DWORD *)(v16 + 16LL * v18 + 8) = *(_DWORD *)(v7 + 16LL * v18 + 8);
      }
      ++v18;
    }
    while ( v18 < v19 );
  }
  if ( v15 < 0x2E )
  {
    v23 = 0LL;
  }
  else
  {
    v23 = v17;
    v17 += 46;
    v15 -= 46LL;
  }
  *((_QWORD *)v23 + 2) = v16;
  v24 = *a2;
  v23[45] = a5;
  v25 = a5 + 2;
  v23[44] = v8;
  *((_DWORD *)v23 + 10) = a6;
  *(_OWORD *)v23 = v24;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v26 = (const void **)(v7 + 16LL * v25 + 8);
    v27 = (unsigned __int8)(v8 - v25);
    do
    {
      v28 = *(unsigned int *)v26;
      if ( *(_DWORD *)v26 && v15 >= v28 )
      {
        v29 = v17;
        v17 += v28;
        v15 -= v28;
      }
      else
      {
        v29 = 0LL;
      }
      memmove(v29, *(v26 - 1), v28);
      v30 = (char *)v26 - 8 - v7;
      *(_QWORD *)&v30[*((_QWORD *)v23 + 2)] = v29;
      *(_DWORD *)&v30[*((_QWORD *)v23 + 2) + 12] = *((_DWORD *)v26 + 1);
      v31 = *(_DWORD *)v26;
      v26 += 2;
      *(_DWORD *)&v30[*((_QWORD *)v23 + 2) + 8] = v31;
      --v27;
    }
    while ( v27 );
  }
  *a7 = v23;
  return 0LL;
}
