/*
 * XREFs of sub_1406F857C @ 0x1406F857C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     KeReleaseMutex @ 0x1402DEA60 (KeReleaseMutex.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F857C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // edx
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r8
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  __int64 v12; // rbp
  NTSTATUS v13; // eax
  NTSTATUS v14; // esi
  NTSTATUS v15; // eax
  int v16; // edx
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 Pool2; // rax
  int v20; // esi
  _DWORD *v21; // rdx
  unsigned int j; // ecx
  unsigned int v23; // eax
  unsigned __int64 v24; // r8
  unsigned int v25; // ecx
  int v26; // edx
  unsigned int v27; // eax
  unsigned int k; // ecx
  unsigned int v29; // eax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( (_DWORD)v9 )
    v11 = v10;
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v12 = *(_QWORD *)v11;
  Interval.QuadPart = -35000000LL;
  do
  {
    v13 = KeDelayExecutionThread(1, 1u, &Interval);
    v14 = v13;
  }
  while ( v13 == 257 );
  if ( v13 >= 0 && v13 != 192 )
  {
    Interval.QuadPart = -270000000LL;
    do
    {
      v15 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, &Interval);
      v14 = v15;
    }
    while ( v15 == 257 );
    if ( v15 >= 0 && v15 != 192 && v15 != 258 )
      KeReleaseMutex(&Mutex, 0);
  }
  v16 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v17 = *(_DWORD *)(a2 + 16) + 52;
  if ( v17 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v18 = v17 + v16;
  v6 = v17 + v16 < v17 ? 0xC0000095 : 0;
  if ( v18 >= v17 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    Pool2 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
    v20 = v14 | 0x10000000;
    v21 = (_DWORD *)Pool2;
    for ( j = 0; j < *(_DWORD *)a4; ++j )
    {
      v23 = *v21 + 4;
      if ( *v21 >= 0xFFFFFFFC || (_DWORD *)((char *)v21 + v23) < v21 )
        return (unsigned int)-1073741675;
      v21 = (_DWORD *)((char *)v21 + v23);
    }
    if ( v21 + 1 >= v21 )
    {
      if ( (unsigned __int64)(v21 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v21 = 4;
      v21[1] = v20;
      ++*(_DWORD *)a4;
      v24 = *(_QWORD *)(a4 + 8);
      if ( !v24 )
      {
        v25 = *(_DWORD *)(a4 + 4);
        v26 = -1;
        v27 = v25 + 12;
        if ( v25 + 12 >= v25 )
          v26 = v25 + 12;
        *(_DWORD *)(a4 + 4) = v26;
        v6 = v27 < v25 ? 0xC0000095 : 0;
        if ( v27 >= v25 )
        {
          ++*(_DWORD *)a4;
          return 0;
        }
        return v6;
      }
      for ( k = 0; k < *(_DWORD *)a4; ++k )
      {
        v29 = *(_DWORD *)v24 + 4;
        if ( *(_DWORD *)v24 >= 0xFFFFFFFC || v24 + v29 < v24 )
          return (unsigned int)-1073741675;
        v24 += v29;
      }
      if ( v24 + 4 >= v24 )
      {
        v6 = 0;
        if ( v24 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v24 = 8;
          *(_QWORD *)(v24 + 4) = v12;
          ++*(_DWORD *)a4;
          return v6;
        }
        return (unsigned int)-1073741789;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v6;
}
