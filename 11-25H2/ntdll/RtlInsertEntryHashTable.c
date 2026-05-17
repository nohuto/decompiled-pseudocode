/*
 * XREFs of RtlInsertEntryHashTable @ 0x1800DDDD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpPopulateContext @ 0x1800DDF90 (RtlpPopulateContext.c)
 */

char __fastcall RtlInsertEntryHashTable(__int64 a1, _QWORD *a2, unsigned __int64 a3, __int128 *a4)
{
  __int128 *v4; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r9
  _QWORD *v10; // rax
  _QWORD *v11; // r9
  _QWORD *i; // rdx
  unsigned __int64 v13; // rcx
  __int64 *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int128 v18; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v19; // [rsp+30h] [rbp-18h]

  a2[2] = a3;
  ++*(_DWORD *)(a1 + 20);
  v19 = 0LL;
  v4 = a4;
  v18 = 0LL;
  if ( a4 )
  {
    if ( !*(_QWORD *)a4 )
      RtlpPopulateContext(a1, a4);
    v10 = *(_QWORD **)v4;
  }
  else
  {
    v7 = (69069 * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4)) + 1) & 0xFFFF0000 | ((1103515245
                                                                                * ((unsigned int)a3 >> *(_DWORD *)(a1 + 4))
                                                                                + 12345) >> 16);
    v8 = v7 & *(_DWORD *)(a1 + 16);
    if ( v8 < *(_DWORD *)(a1 + 12) )
      v8 = v7 & ((2 * *(_DWORD *)(a1 + 16)) | 1);
    v9 = *(_QWORD *)(a1 + 32);
    if ( *(_DWORD *)(a1 + 8) > 0x80u )
    {
      _BitScanReverse(&v16, v8 + 128);
      v8 = (v8 + 128) ^ (1 << v16);
      v9 = *(_QWORD *)(v9 + 8LL * (v16 - 7));
    }
    v10 = (_QWORD *)(v9 + 16LL * v8);
    v11 = v10;
    for ( i = (_QWORD *)*v10; i != v10; i = (_QWORD *)*i )
    {
      v13 = i[2];
      if ( v13 && v13 >= a3 )
        break;
      v11 = i;
    }
    *(_QWORD *)&v18 = v10;
    v4 = &v18;
    *((_QWORD *)&v18 + 1) = v11;
    v19 = a3;
  }
  if ( (_QWORD *)*v10 == v10 )
    ++*(_DWORD *)(a1 + 24);
  v14 = (__int64 *)*((_QWORD *)v4 + 1);
  v15 = *v14;
  if ( *(__int64 **)(*v14 + 8) != v14 )
    __fastfail(3u);
  a2[1] = v14;
  *a2 = v15;
  *(_QWORD *)(v15 + 8) = a2;
  *v14 = (__int64)a2;
  return 1;
}
