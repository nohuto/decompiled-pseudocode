/*
 * XREFs of CreateNewEventEntry @ 0x14003CA7C
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x14003DBFC (InsertEventEntryInLookUpTable.c)
 * Callees:
 *     CBufferAllocate @ 0x14003CCE4 (CBufferAllocate.c)
 *     memmove @ 0x140340480 (memmove.c)
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
  char *v20; // rdi
  __int128 v21; // xmm0
  unsigned __int8 v22; // si
  const void **v23; // r14
  __int64 v24; // r15
  size_t v25; // r8
  void *v26; // rsi
  char *v27; // rdx
  int v28; // eax
  size_t v30; // r8
  void *v31; // rax
  const void *v32; // rdx
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
      if ( v18 >= 2u )
      {
        v30 = *(unsigned int *)(v7 + 16LL * v18 + 8);
        if ( *(_DWORD *)(v7 + 16LL * v18 + 8) && v15 >= v30 )
        {
          v31 = v17;
          v17 += v30;
          v15 -= v30;
        }
        else
        {
          v31 = 0LL;
        }
        v32 = *(const void **)(v7 + 16LL * v18);
        *(_QWORD *)&v33 = v31;
        memmove(v31, v32, v30);
        v19 = a5 + 2;
        *(_QWORD *)(v16 + 16LL * v18) = v33;
        *(_DWORD *)(v16 + 16LL * v18 + 12) = *(_DWORD *)(v7 + 16LL * v18 + 12);
        *(_DWORD *)(v16 + 16LL * v18 + 8) = *(_DWORD *)(v7 + 16LL * v18 + 8);
      }
      else
      {
        *(_OWORD *)(v16 + 16LL * v18) = *(_OWORD *)(v7 + 16LL * v18);
      }
      ++v18;
    }
    while ( v18 < v19 );
  }
  if ( v15 < 0x2E )
  {
    v20 = 0LL;
  }
  else
  {
    v20 = v17;
    v17 += 46;
    v15 -= 46LL;
  }
  *((_QWORD *)v20 + 2) = v16;
  v21 = *a2;
  v20[45] = a5;
  v22 = a5 + 2;
  v20[44] = v8;
  *((_DWORD *)v20 + 10) = a6;
  *(_OWORD *)v20 = v21;
  if ( (unsigned __int8)(a5 + 2) < (unsigned __int8)v8 )
  {
    v23 = (const void **)(v7 + 16LL * v22 + 8);
    v24 = (unsigned __int8)(v8 - v22);
    do
    {
      v25 = *(unsigned int *)v23;
      if ( *(_DWORD *)v23 && v15 >= v25 )
      {
        v26 = v17;
        v17 += v25;
        v15 -= v25;
      }
      else
      {
        v26 = 0LL;
      }
      memmove(v26, *(v23 - 1), v25);
      v27 = (char *)v23 - 8 - v7;
      *(_QWORD *)&v27[*((_QWORD *)v20 + 2)] = v26;
      *(_DWORD *)&v27[*((_QWORD *)v20 + 2) + 12] = *((_DWORD *)v23 + 1);
      v28 = *(_DWORD *)v23;
      v23 += 2;
      *(_DWORD *)&v27[*((_QWORD *)v20 + 2) + 8] = v28;
      --v24;
    }
    while ( v24 );
  }
  *a7 = v20;
  return 0LL;
}
