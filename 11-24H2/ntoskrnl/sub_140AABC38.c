/*
 * XREFs of sub_140AABC38 @ 0x140AABC38
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AABC38(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v5; // r9d
  unsigned int v6; // eax
  unsigned __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 Pool2; // rax
  _DWORD *v10; // rdx
  unsigned int v11; // eax
  unsigned int i; // ecx
  unsigned int v14; // eax
  unsigned __int64 v15; // rdx
  unsigned int v16; // eax
  unsigned int j; // ecx
  unsigned int v18; // eax

  v5 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v6 = *(_DWORD *)(a2 + 16) + 52;
  if ( v6 < *(_DWORD *)(a2 + 16) + 48 || v6 + v5 < v6 )
    return (unsigned int)-1073741675;
  if ( a3 < v6 + v5 )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = __rdtsc();
    qword_140FD8210 = v7;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  *(_DWORD *)(a4 + 4) = 20;
  v8 = 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
  if ( Pool2 )
  {
    *(_QWORD *)(a4 + 8) = Pool2;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    v8 = -1073741801;
  }
  if ( (v8 & 0x80000000) == 0 )
  {
    v10 = *(_DWORD **)(a4 + 8);
    if ( v10 )
    {
      for ( i = 0; i < *(_DWORD *)a4; ++i )
      {
        v14 = *v10 + 4;
        if ( *v10 >= 0xFFFFFFFC || (_DWORD *)((char *)v10 + v14) < v10 )
          return (unsigned int)-1073741675;
        v10 = (_DWORD *)((char *)v10 + v14);
      }
      if ( v10 + 1 < v10 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v10 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v10 = 4;
      v10[1] = 0;
    }
    else
    {
      v11 = *(_DWORD *)(a4 + 4);
      if ( v11 + 8 < v11 )
      {
LABEL_16:
        *(_DWORD *)(a4 + 4) = -1;
        return (unsigned int)-1073741675;
      }
      *(_DWORD *)(a4 + 4) = v11 + 8;
    }
    ++*(_DWORD *)a4;
    v15 = *(_QWORD *)(a4 + 8);
    if ( !v15 )
    {
      v16 = *(_DWORD *)(a4 + 4);
      if ( v16 + 12 >= v16 )
      {
        ++*(_DWORD *)a4;
        v8 = 0;
        *(_DWORD *)(a4 + 4) = v16 + 12;
        return v8;
      }
      goto LABEL_16;
    }
    for ( j = 0; j < *(_DWORD *)a4; ++j )
    {
      v18 = *(_DWORD *)v15 + 4;
      if ( *(_DWORD *)v15 >= 0xFFFFFFFC || v15 + v18 < v15 )
        return (unsigned int)-1073741675;
      v15 += v18;
    }
    if ( v15 + 4 < v15 )
      return (unsigned int)-1073741675;
    v8 = 0;
    if ( v15 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v15 = 8;
      *(_QWORD *)(v15 + 4) = v7;
      ++*(_DWORD *)a4;
      return v8;
    }
    return (unsigned int)-1073741789;
  }
  return v8;
}
