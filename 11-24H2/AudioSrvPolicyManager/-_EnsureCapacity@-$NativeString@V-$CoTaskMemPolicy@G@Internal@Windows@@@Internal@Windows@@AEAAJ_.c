/*
 * XREFs of ?_EnsureCapacity@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJ_K@Z @ 0x18001DA60
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180016930 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 * Callees:
 *     ?ULongLongMult@@YAJ_K0PEA_K@Z @ 0x180019AE0 (-ULongLongMult@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCapacity(
        __int64 a1,
        unsigned __int64 a2)
{
  unsigned __int64 v2; // rbp
  unsigned __int64 v4; // r10
  __int64 v5; // rcx
  int v6; // ebx
  _WORD *v7; // rax
  __int64 v8; // r10
  SIZE_T v9; // rsi
  LPVOID v10; // rax
  SIZE_T cb; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2 + 1;
  if ( a2 + 1 < a2 )
    return (unsigned int)-2147024362;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = -1LL;
  if ( v4 == -1LL )
  {
    if ( *(_QWORD *)(a1 + 8) == -1LL )
    {
      if ( *(_QWORD *)a1 )
      {
        do
          ++v5;
        while ( *(_WORD *)(*(_QWORD *)a1 + 2 * v5) );
      }
      else
      {
        v5 = 0LL;
      }
      *(_QWORD *)(a1 + 8) = v5;
    }
    else
    {
      v5 = *(_QWORD *)(a1 + 8);
    }
    v4 = (v5 + 1) & -(__int64)(*(_QWORD *)a1 != 0LL);
    *(_QWORD *)(a1 + 16) = v4;
  }
  if ( v4 )
  {
    v6 = 0;
    if ( v2 > v4 )
    {
      cb = 0LL;
      v6 = ULongLongMult(v4, 2uLL, &cb);
      if ( v6 >= 0 )
      {
        v9 = cb;
        if ( cb - v8 > 0x800 )
          v9 = v8 + 2048;
        if ( v2 > v9 )
          v9 = v2;
        v10 = CoTaskMemRealloc(*(LPVOID *)a1, 2 * v9);
        if ( v10 )
        {
          *(_QWORD *)(a1 + 16) = v9;
          *(_QWORD *)a1 = v10;
          return (unsigned int)v6;
        }
        return (unsigned int)-2147024882;
      }
    }
  }
  else
  {
    cb = 0LL;
    v6 = ULongLongMult(v2, 2uLL, &cb);
    if ( v6 >= 0 )
    {
      v7 = CoTaskMemAlloc(cb);
      if ( v7 )
      {
        *(_QWORD *)(a1 + 16) = v2;
        *(_QWORD *)a1 = v7;
        *v7 = 0;
        return (unsigned int)v6;
      }
      return (unsigned int)-2147024882;
    }
  }
  return (unsigned int)v6;
}
