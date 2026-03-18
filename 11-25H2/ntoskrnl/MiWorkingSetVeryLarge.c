/*
 * XREFs of MiWorkingSetVeryLarge @ 0x14043CCF0
 * Callers:
 *     MiOrderTrimList @ 0x14043CA00 (MiOrderTrimList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiWorkingSetVeryLarge(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  unsigned __int64 v4; // rbx
  unsigned int v5; // r8d
  int v6; // r11d
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r10
  int v11; // ecx
  _DWORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r9

  v2 = *(_QWORD *)(a1 + 144);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 32LL);
  if ( v2 <= v4 )
    return 0LL;
  v5 = 0;
  v6 = 0;
  v7 = (_QWORD *)*((_QWORD *)qword_140E2FD48 + *(unsigned __int16 *)(a1 + 174));
  v8 = v7[2314];
  if ( a2 && ((v2 ^ (v2 + a2)) & 0xFFFFFFFFFFFFFFC0uLL) == 0 )
  {
    v9 = -1LL;
  }
  else
  {
    v9 = v7[2336];
    v6 = 1;
    if ( v9 < v8 >> 4 && v2 >= v8 >> 4 )
      return 1LL;
  }
  if ( v2 - v4 < 3 * (v8 >> 2) )
    return 0LL;
  v11 = 0;
  v12 = (_DWORD *)v7 + 1801;
  v13 = 7LL;
  do
  {
    v11 += *v12++;
    --v13;
  }
  while ( v13 );
  v14 = v7[2200];
  if ( v11 == *(_DWORD *)(v14 + 44) )
    return 0LL;
  if ( !v6 )
    v9 = v7[2336];
  LOBYTE(v5) = v9 < 8LL * *(_QWORD *)(v14 + 312);
  return v5;
}
