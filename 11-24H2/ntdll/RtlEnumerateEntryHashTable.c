/*
 * XREFs of RtlEnumerateEntryHashTable @ 0x1800E2560
 * Callers:
 *     RtlWeaklyEnumerateEntryHashTable @ 0x180143940 (RtlWeaklyEnumerateEntryHashTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlEnumerateEntryHashTable(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // r11d
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  __int64 v8; // rdx
  unsigned int v9; // r9d
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  unsigned int v12; // ecx
  __int64 *v13; // rcx
  __int64 **v14; // r9
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *result; // rax

  v2 = *((_DWORD *)a2 + 8);
  v4 = *(_DWORD *)(a1 + 8);
  v6 = v2;
  v7 = v2 + 128;
LABEL_2:
  if ( v6 >= v4 )
    return 0LL;
  if ( v6 == v2 )
  {
    v10 = (_QWORD *)a2[3];
    v11 = a2;
  }
  else
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( v4 > 0x80 )
    {
      _BitScanReverse(&v12, v7);
      v9 = v7 ^ (1 << v12);
      v8 = *(_QWORD *)(v8 + 8LL * (v12 - 7));
    }
    else
    {
      v9 = v6;
    }
    v10 = (_QWORD *)(v8 + 16LL * v9);
    v11 = v10;
  }
  do
  {
    v11 = (_QWORD *)*v11;
    if ( v11 == v10 )
    {
      ++v6;
      ++v7;
      goto LABEL_2;
    }
  }
  while ( !v11[2] );
  v13 = (__int64 *)*a2;
  if ( *(__int64 **)(*a2 + 8) != a2 )
    goto LABEL_20;
  v14 = (__int64 **)a2[1];
  if ( *v14 != a2 )
    goto LABEL_20;
  *v14 = v13;
  v13[1] = (__int64)v14;
  v15 = (_QWORD *)a2[3];
  if ( v15 != v10 )
  {
    if ( (_QWORD *)*v15 == v15 )
      --*(_DWORD *)(a1 + 24);
    if ( (_QWORD *)*v10 == v10 )
      ++*(_DWORD *)(a1 + 24);
  }
  *((_DWORD *)a2 + 8) = v6;
  a2[3] = (__int64)v10;
  v16 = (_QWORD *)*v11;
  if ( *(_QWORD **)(*v11 + 8LL) != v11 )
LABEL_20:
    __fastfail(3u);
  *a2 = (__int64)v16;
  a2[1] = (__int64)v11;
  v16[1] = a2;
  result = v11;
  *v11 = a2;
  return result;
}
