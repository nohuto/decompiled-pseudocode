/*
 * XREFs of MiEmptyCacheSlice @ 0x140693694
 * Callers:
 *     MiFreeLargeProcessPagesToCache @ 0x1406937E4 (MiFreeLargeProcessPagesToCache.c)
 *     MiFreeProcessLargePageCache @ 0x140693AC4 (MiFreeProcessLargePageCache.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiEmptyCacheSlice(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned __int64 v3; // r11
  __int64 v5; // rcx
  _QWORD *v6; // rax
  unsigned __int64 result; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rbx
  char v10; // di
  __int64 v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // r9

  v3 = *(unsigned int *)(a3 + 8);
  v5 = 4LL;
  v6 = a2;
  do
  {
    v6[2] = 0LL;
    v6[1] = v6;
    *v6 = v6;
    v6 += 3;
    --v5;
  }
  while ( v5 );
  result = 0xFFFFDE0000000000uLL;
  v8 = 48LL * *(_QWORD *)a3 - 0x220000000000LL;
  if ( v3 )
  {
    v9 = a2 + 6;
    do
    {
      v10 = -1;
      if ( _BitScanForward64((unsigned __int64 *)&v12, v3) )
        v10 = v12;
      *(_WORD *)(a3 + 12) ^= ((unsigned __int8)*(_WORD *)(a3 + 12) ^ (unsigned __int8)(*(_WORD *)(a3 + 12) - 1)) & 0x3F;
      v13 = (_QWORD *)a2[7];
      v14 = (_QWORD *)(v8 + 768LL * v10);
      if ( (_QWORD *)*v13 != v9 )
        __fastfail(3u);
      v14[1] = v13;
      *v14 = v9;
      *v13 = v14;
      a2[7] = v14;
      result = (unsigned int)~(1 << v10);
      ++a2[8];
      v3 &= result;
    }
    while ( v3 );
  }
  *(_DWORD *)(a3 + 8) = 0;
  return result;
}
