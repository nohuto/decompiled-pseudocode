/*
 * XREFs of CreateNewEventEntry @ 0x180034598
 * Callers:
 *     CrmLogSrvActivityStopStop @ 0x180033BA0 (CrmLogSrvActivityStopStop.c)
 * Callees:
 *     memcpy_0 @ 0x1800A7AF2 (memcpy_0.c)
 */

__int64 __fastcall CreateNewEventEntry(__int128 *a1, __int64 a2, __int64 a3, unsigned __int8 a4, int a5, _QWORD *a6)
{
  __int64 v7; // rdx
  int v8; // r15d
  __int64 v9; // rbx
  unsigned int *v10; // r9
  unsigned __int8 i; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  SIZE_T v14; // rbx
  HANDLE ProcessHeap; // rax
  char *v16; // rsi
  char *v17; // r14
  unsigned __int8 v18; // bp
  unsigned int v19; // ecx
  size_t v20; // r8
  void *v21; // r12
  char *v22; // rdi
  __int128 v23; // xmm0
  unsigned __int8 v24; // r15
  const void **v25; // r14
  __int64 v26; // r15
  size_t v27; // r8
  void *v28; // rbp
  char *v29; // rdx
  int v30; // eax

  v7 = 0LL;
  v8 = a4;
  v9 = 0LL;
  *a6 = 0LL;
  v10 = (unsigned int *)(a3 + 8);
  for ( i = 0; i < 0xDu; ++i )
  {
    v12 = *v10;
    v10 += 4;
    if ( i >= 2u )
      v9 += v12;
    v13 = v12 + v7;
    if ( i >= 2u )
      v13 = v7;
    v7 = v13;
  }
  if ( (unsigned __int64)(v9 + v13) > 0xFFFF )
    return 534LL;
  v14 = v9 + 254;
  if ( !v14 )
    return 8LL;
  ProcessHeap = GetProcessHeap();
  v16 = (char *)HeapAlloc(ProcessHeap, 8u, v14);
  if ( !v16 )
    return 8LL;
  if ( v14 < 0xD0 )
  {
    v17 = 0LL;
  }
  else
  {
    v17 = v16;
    v16 += 208;
    v14 -= 208LL;
  }
  v18 = 0;
  v19 = v8 + 2;
  do
  {
    if ( v18 < 2u )
    {
      *(_OWORD *)&v17[16 * v18] = *(_OWORD *)(a3 + 16LL * v18);
    }
    else
    {
      v20 = *(unsigned int *)(a3 + 16LL * v18 + 8);
      if ( *(_DWORD *)(a3 + 16LL * v18 + 8) && v14 >= v20 )
      {
        v21 = v16;
        v16 += v20;
        v14 -= v20;
      }
      else
      {
        v21 = 0LL;
      }
      memcpy_0(v21, *(const void **)(a3 + 16LL * v18), v20);
      v19 = v8 + 2;
      *(_QWORD *)&v17[16 * v18] = v21;
      *(_DWORD *)&v17[16 * v18 + 12] = *(_DWORD *)(a3 + 16LL * v18 + 12);
      *(_DWORD *)&v17[16 * v18 + 8] = *(_DWORD *)(a3 + 16LL * v18 + 8);
    }
    ++v18;
  }
  while ( v18 < v19 );
  if ( v14 < 0x2E )
  {
    v22 = 0LL;
  }
  else
  {
    v22 = v16;
    v16 += 46;
    v14 -= 46LL;
  }
  *((_QWORD *)v22 + 2) = v17;
  v23 = *a1;
  v22[45] = v8;
  v24 = v8 + 2;
  v22[44] = 13;
  *((_DWORD *)v22 + 10) = a5;
  *(_OWORD *)v22 = v23;
  if ( v24 < 0xDu )
  {
    v25 = (const void **)(a3 + 16LL * v24 + 8);
    v26 = (unsigned __int8)(13 - v24);
    do
    {
      v27 = *(unsigned int *)v25;
      if ( *(_DWORD *)v25 && v14 >= v27 )
      {
        v28 = v16;
        v16 += v27;
        v14 -= v27;
      }
      else
      {
        v28 = 0LL;
      }
      memcpy_0(v28, *(v25 - 1), v27);
      v29 = (char *)v25 - 8 - a3;
      *(_QWORD *)&v29[*((_QWORD *)v22 + 2)] = v28;
      *(_DWORD *)&v29[*((_QWORD *)v22 + 2) + 12] = *((_DWORD *)v25 + 1);
      v30 = *(_DWORD *)v25;
      v25 += 2;
      *(_DWORD *)&v29[*((_QWORD *)v22 + 2) + 8] = v30;
      --v26;
    }
    while ( v26 );
  }
  *a6 = v22;
  return 0LL;
}
