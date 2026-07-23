/*
 * XREFs of sub_1406F3224 @ 0x1406F3224
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_1406F3224(__int64 a1, unsigned int *a2)
{
  unsigned int v3; // edx
  __int64 *v4; // rdi
  __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v8; // r10d
  _DWORD *v9; // rdx
  unsigned int i; // ecx
  unsigned int v11; // eax
  __int64 Pool2; // rax
  _DWORD *v13; // r8
  unsigned int v14; // eax
  unsigned int j; // ecx
  unsigned int v16; // eax

  if ( a2 )
  {
    v4 = (__int64 *)(a2 + 2);
    v5 = *((_QWORD *)a2 + 1);
    if ( v5 )
    {
      v8 = *a2;
      v9 = (_DWORD *)*((_QWORD *)a2 + 1);
      for ( i = 0; i < v8; ++i )
      {
        v11 = *v9 + 4;
        if ( *v9 >= 0xFFFFFFFC || (_DWORD *)((char *)v9 + v11) < v9 )
          return (unsigned int)-1073741675;
        v9 = (_DWORD *)((char *)v9 + v11);
      }
      if ( v9 + 1 < v9 )
        return (unsigned int)-1073741675;
      if ( (unsigned __int64)(v9 + 2) > v5 + (unsigned __int64)a2[1] )
        return (unsigned int)-1073741789;
      *v9 = 4;
      v9[1] = -2147467263;
      ++*a2;
    }
    else
    {
      v6 = a2[1];
      if ( v6 + 8 < v6 )
      {
        a2[1] = -1;
        return (unsigned int)-1073741675;
      }
      a2[1] = v6 + 8;
      ++*a2;
    }
    if ( !a2[1] )
      return (unsigned int)-1073741762;
    Pool2 = ExAllocatePool2(0x100uLL, a2[1], 0x20534C53u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *v4 = Pool2;
    *a2 = 0;
    v13 = (_DWORD *)*v4;
    if ( !*v4 )
    {
      v14 = a2[1];
      if ( v14 + 8 >= v14 )
      {
        a2[1] = v14 + 8;
        ++*a2;
        return 0;
      }
      a2[1] = -1;
      return (unsigned int)-1073741675;
    }
    for ( j = 0; j < *a2; ++j )
    {
      v16 = *v13 + 4;
      if ( *v13 >= 0xFFFFFFFC || (_DWORD *)((char *)v13 + v16) < v13 )
        return (unsigned int)-1073741675;
      v13 = (_DWORD *)((char *)v13 + v16);
    }
    if ( v13 + 1 >= v13 )
    {
      v3 = 0;
      if ( (unsigned __int64)(v13 + 2) <= *((_QWORD *)a2 + 1) + (unsigned __int64)a2[1] )
      {
        *v13 = 4;
        v13[1] = -2147467263;
        ++*a2;
        return v3;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741675;
  }
  return (unsigned int)-1073741811;
}
